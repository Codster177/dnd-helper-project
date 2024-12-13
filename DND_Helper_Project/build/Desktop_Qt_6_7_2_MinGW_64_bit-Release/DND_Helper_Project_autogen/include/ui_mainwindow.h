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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_14;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_17;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButtonWMClear;
    QListWidget *wildMagicTableList;
    QHBoxLayout *horizontalLayout_15;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_3;
    QRadioButton *radioButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QListWidget *rPotionTableList;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_dieResult;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *spinBox;
    QPushButton *pushButton_3;
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
    QPushButton *pushButton_clearSummary;
    QFrame *line_2;
    QListWidget *listWidget_summary;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1408, 772);
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 2, -1, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        verticalWidget = new QWidget(centralwidget);
        verticalWidget->setObjectName("verticalWidget");
        verticalWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(verticalWidget);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(-1, -1, 5, -1);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(-1, -1, 10, -1);
        verticalWidget_2 = new QWidget(verticalWidget);
        verticalWidget_2->setObjectName("verticalWidget_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget_2->sizePolicy().hasHeightForWidth());
        verticalWidget_2->setSizePolicy(sizePolicy1);
        verticalWidget_2->setMaximumSize(QSize(125, 16777215));
        verticalLayout_9 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_2 = new QLabel(verticalWidget_2);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2->setWordWrap(true);

        verticalLayout_9->addWidget(label_2);

        radioButton_3 = new QRadioButton(verticalWidget_2);
        radioButton_3->setObjectName("radioButton_3");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(radioButton_3->sizePolicy().hasHeightForWidth());
        radioButton_3->setSizePolicy(sizePolicy3);

        verticalLayout_9->addWidget(radioButton_3);

        pushButton_4 = new QPushButton(verticalWidget_2);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy4);
        pushButton_4->setMaximumSize(QSize(150, 16777215));

        verticalLayout_9->addWidget(pushButton_4);

        pushButtonWMClear = new QPushButton(verticalWidget_2);
        pushButtonWMClear->setObjectName("pushButtonWMClear");

        verticalLayout_9->addWidget(pushButtonWMClear);


        horizontalLayout_17->addWidget(verticalWidget_2);

        wildMagicTableList = new QListWidget(verticalWidget);
        wildMagicTableList->setObjectName("wildMagicTableList");
        sizePolicy1.setHeightForWidth(wildMagicTableList->sizePolicy().hasHeightForWidth());
        wildMagicTableList->setSizePolicy(sizePolicy1);
        wildMagicTableList->setMinimumSize(QSize(0, 200));
        wildMagicTableList->setMaximumSize(QSize(700, 16777215));
        wildMagicTableList->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        wildMagicTableList->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustIgnored);
        wildMagicTableList->setAutoScrollMargin(1);
        wildMagicTableList->setDefaultDropAction(Qt::DropAction::CopyAction);
        wildMagicTableList->setMovement(QListView::Movement::Snap);
        wildMagicTableList->setResizeMode(QListView::ResizeMode::Fixed);
        wildMagicTableList->setViewMode(QListView::ViewMode::ListMode);

        horizontalLayout_17->addWidget(wildMagicTableList);


        verticalLayout_8->addLayout(horizontalLayout_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(-1, -1, 10, -1);
        verticalWidget_3 = new QWidget(verticalWidget);
        verticalWidget_3->setObjectName("verticalWidget_3");
        sizePolicy1.setHeightForWidth(verticalWidget_3->sizePolicy().hasHeightForWidth());
        verticalWidget_3->setSizePolicy(sizePolicy1);
        verticalWidget_3->setMaximumSize(QSize(125, 16777215));
        verticalLayout_10 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_3 = new QLabel(verticalWidget_3);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setMaximumSize(QSize(100, 16777215));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3->setWordWrap(true);

        verticalLayout_10->addWidget(label_3);

        radioButton = new QRadioButton(verticalWidget_3);
        radioButton->setObjectName("radioButton");
        radioButton->setAutoExclusive(false);

        verticalLayout_10->addWidget(radioButton);

        pushButton_5 = new QPushButton(verticalWidget_3);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setEnabled(true);
        sizePolicy4.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy4);
        pushButton_5->setMaximumSize(QSize(150, 16777215));

        verticalLayout_10->addWidget(pushButton_5);

        pushButton = new QPushButton(verticalWidget_3);
        pushButton->setObjectName("pushButton");

        verticalLayout_10->addWidget(pushButton);


        horizontalLayout_15->addWidget(verticalWidget_3);

        rPotionTableList = new QListWidget(verticalWidget);
        rPotionTableList->setObjectName("rPotionTableList");
        sizePolicy1.setHeightForWidth(rPotionTableList->sizePolicy().hasHeightForWidth());
        rPotionTableList->setSizePolicy(sizePolicy1);
        rPotionTableList->setMinimumSize(QSize(0, 200));
        rPotionTableList->setMaximumSize(QSize(700, 16777215));

        horizontalLayout_15->addWidget(rPotionTableList);


        verticalLayout_8->addLayout(horizontalLayout_15);


        horizontalLayout_14->addWidget(verticalWidget);


        gridLayout->addLayout(horizontalLayout_14, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        label->setMaximumSize(QSize(16777215, 45));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label);

        label_dieResult = new QLabel(centralwidget);
        label_dieResult->setObjectName("label_dieResult");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_dieResult->sizePolicy().hasHeightForWidth());
        label_dieResult->setSizePolicy(sizePolicy6);
        QFont font1;
        font1.setPointSize(16);
        label_dieResult->setFont(font1);
        label_dieResult->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_dieResult);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setMaximumSize(QSize(16777215, 45));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        sizePolicy5.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy5);
        spinBox->setMinimumSize(QSize(0, 0));
        spinBox->setMaximumSize(QSize(16777215, 25));
        spinBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox->setMinimum(-999999999);
        spinBox->setMaximum(999999999);

        horizontalLayout_11->addWidget(spinBox);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMaximumSize(QSize(20, 25));
        pushButton_3->setSizeIncrement(QSize(0, 0));
        pushButton_3->setIconSize(QSize(16, 16));

        horizontalLayout_11->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_11);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 1, 2, 1);

        diceRollerWidget = new QWidget(centralwidget);
        diceRollerWidget->setObjectName("diceRollerWidget");
        diceRollerWidget->setEnabled(true);
        sizePolicy2.setHeightForWidth(diceRollerWidget->sizePolicy().hasHeightForWidth());
        diceRollerWidget->setSizePolicy(sizePolicy2);
        diceRollerWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        horizontalLayout_3 = new QHBoxLayout(diceRollerWidget);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(-1, 0, 9, -1);
        frame = new QFrame(diceRollerWidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame1->sizePolicy().hasHeightForWidth());
        frame1->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame2->sizePolicy().hasHeightForWidth());
        frame2->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame3->sizePolicy().hasHeightForWidth());
        frame3->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame4->sizePolicy().hasHeightForWidth());
        frame4->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame5->sizePolicy().hasHeightForWidth());
        frame5->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame6->sizePolicy().hasHeightForWidth());
        frame6->setSizePolicy(sizePolicy7);
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
        sizePolicy7.setHeightForWidth(frame7->sizePolicy().hasHeightForWidth());
        frame7->setSizePolicy(sizePolicy7);
        frame7->setMaximumSize(QSize(16777215, 100));
        verticalLayout_4 = new QVBoxLayout(frame7);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        frame_2 = new QFrame(frame7);
        frame_2->setObjectName("frame_2");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy8);
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
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(lineEdit_dBlankNum->sizePolicy().hasHeightForWidth());
        lineEdit_dBlankNum->setSizePolicy(sizePolicy9);
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
        sizePolicy.setHeightForWidth(pushButton_clearList->sizePolicy().hasHeightForWidth());
        pushButton_clearList->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_clearList);

        pushButton_rollDice = new QPushButton(diceRollerWidget);
        pushButton_rollDice->setObjectName("pushButton_rollDice");
        sizePolicy.setHeightForWidth(pushButton_rollDice->sizePolicy().hasHeightForWidth());
        pushButton_rollDice->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_rollDice);

        listWidget_dieList = new QListWidget(diceRollerWidget);
        listWidget_dieList->setObjectName("listWidget_dieList");
        sizePolicy9.setHeightForWidth(listWidget_dieList->sizePolicy().hasHeightForWidth());
        listWidget_dieList->setSizePolicy(sizePolicy9);
        listWidget_dieList->setMaximumSize(QSize(100, 75));

        horizontalLayout_3->addWidget(listWidget_dieList);


        gridLayout->addWidget(diceRollerWidget, 1, 0, 1, 1);

        pushButton_clearSummary = new QPushButton(centralwidget);
        pushButton_clearSummary->setObjectName("pushButton_clearSummary");

        gridLayout->addWidget(pushButton_clearSummary, 4, 1, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 1);

        listWidget_summary = new QListWidget(centralwidget);
        listWidget_summary->setObjectName("listWidget_summary");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(listWidget_summary->sizePolicy().hasHeightForWidth());
        listWidget_summary->setSizePolicy(sizePolicy10);
        listWidget_summary->setFlow(QListView::Flow::TopToBottom);
        listWidget_summary->setItemAlignment(Qt::AlignmentFlag::AlignBottom);
        listWidget_summary->setSortingEnabled(false);

        gridLayout->addWidget(listWidget_summary, 3, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1408, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Wild Magic Table", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Timeframe", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        pushButtonWMClear->setText(QCoreApplication::translate("MainWindow", "Clear List", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Random Potion Generator", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "No Side Effect", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Clear List", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Roll Result:", nullptr));
        label_dieResult->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "Plus / Minus", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
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
        pushButton_clearSummary->setText(QCoreApplication::translate("MainWindow", "Clear Summary", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
