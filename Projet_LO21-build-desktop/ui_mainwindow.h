/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed May 23 00:32:50 2012
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionClavier;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QSpinBox *spinBox;
    QLabel *label_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QLabel *label;
    QCheckBox *checkBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_21;
    QPushButton *pushButton_14;
    QPushButton *pushButton_17;
    QPushButton *pushButton_13;
    QPushButton *pushButton_15;
    QPushButton *pushButton_18;
    QPushButton *pushButton_22;
    QPushButton *pushButton_40;
    QPushButton *pushButton_19;
    QPushButton *pushButton_16;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_33;
    QPushButton *pushButton_27;
    QPushButton *pushButton_28;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_29;
    QPushButton *pushButton_36;
    QPushButton *pushButton_20;
    QPushButton *pushButton_30;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_39;
    QPushButton *pushButton_23;
    QPushButton *pushButton_38;
    QPushButton *pushButton_37;
    QMenuBar *menuBar;
    QMenu *menuCalculatrice;
    QMenu *menuMode;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(929, 359);
        MainWindow->setAcceptDrops(false);
        MainWindow->setAnimated(true);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionClavier = new QAction(MainWindow);
        actionClavier->setObjectName(QString::fromUtf8("actionClavier"));
        actionClavier->setCheckable(true);
        actionClavier->setChecked(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setAutoFillBackground(false);
        verticalLayout_6 = new QVBoxLayout(centralWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_6->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_6->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_6->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_6->addWidget(pushButton_6, 3, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_6->addWidget(pushButton, 4, 0, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_6->addWidget(pushButton_5, 5, 0, 1, 1);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(10);

        gridLayout_6->addWidget(spinBox, 7, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_6->addWidget(label_2, 6, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_6);

        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMouseTracking(false);

        horizontalLayout->addWidget(listWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QFont font;
        font.setPointSize(24);
        textEdit->setFont(font);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setReadOnly(true);

        verticalLayout_5->addWidget(textEdit);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout_2->addWidget(checkBox, 1, 0, 1, 1);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_2->addWidget(radioButton, 1, 1, 1, 1);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 1, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_4->addWidget(pushButton_7, 0, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_4->addWidget(pushButton_8, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_4->addWidget(pushButton_9, 0, 2, 1, 1);

        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_4->addWidget(pushButton_10, 0, 3, 1, 1);

        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_4->addWidget(pushButton_11, 1, 0, 1, 1);

        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_4->addWidget(pushButton_12, 2, 0, 1, 1);

        pushButton_21 = new QPushButton(centralWidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        gridLayout_4->addWidget(pushButton_21, 4, 0, 1, 2);

        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_4->addWidget(pushButton_14, 1, 1, 1, 1);

        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        gridLayout_4->addWidget(pushButton_17, 2, 1, 1, 1);

        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_4->addWidget(pushButton_13, 3, 0, 1, 3);

        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_4->addWidget(pushButton_15, 1, 2, 1, 1);

        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        gridLayout_4->addWidget(pushButton_18, 2, 2, 1, 1);

        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));

        gridLayout_4->addWidget(pushButton_22, 3, 3, 1, 1);

        pushButton_40 = new QPushButton(centralWidget);
        pushButton_40->setObjectName(QString::fromUtf8("pushButton_40"));

        gridLayout_4->addWidget(pushButton_40, 4, 2, 1, 2);

        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout_4->addWidget(pushButton_19, 2, 3, 1, 1);

        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout_4->addWidget(pushButton_16, 1, 3, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_24 = new QPushButton(centralWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        gridLayout_5->addWidget(pushButton_24, 0, 0, 1, 1);

        pushButton_25 = new QPushButton(centralWidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));

        gridLayout_5->addWidget(pushButton_25, 0, 1, 1, 1);

        pushButton_26 = new QPushButton(centralWidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));

        gridLayout_5->addWidget(pushButton_26, 0, 2, 1, 1);

        pushButton_33 = new QPushButton(centralWidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));

        gridLayout_5->addWidget(pushButton_33, 0, 3, 1, 1);

        pushButton_27 = new QPushButton(centralWidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));

        gridLayout_5->addWidget(pushButton_27, 1, 0, 1, 1);

        pushButton_28 = new QPushButton(centralWidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));

        gridLayout_5->addWidget(pushButton_28, 1, 1, 1, 1);

        pushButton_34 = new QPushButton(centralWidget);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));

        gridLayout_5->addWidget(pushButton_34, 2, 0, 1, 1);

        pushButton_35 = new QPushButton(centralWidget);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));

        gridLayout_5->addWidget(pushButton_35, 2, 1, 1, 1);

        pushButton_29 = new QPushButton(centralWidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));

        gridLayout_5->addWidget(pushButton_29, 3, 0, 1, 1);

        pushButton_36 = new QPushButton(centralWidget);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));

        gridLayout_5->addWidget(pushButton_36, 3, 1, 1, 1);

        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout_5->addWidget(pushButton_20, 4, 0, 1, 2);

        pushButton_30 = new QPushButton(centralWidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));

        gridLayout_5->addWidget(pushButton_30, 1, 2, 1, 1);

        pushButton_31 = new QPushButton(centralWidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));

        gridLayout_5->addWidget(pushButton_31, 2, 2, 1, 1);

        pushButton_32 = new QPushButton(centralWidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));

        gridLayout_5->addWidget(pushButton_32, 3, 2, 1, 1);

        pushButton_39 = new QPushButton(centralWidget);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));

        gridLayout_5->addWidget(pushButton_39, 3, 3, 1, 1);

        pushButton_23 = new QPushButton(centralWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setMinimumSize(QSize(0, 0));

        gridLayout_5->addWidget(pushButton_23, 4, 2, 1, 2);

        pushButton_38 = new QPushButton(centralWidget);
        pushButton_38->setObjectName(QString::fromUtf8("pushButton_38"));

        gridLayout_5->addWidget(pushButton_38, 2, 3, 1, 1);

        pushButton_37 = new QPushButton(centralWidget);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));

        gridLayout_5->addWidget(pushButton_37, 1, 3, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_5);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout_5);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 929, 25));
        menuCalculatrice = new QMenu(menuBar);
        menuCalculatrice->setObjectName(QString::fromUtf8("menuCalculatrice"));
        menuMode = new QMenu(menuBar);
        menuMode->setObjectName(QString::fromUtf8("menuMode"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuCalculatrice->menuAction());
        menuBar->addAction(menuMode->menuAction());
        menuCalculatrice->addAction(actionQuitter);
        menuMode->addAction(actionClavier);

        retranslateUi(MainWindow);
        QObject::connect(actionQuitter, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculatrice", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionClavier->setText(QApplication::translate("MainWindow", "Clavier", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "DUP", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "SUM", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "DROP", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "CLEAR", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "SWAP", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "MEAN", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Taille :", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Entier", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "R\303\251el", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Rationnel", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "Mode :", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindow", "Complexe", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Degr\303\251s", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Radian", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        pushButton_21->setText(QApplication::translate("MainWindow", "Enter", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        pushButton_17->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        pushButton_13->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        pushButton_18->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        pushButton_22->setText(QApplication::translate("MainWindow", "/", 0, QApplication::UnicodeUTF8));
        pushButton_40->setText(QApplication::translate("MainWindow", "EVAL", 0, QApplication::UnicodeUTF8));
        pushButton_19->setText(QApplication::translate("MainWindow", "*", 0, QApplication::UnicodeUTF8));
        pushButton_16->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        pushButton_24->setText(QApplication::translate("MainWindow", "SIGN", 0, QApplication::UnicodeUTF8));
        pushButton_25->setText(QApplication::translate("MainWindow", "MOD", 0, QApplication::UnicodeUTF8));
        pushButton_26->setText(QApplication::translate("MainWindow", "POW", 0, QApplication::UnicodeUTF8));
        pushButton_33->setText(QApplication::translate("MainWindow", "FACT", 0, QApplication::UnicodeUTF8));
        pushButton_27->setText(QApplication::translate("MainWindow", "COS", 0, QApplication::UnicodeUTF8));
        pushButton_28->setText(QApplication::translate("MainWindow", "COSH", 0, QApplication::UnicodeUTF8));
        pushButton_34->setText(QApplication::translate("MainWindow", "SIN", 0, QApplication::UnicodeUTF8));
        pushButton_35->setText(QApplication::translate("MainWindow", "SINH", 0, QApplication::UnicodeUTF8));
        pushButton_29->setText(QApplication::translate("MainWindow", "TAN", 0, QApplication::UnicodeUTF8));
        pushButton_36->setText(QApplication::translate("MainWindow", "TANH", 0, QApplication::UnicodeUTF8));
        pushButton_20->setText(QApplication::translate("MainWindow", "Annuler", 0, QApplication::UnicodeUTF8));
        pushButton_30->setText(QApplication::translate("MainWindow", "LN", 0, QApplication::UnicodeUTF8));
        pushButton_31->setText(QApplication::translate("MainWindow", "INV", 0, QApplication::UnicodeUTF8));
        pushButton_32->setText(QApplication::translate("MainWindow", "SQRT", 0, QApplication::UnicodeUTF8));
        pushButton_39->setText(QApplication::translate("MainWindow", "CUBE", 0, QApplication::UnicodeUTF8));
        pushButton_23->setText(QApplication::translate("MainWindow", "R\303\251tablir", 0, QApplication::UnicodeUTF8));
        pushButton_38->setText(QApplication::translate("MainWindow", "SQR", 0, QApplication::UnicodeUTF8));
        pushButton_37->setText(QApplication::translate("MainWindow", "LOG", 0, QApplication::UnicodeUTF8));
        menuCalculatrice->setTitle(QApplication::translate("MainWindow", "Calculatrice", 0, QApplication::UnicodeUTF8));
        menuMode->setTitle(QApplication::translate("MainWindow", "Mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
