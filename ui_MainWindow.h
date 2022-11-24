/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <Terminal.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCapture_Terminal;
    QAction *actionStart_Logging;
    QAction *actionStop_Logging;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QWidget *widget_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *LogPathInput;
    QPushButton *BrowseButton;
    QCheckBox *LogRawDataCheck;
    QPushButton *StartStopLoggingButton;
    QCheckBox *OvevrwritePromptCheck;
    QLabel *label_6;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QPushButton *RefreshDevicesButton;
    QComboBox *BluetoothDevicesBox;
    QPushButton *ConnectButton;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *StatusLabel;
    Terminal *terminal;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *EchoTerminalCheck;
    QSpacerItem *verticalSpacer;
    QCheckBox *DisplayInHexCheck;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 424);
        actionCapture_Terminal = new QAction(MainWindow);
        actionCapture_Terminal->setObjectName(QString::fromUtf8("actionCapture_Terminal"));
        actionStart_Logging = new QAction(MainWindow);
        actionStart_Logging->setObjectName(QString::fromUtf8("actionStart_Logging"));
        actionStop_Logging = new QAction(MainWindow);
        actionStop_Logging->setObjectName(QString::fromUtf8("actionStop_Logging"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        gridLayout_4->addWidget(widget_5, 2, 1, 1, 1);

        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        LogPathInput = new QLineEdit(widget_3);
        LogPathInput->setObjectName(QString::fromUtf8("LogPathInput"));
        LogPathInput->setMinimumSize(QSize(0, 0));
        LogPathInput->setMaximumSize(QSize(9999999, 16777215));

        horizontalLayout->addWidget(LogPathInput);

        BrowseButton = new QPushButton(widget_3);
        BrowseButton->setObjectName(QString::fromUtf8("BrowseButton"));

        horizontalLayout->addWidget(BrowseButton);


        gridLayout_4->addWidget(widget_3, 1, 0, 1, 2);

        LogRawDataCheck = new QCheckBox(widget_4);
        LogRawDataCheck->setObjectName(QString::fromUtf8("LogRawDataCheck"));

        gridLayout_4->addWidget(LogRawDataCheck, 3, 0, 1, 1);

        StartStopLoggingButton = new QPushButton(widget_4);
        StartStopLoggingButton->setObjectName(QString::fromUtf8("StartStopLoggingButton"));

        gridLayout_4->addWidget(StartStopLoggingButton, 2, 0, 1, 1);

        OvevrwritePromptCheck = new QCheckBox(widget_4);
        OvevrwritePromptCheck->setObjectName(QString::fromUtf8("OvevrwritePromptCheck"));

        gridLayout_4->addWidget(OvevrwritePromptCheck, 4, 0, 1, 1);

        label_6 = new QLabel(widget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(12);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 2);


        gridLayout_3->addWidget(widget_4, 0, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        RefreshDevicesButton = new QPushButton(widget);
        RefreshDevicesButton->setObjectName(QString::fromUtf8("RefreshDevicesButton"));

        gridLayout_2->addWidget(RefreshDevicesButton, 2, 0, 1, 1);

        BluetoothDevicesBox = new QComboBox(widget);
        BluetoothDevicesBox->setObjectName(QString::fromUtf8("BluetoothDevicesBox"));

        gridLayout_2->addWidget(BluetoothDevicesBox, 1, 1, 1, 1);

        ConnectButton = new QPushButton(widget);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));

        gridLayout_2->addWidget(ConnectButton, 2, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        StatusLabel = new QLabel(widget);
        StatusLabel->setObjectName(QString::fromUtf8("StatusLabel"));
        StatusLabel->setWordWrap(true);

        gridLayout_2->addWidget(StatusLabel, 3, 1, 1, 1);


        gridLayout_3->addWidget(widget, 4, 0, 2, 1);

        terminal = new Terminal(centralWidget);
        terminal->setObjectName(QString::fromUtf8("terminal"));
        terminal->setReadOnly(true);

        gridLayout_3->addWidget(terminal, 0, 1, 6, 1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);

        EchoTerminalCheck = new QCheckBox(widget_2);
        EchoTerminalCheck->setObjectName(QString::fromUtf8("EchoTerminalCheck"));
        EchoTerminalCheck->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(EchoTerminalCheck, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 3);

        DisplayInHexCheck = new QCheckBox(widget_2);
        DisplayInHexCheck->setObjectName(QString::fromUtf8("DisplayInHexCheck"));

        gridLayout->addWidget(DisplayInHexCheck, 5, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 3, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 630, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionCapture_Terminal);
        menuFile->addAction(actionStart_Logging);
        menuFile->addAction(actionStop_Logging);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCapture_Terminal->setText(QCoreApplication::translate("MainWindow", "Capture Terminal", nullptr));
        actionStart_Logging->setText(QCoreApplication::translate("MainWindow", "Start Logging", nullptr));
        actionStop_Logging->setText(QCoreApplication::translate("MainWindow", "Stop Logging", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Log to file:", nullptr));
        LogPathInput->setText(QCoreApplication::translate("MainWindow", "C:\\BluetoothLogs\\log.txt", nullptr));
        BrowseButton->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
#if QT_CONFIG(statustip)
        LogRawDataCheck->setStatusTip(QCoreApplication::translate("MainWindow", "Logs data as hex values separated by commas. Newlines are preserved.", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        LogRawDataCheck->setWhatsThis(QCoreApplication::translate("MainWindow", "Logs data as hex values separated by commas. Newlines are preserved.", nullptr));
#endif // QT_CONFIG(whatsthis)
        LogRawDataCheck->setText(QCoreApplication::translate("MainWindow", "Log Raw Data", nullptr));
        StartStopLoggingButton->setText(QCoreApplication::translate("MainWindow", "Start Logging", nullptr));
        OvevrwritePromptCheck->setText(QCoreApplication::translate("MainWindow", "Prompt when overwriting", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Logging", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Devices:", nullptr));
        RefreshDevicesButton->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
        ConnectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Bluetooth Settings", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Status:", nullptr));
        StatusLabel->setText(QCoreApplication::translate("MainWindow", "Not Connected", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Control", nullptr));
        EchoTerminalCheck->setText(QCoreApplication::translate("MainWindow", "Echo Terminal", nullptr));
        DisplayInHexCheck->setText(QCoreApplication::translate("MainWindow", "Display In Hex", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
