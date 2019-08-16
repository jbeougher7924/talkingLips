/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *audi_file_lbl;
    QLineEdit *audi_file_LnEd;
    QPushButton *audio_browse_btn;
    QListView *phon_LsVw;
    QListView *lip_image_LsVw;
    QTextEdit *status_TxEd;
    QLabel *label;
    QPushButton *start_process_btn;
    QLabel *Process_Audio_lb;
    QLabel *action_lbl;
    QLineEdit *action_LnEd;
    QLabel *image_dir_lbl;
    QPushButton *image_dir_btn;
    QLineEdit *image_dir_LnEd;
    QLabel *build_lips_lb_2;
    QPushButton *start_build_btn;
    QPushButton *close_btn;
    QPushButton *json_file_btn;
    QLabel *json_file_lbl;
    QLineEdit *json_file_LnEd;
    QPushButton *test_btn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(747, 653);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        audi_file_lbl = new QLabel(centralWidget);
        audi_file_lbl->setObjectName(QString::fromUtf8("audi_file_lbl"));
        audi_file_lbl->setGeometry(QRect(10, 20, 47, 13));
        audi_file_LnEd = new QLineEdit(centralWidget);
        audi_file_LnEd->setObjectName(QString::fromUtf8("audi_file_LnEd"));
        audi_file_LnEd->setGeometry(QRect(60, 20, 151, 20));
        audio_browse_btn = new QPushButton(centralWidget);
        audio_browse_btn->setObjectName(QString::fromUtf8("audio_browse_btn"));
        audio_browse_btn->setGeometry(QRect(230, 20, 75, 23));
        phon_LsVw = new QListView(centralWidget);
        phon_LsVw->setObjectName(QString::fromUtf8("phon_LsVw"));
        phon_LsVw->setGeometry(QRect(20, 150, 256, 192));
        lip_image_LsVw = new QListView(centralWidget);
        lip_image_LsVw->setObjectName(QString::fromUtf8("lip_image_LsVw"));
        lip_image_LsVw->setGeometry(QRect(310, 150, 256, 192));
        status_TxEd = new QTextEdit(centralWidget);
        status_TxEd->setObjectName(QString::fromUtf8("status_TxEd"));
        status_TxEd->setGeometry(QRect(20, 400, 591, 191));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 360, 47, 13));
        start_process_btn = new QPushButton(centralWidget);
        start_process_btn->setObjectName(QString::fromUtf8("start_process_btn"));
        start_process_btn->setGeometry(QRect(90, 110, 75, 23));
        Process_Audio_lb = new QLabel(centralWidget);
        Process_Audio_lb->setObjectName(QString::fromUtf8("Process_Audio_lb"));
        Process_Audio_lb->setGeometry(QRect(10, 110, 81, 16));
        action_lbl = new QLabel(centralWidget);
        action_lbl->setObjectName(QString::fromUtf8("action_lbl"));
        action_lbl->setGeometry(QRect(10, 60, 47, 13));
        action_LnEd = new QLineEdit(centralWidget);
        action_LnEd->setObjectName(QString::fromUtf8("action_LnEd"));
        action_LnEd->setGeometry(QRect(60, 60, 151, 20));
        image_dir_lbl = new QLabel(centralWidget);
        image_dir_lbl->setObjectName(QString::fromUtf8("image_dir_lbl"));
        image_dir_lbl->setGeometry(QRect(330, 20, 47, 13));
        image_dir_btn = new QPushButton(centralWidget);
        image_dir_btn->setObjectName(QString::fromUtf8("image_dir_btn"));
        image_dir_btn->setGeometry(QRect(550, 20, 75, 23));
        image_dir_LnEd = new QLineEdit(centralWidget);
        image_dir_LnEd->setObjectName(QString::fromUtf8("image_dir_LnEd"));
        image_dir_LnEd->setGeometry(QRect(380, 20, 151, 20));
        build_lips_lb_2 = new QLabel(centralWidget);
        build_lips_lb_2->setObjectName(QString::fromUtf8("build_lips_lb_2"));
        build_lips_lb_2->setGeometry(QRect(370, 110, 81, 16));
        start_build_btn = new QPushButton(centralWidget);
        start_build_btn->setObjectName(QString::fromUtf8("start_build_btn"));
        start_build_btn->setGeometry(QRect(450, 110, 75, 23));
        close_btn = new QPushButton(centralWidget);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setGeometry(QRect(630, 550, 75, 23));
        json_file_btn = new QPushButton(centralWidget);
        json_file_btn->setObjectName(QString::fromUtf8("json_file_btn"));
        json_file_btn->setGeometry(QRect(550, 50, 75, 23));
        json_file_lbl = new QLabel(centralWidget);
        json_file_lbl->setObjectName(QString::fromUtf8("json_file_lbl"));
        json_file_lbl->setGeometry(QRect(330, 50, 47, 13));
        json_file_LnEd = new QLineEdit(centralWidget);
        json_file_LnEd->setObjectName(QString::fromUtf8("json_file_LnEd"));
        json_file_LnEd->setGeometry(QRect(380, 50, 151, 20));
        test_btn = new QPushButton(centralWidget);
        test_btn->setObjectName(QString::fromUtf8("test_btn"));
        test_btn->setGeometry(QRect(630, 300, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 747, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(close_btn, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        audi_file_lbl->setText(QCoreApplication::translate("MainWindow", "Audio File", nullptr));
        audio_browse_btn->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        start_process_btn->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        Process_Audio_lb->setText(QCoreApplication::translate("MainWindow", "Process Audio", nullptr));
        action_lbl->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        image_dir_lbl->setText(QCoreApplication::translate("MainWindow", "Image Dir", nullptr));
        image_dir_btn->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        build_lips_lb_2->setText(QCoreApplication::translate("MainWindow", "Build File", nullptr));
        start_build_btn->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        close_btn->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        json_file_btn->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        json_file_lbl->setText(QCoreApplication::translate("MainWindow", "Json File", nullptr));
        test_btn->setText(QCoreApplication::translate("MainWindow", "test button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
