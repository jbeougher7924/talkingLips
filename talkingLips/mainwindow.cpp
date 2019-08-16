#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tempTestCode();
    connect_slots();

//    readFile();
//    qDebug() << process_Audio(QFileDialog::getOpenFileName());
}

void MainWindow::tempTestCode()
{
    ui->audi_file_LnEd->setText("rhubarb/audio_in/hear_me.wav");
    ui->action_LnEd->setText("Smile");
    ui->json_file_LnEd->setText("json/hear_me.json");
}

MainWindow::~MainWindow()
{
    delete ui;
}

QJsonDocument MainWindow::readFile()
{
//    QString filename = QFileDialog::getOpenFileName();
    QString filename = ui->json_file_LnEd->text();
    QString settings;
    QFile file;
    file.setFileName(filename);
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    settings = file.readAll();
    file.close();
//    qDebug() << filename;
    QJsonDocument sd = QJsonDocument::fromJson(settings.toUtf8());

//    QJsonObject sett2 = sd.object();
//    qDebug() << sett2.value(QString("metadata"));  // <- print my title
//    qDebug() << sett2.value(QString("mouthCues"));  // <- print my title
    return sd;

}


void MainWindow::buildFile()
{

    updateStatus("Started building json file.");

    QStringList jsonFilePath = ui->json_file_LnEd->text().split('/');
    QStringList jsonFileName = jsonFilePath.last().split('.');
    QString jsonActionFileName = "json/" + jsonFileName.first() + "_" + ui->action_LnEd->text() + "." + jsonFileName.last();
    QFile saveFile(jsonActionFileName);

    if (!saveFile.open(QIODevice::WriteOnly)) {
            qWarning("Couldn't open save file.");
        }

    QJsonDocument phoneFile = readFile();
    QJsonObject mouthQueue = phoneFile.object();
    lapseTimeCalc(mouthQueue);

    write(mouthQueue);

    QJsonDocument saveDoc(mouthQueue);

    saveFile.write(saveDoc.toJson(QJsonDocument::Indented));
    updateStatus("Json Action File Completed.");
}

void MainWindow::lapseTimeCalc(QJsonObject &json)
{

    QJsonArray mouthArray   = json["mouthCues"].toArray();
    for (int mouthIndex = 0; mouthIndex < mouthArray.size(); ++mouthIndex) {
        QJsonObject mouthObject = mouthArray[mouthIndex].toObject();
        double endTime = mouthObject["end"].toDouble();
        double startTime = mouthObject["start"].toDouble();
        double lapseTime = endTime - startTime;
        mouthObject["lapse"] = lapseTime;
        mouthArray[mouthIndex] = mouthObject;
    }
    json["mouthCues"] = mouthArray;

}

void MainWindow::connect_slots()
{
    QString status = "Done";
    connect(ui->audio_browse_btn, SIGNAL(clicked()), this, SLOT(assignAudioFileName()));
    connect(ui->image_dir_btn, SIGNAL(clicked()), this, SLOT(assignImageFileName()));
    connect(ui->json_file_btn, SIGNAL(clicked()), this, SLOT(assignJsonFileName()));
    connect(ui->start_process_btn, SIGNAL(clicked()), this, SLOT(process_Audio()));
    connect(&audioProcessor, SIGNAL(finished(int)), this, SLOT(updateStatusDone()));
    connect(ui->start_build_btn, SIGNAL(clicked()), this, SLOT(buildFile()));
//    connect(ui->test_btn, SIGNAL(clicked()), this, SLOT(lapseTimeCalc()));



}

void MainWindow::write(QJsonObject &json)
{
    json["action"] = ui->action_LnEd->text();
    json["images"] = "test.png";
}

 void MainWindow::assignAudioFileName()
{
    QString filename = QFileDialog::getOpenFileName();
    ui->audi_file_LnEd->setText(filename);
 }

 void MainWindow::assignJsonFileName()
{
    QString filename = QFileDialog::getOpenFileName();
    ui->json_file_LnEd->setText(filename);
 }

 void MainWindow::assignImageFileName()
 {
     QString filename = QFileDialog::getOpenFileName();
     ui->image_dir_LnEd->setText(filename);
 }

 void MainWindow::updateStatus(QString status_value)
 {
     ui->status_TxEd->append(status_value);
 }

 void MainWindow::updateStatusDone()
 {
     QString status_value = "Audio to phonemes file done processing.";
     ui->status_TxEd->append(status_value);
 }



bool MainWindow::process_Audio()
{

//    QString program = QFileDialog::getOpenFileName();
    QString program = "rhubarb/rhubarb.exe";
//    qDebug() << "path" << program;
    QStringList arguments;
//    QString filename = QFileDialog::getOpenFileName();
//    arguments << "-o" << "justName.json" << filename << "-f json";

    if (!ui->audi_file_LnEd->text().isEmpty())
    {
        QString filename = ui->audi_file_LnEd->text();
//        QString filename = QFileDialog::getOpenFileName();
        QString justName = filename.split('/').last().split('.').first();

        QString jsonFile = "json/" +justName+ ".json";
        phone_json = jsonFile;
        ui->json_file_LnEd->setText(phone_json);
//        qDebug() << "Just name" << jsonFile;
        arguments << "-o" << jsonFile << filename << "-f json";
        updateStatus("Started processing audio 'Please Wait'");
    }
    else {
        return false;
    }

    audioProcessor.start(program, arguments);
    if (!audioProcessor.waitForStarted())
           return false;

//    if(!audioProcessor.waitForFinished())
//        return false;

    return true;
}


