#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>
#include <QFileDialog>
#include <QString>
#include <QStringList>
#include <QObject>
#include <QProcess>
#include <QJsonArray>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QProcess audioProcessor;
    QString phone_json;
    QJsonDocument readFile();
    void connect_slots();
    void tempTestCode();
    void write(QJsonObject &json);


public slots:
    bool process_Audio();
    void assignAudioFileName();
    void assignImageFileName();
    void assignJsonFileName();
    void updateStatus(QString status_value);
    void updateStatusDone();
    void buildFile();
    void lapseTimeCalc(QJsonObject &json);


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
