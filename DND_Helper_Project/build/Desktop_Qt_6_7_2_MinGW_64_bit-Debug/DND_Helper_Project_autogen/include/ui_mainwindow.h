/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QListWidget *listWidget_summary;
    QFrame *line_2;
    QWidget *widget;
    QWidget *diceRollerWidget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QVBoxLayout *rollLayout1_D4_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_d4;
    QLabel *label_14;
    QPushButton *pushButton_D4_2;
    QFrame *frame1;
    QVBoxLayout *rollLayout2_D6_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_d6;
    QLabel *label_15;
    QPushButton *pushButton_D6_2;
    QFrame *frame2;
    QVBoxLayout *rollLayout3_D8_2;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_d8;
    QLabel *label_d8;
    QPushButton *pushButton_D8_2;
    QFrame *frame3;
    QVBoxLayout *rollLayout4_D10_2;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit_d10;
    QLabel *label_d10;
    QPushButton *pushButton_D10_2;
    QFrame *frame4;
    QVBoxLayout *rollLayout5_D12_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_d12;
    QLabel *label_d12;
    QPushButton *pushButton_D12_2;
    QFrame *frame5;
    QVBoxLayout *rollLayout6_D20_2;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_d20;
    QLabel *label_d20;
    QPushButton *pushButton_D20_2;
    QFrame *frame6;
    QVBoxLayout *rollLayout7_D100_2;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit_d100;
    QLabel *label_d100;
    QPushButton *pushButton_D100_2;
    QFrame *frame7;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_dBlankA;
    QLabel *label_6;
    QLineEdit *lineEdit_dBlankNum;
    QPushButton *pushButton_2;
    QFrame *line;
    QPushButton *pushButton_clearList;
    QPushButton *pushButton_rollDice;
    QListWidget *listWidget_dieList;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_dieResult;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1313, 571);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        listWidget_summary = new QListWidget(centralwidget);
        listWidget_summary->setObjectName("listWidget_summary");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget_summary->sizePolicy().hasHeightForWidth());
        listWidget_summary->setSizePolicy(sizePolicy);
        listWidget_summary->setFlow(QListView::Flow::TopToBottom);
        listWidget_summary->setItemAlignment(Qt::AlignmentFlag::AlignBottom);
        listWidget_summary->setSortingEnabled(false);

        gridLayout->addWidget(listWidget_summary, 3, 1, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 3, 0, 1, 1);

        diceRollerWidget = new QWidget(centralwidget);
        diceRollerWidget->setObjectName("diceRollerWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(diceRollerWidget->sizePolicy().hasHeightForWidth());
        diceRollerWidget->setSizePolicy(sizePolicy1);
        diceRollerWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        horizontalLayout_3 = new QHBoxLayout(diceRollerWidget);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(-1, -1, 9, -1);
        frame = new QFrame(diceRollerWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy2);
        frame->setMaximumSize(QSize(16777215, 100));
        rollLayout1_D4_2 = new QVBoxLayout(frame);
        rollLayout1_D4_2->setObjectName("rollLayout1_D4_2");
        rollLayout1_D4_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_d4 = new QLineEdit(frame);
        lineEdit_d4->setObjectName("lineEdit_d4");
        lineEdit_d4->setMaximumSize(QSize(30, 16777215));
        lineEdit_d4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lineEdit_d4->setMaxLength(4);
        lineEdit_d4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(lineEdit_d4);

        label_14 = new QLabel(frame);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(label_14);


        rollLayout1_D4_2->addLayout(horizontalLayout_2);

        pushButton_D4_2 = new QPushButton(frame);
        pushButton_D4_2->setObjectName("pushButton_D4_2");

        rollLayout1_D4_2->addWidget(pushButton_D4_2);


        horizontalLayout_3->addWidget(frame);

        frame1 = new QFrame(diceRollerWidget);
        frame1->setObjectName("frame1");
        sizePolicy2.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy2);
        frame1->setMaximumSize(QSize(16777215, 100));
        rollLayout2_D6_2 = new QVBoxLayout(frame1);
        rollLayout2_D6_2->setObjectName("rollLayout2_D6_2");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEdit_d6 = new QLineEdit(frame1);
        lineEdit_d6->setObjectName("lineEdit_d6");
        lineEdit_d6->setMaximumSize(QSize(30, 16777215));
        lineEdit_d6->setMaxLength(4);
        lineEdit_d6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(lineEdit_d6);

        label_15 = new QLabel(frame1);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_5->addWidget(label_15);


        rollLayout2_D6_2->addLayout(horizontalLayout_5);

        pushButton_D6_2 = new QPushButton(frame1);
        pushButton_D6_2->setObjectName("pushButton_D6_2");

        rollLayout2_D6_2->addWidget(pushButton_D6_2);


        horizontalLayout_3->addWidget(frame1);

        frame2 = new QFrame(diceRollerWidget);
        frame2->setObjectName("frame2");
        sizePolicy2.setHeightForWidth(frame2->sizePolicy().hasHeightForWidth());
        frame2->setSizePolicy(sizePolicy2);
        frame2->setMaximumSize(QSize(16777215, 100));
        rollLayout3_D8_2 = new QVBoxLayout(frame2);
        rollLayout3_D8_2->setObjectName("rollLayout3_D8_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(1);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEdit_d8 = new QLineEdit(frame2);
        lineEdit_d8->setObjectName("lineEdit_d8");
        lineEdit_d8->setMaximumSize(QSize(30, 16777215));
        lineEdit_d8->setMaxLength(4);
        lineEdit_d8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_6->addWidget(lineEdit_d8);

        label_d8 = new QLabel(frame2);
        label_d8->setObjectName("label_d8");
        label_d8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_6->addWidget(label_d8);


        rollLayout3_D8_2->addLayout(horizontalLayout_6);

        pushButton_D8_2 = new QPushButton(frame2);
        pushButton_D8_2->setObjectName("pushButton_D8_2");

        rollLayout3_D8_2->addWidget(pushButton_D8_2);


        horizontalLayout_3->addWidget(frame2);

        frame3 = new QFrame(diceRollerWidget);
        frame3->setObjectName("frame3");
        sizePolicy2.setHeightForWidth(frame3->sizePolicy().hasHeightForWidth());
        frame3->setSizePolicy(sizePolicy2);
        frame3->setMaximumSize(QSize(16777215, 100));
        rollLayout4_D10_2 = new QVBoxLayout(frame3);
        rollLayout4_D10_2->setObjectName("rollLayout4_D10_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lineEdit_d10 = new QLineEdit(frame3);
        lineEdit_d10->setObjectName("lineEdit_d10");
        lineEdit_d10->setMaximumSize(QSize(30, 16777215));
        lineEdit_d10->setMaxLength(4);
        lineEdit_d10->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(lineEdit_d10);

        label_d10 = new QLabel(frame3);
        label_d10->setObjectName("label_d10");
        label_d10->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_7->addWidget(label_d10);


        rollLayout4_D10_2->addLayout(horizontalLayout_7);

        pushButton_D10_2 = new QPushButton(frame3);
        pushButton_D10_2->setObjectName("pushButton_D10_2");

        rollLayout4_D10_2->addWidget(pushButton_D10_2);


        horizontalLayout_3->addWidget(frame3);

        frame4 = new QFrame(diceRollerWidget);
        frame4->setObjectName("frame4");
        sizePolicy2.setHeightForWidth(frame4->sizePolicy().hasHeightForWidth());
        frame4->setSizePolicy(sizePolicy2);
        frame4->setMaximumSize(QSize(16777215, 100));
        rollLayout5_D12_2 = new QVBoxLayout(frame4);
        rollLayout5_D12_2->setObjectName("rollLayout5_D12_2");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lineEdit_d12 = new QLineEdit(frame4);
        lineEdit_d12->setObjectName("lineEdit_d12");
        lineEdit_d12->setMaximumSize(QSize(30, 16777215));
        lineEdit_d12->setMaxLength(4);
        lineEdit_d12->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_8->addWidget(lineEdit_d12);

        label_d12 = new QLabel(frame4);
        label_d12->setObjectName("label_d12");
        label_d12->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(label_d12);


        rollLayout5_D12_2->addLayout(horizontalLayout_8);

        pushButton_D12_2 = new QPushButton(frame4);
        pushButton_D12_2->setObjectName("pushButton_D12_2");

        rollLayout5_D12_2->addWidget(pushButton_D12_2);


        horizontalLayout_3->addWidget(frame4);

        frame5 = new QFrame(diceRollerWidget);
        frame5->setObjectName("frame5");
        sizePolicy2.setHeightForWidth(frame5->sizePolicy().hasHeightForWidth());
        frame5->setSizePolicy(sizePolicy2);
        frame5->setMaximumSize(QSize(16777215, 100));
        rollLayout6_D20_2 = new QVBoxLayout(frame5);
        rollLayout6_D20_2->setObjectName("rollLayout6_D20_2");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(1);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        lineEdit_d20 = new QLineEdit(frame5);
        lineEdit_d20->setObjectName("lineEdit_d20");
        lineEdit_d20->setMaximumSize(QSize(30, 16777215));
        lineEdit_d20->setMaxLength(4);
        lineEdit_d20->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_9->addWidget(lineEdit_d20);

        label_d20 = new QLabel(frame5);
        label_d20->setObjectName("label_d20");
        label_d20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_d20);


        rollLayout6_D20_2->addLayout(horizontalLayout_9);

        pushButton_D20_2 = new QPushButton(frame5);
        pushButton_D20_2->setObjectName("pushButton_D20_2");

        rollLayout6_D20_2->addWidget(pushButton_D20_2);


        horizontalLayout_3->addWidget(frame5);

        frame6 = new QFrame(diceRollerWidget);
        frame6->setObjectName("frame6");
        sizePolicy2.setHeightForWidth(frame6->sizePolicy().hasHeightForWidth());
        frame6->setSizePolicy(sizePolicy2);
        frame6->setMaximumSize(QSize(16777215, 100));
        rollLayout7_D100_2 = new QVBoxLayout(frame6);
        rollLayout7_D100_2->setObjectName("rollLayout7_D100_2");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lineEdit_d100 = new QLineEdit(frame6);
        lineEdit_d100->setObjectName("lineEdit_d100");
        lineEdit_d100->setMaximumSize(QSize(30, 16777215));
        lineEdit_d100->setMaxLength(4);
        lineEdit_d100->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_10->addWidget(lineEdit_d100);

        label_d100 = new QLabel(frame6);
        label_d100->setObjectName("label_d100");
        label_d100->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_d100);


        rollLayout7_D100_2->addLayout(horizontalLayout_10);

        pushButton_D100_2 = new QPushButton(frame6);
        pushButton_D100_2->setObjectName("pushButton_D100_2");

        rollLayout7_D100_2->addWidget(pushButton_D100_2);


        horizontalLayout_3->addWidget(frame6);

        frame7 = new QFrame(diceRollerWidget);
        frame7->setObjectName("frame7");
        sizePolicy2.setHeightForWidth(frame7->sizePolicy().hasHeightForWidth());
        frame7->setSizePolicy(sizePolicy2);
        frame7->setMaximumSize(QSize(16777215, 100));
        verticalLayout_4 = new QVBoxLayout(frame7);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        frame_2 = new QFrame(frame7);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy3);
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setLineWidth(0);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        lineEdit_dBlankA = new QLineEdit(frame_2);
        lineEdit_dBlankA->setObjectName("lineEdit_dBlankA");
        lineEdit_dBlankA->setMaximumSize(QSize(30, 16777215));
        lineEdit_dBlankA->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(lineEdit_dBlankA);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        lineEdit_dBlankNum = new QLineEdit(frame_2);
        lineEdit_dBlankNum->setObjectName("lineEdit_dBlankNum");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEdit_dBlankNum->sizePolicy().hasHeightForWidth());
        lineEdit_dBlankNum->setSizePolicy(sizePolicy4);
        lineEdit_dBlankNum->setMaximumSize(QSize(50, 16777215));
        lineEdit_dBlankNum->setMaxLength(8);
        lineEdit_dBlankNum->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_dBlankNum);


        verticalLayout_4->addWidget(frame_2);

        pushButton_2 = new QPushButton(frame7);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_4->addWidget(pushButton_2);


        horizontalLayout_3->addWidget(frame7);

        line = new QFrame(diceRollerWidget);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Shadow::Plain);
        line->setLineWidth(50);
        line->setFrameShape(QFrame::Shape::VLine);

        horizontalLayout_3->addWidget(line);

        pushButton_clearList = new QPushButton(diceRollerWidget);
        pushButton_clearList->setObjectName("pushButton_clearList");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButton_clearList->sizePolicy().hasHeightForWidth());
        pushButton_clearList->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(pushButton_clearList);

        pushButton_rollDice = new QPushButton(diceRollerWidget);
        pushButton_rollDice->setObjectName("pushButton_rollDice");
        sizePolicy5.setHeightForWidth(pushButton_rollDice->sizePolicy().hasHeightForWidth());
        pushButton_rollDice->setSizePolicy(sizePolicy5);

        horizontalLayout_3->addWidget(pushButton_rollDice);

        listWidget_dieList = new QListWidget(diceRollerWidget);
        listWidget_dieList->setObjectName("listWidget_dieList");
        sizePolicy4.setHeightForWidth(listWidget_dieList->sizePolicy().hasHeightForWidth());
        listWidget_dieList->setSizePolicy(sizePolicy4);
        listWidget_dieList->setMaximumSize(QSize(100, 75));

        horizontalLayout_3->addWidget(listWidget_dieList);


        gridLayout->addWidget(diceRollerWidget, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        label_dieResult = new QLabel(centralwidget);
        label_dieResult->setObjectName("label_dieResult");
        label_dieResult->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_dieResult);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1313, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit_d4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "D4", nullptr));
        pushButton_D4_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_d6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "D6", nullptr));
        pushButton_D6_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_d8->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_d8->setText(QCoreApplication::translate("MainWindow", "D8", nullptr));
        pushButton_D8_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_d10->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_d10->setText(QCoreApplication::translate("MainWindow", "D10", nullptr));
        pushButton_D10_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_d12->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_d12->setText(QCoreApplication::translate("MainWindow", "D12", nullptr));
        pushButton_D12_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_d20->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_d20->setText(QCoreApplication::translate("MainWindow", "D20", nullptr));
        pushButton_D20_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_d100->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_d100->setText(QCoreApplication::translate("MainWindow", "D100", nullptr));
        pushButton_D100_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        lineEdit_dBlankA->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButton_clearList->setText(QCoreApplication::translate("MainWindow", "Clear List", nullptr));
        pushButton_rollDice->setText(QCoreApplication::translate("MainWindow", "Roll!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Roll Result:", nullptr));
        label_dieResult->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
