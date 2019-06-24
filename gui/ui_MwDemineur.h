/********************************************************************************
** Form generated from reading UI file 'MwDemineur.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MWDEMINEUR_H
#define UI_MWDEMINEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MwDemineur
{
public:
    QAction *action_Nouveau;
    QAction *action_Fermer;
    QAction *action_Quitter;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widgetInfo;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutConfig;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *imageClock;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLCDNumber *timeGame;
    QSpacerItem *verticalSpacer_2;
    QPushButton *buttonReStart;
    QSpacerItem *verticalSpacer;
    QPushButton *buttonPause;
    QMenuBar *menuBar;
    QMenu *menu_Jeu;

    void setupUi(QMainWindow *MwDemineur)
    {
        if (MwDemineur->objectName().isEmpty())
            MwDemineur->setObjectName(QStringLiteral("MwDemineur"));
        MwDemineur->setEnabled(true);
        MwDemineur->resize(620, 514);
        MwDemineur->setMinimumSize(QSize(600, 500));
        QFont font;
        font.setStrikeOut(false);
        MwDemineur->setFont(font);
        action_Nouveau = new QAction(MwDemineur);
        action_Nouveau->setObjectName(QStringLiteral("action_Nouveau"));
        action_Fermer = new QAction(MwDemineur);
        action_Fermer->setObjectName(QStringLiteral("action_Fermer"));
        action_Quitter = new QAction(MwDemineur);
        action_Quitter->setObjectName(QStringLiteral("action_Quitter"));
        centralWidget = new QWidget(MwDemineur);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(false);
        centralWidget->setAutoFillBackground(false);
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, 0, 464, 472));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scrollArea->setWidget(scrollAreaWidget);

        horizontalLayout_2->addWidget(scrollArea);

        widgetInfo = new QWidget(centralWidget);
        widgetInfo->setObjectName(QStringLiteral("widgetInfo"));
        widgetInfo->setMinimumSize(QSize(120, 250));
        widgetInfo->setMaximumSize(QSize(130, 250));
        verticalLayout_2 = new QVBoxLayout(widgetInfo);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayoutConfig = new QVBoxLayout();
        verticalLayoutConfig->setSpacing(6);
        verticalLayoutConfig->setObjectName(QStringLiteral("verticalLayoutConfig"));
        verticalLayoutConfig->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        imageClock = new QLabel(widgetInfo);
        imageClock->setObjectName(QStringLiteral("imageClock"));
        imageClock->setMouseTracking(false);

        horizontalLayout->addWidget(imageClock);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayoutConfig->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutConfig->addItem(verticalSpacer_3);

        timeGame = new QLCDNumber(widgetInfo);
        timeGame->setObjectName(QStringLiteral("timeGame"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        font1.setKerning(true);
        timeGame->setFont(font1);
        timeGame->setFrameShape(QFrame::StyledPanel);
        timeGame->setSmallDecimalPoint(false);
        timeGame->setSegmentStyle(QLCDNumber::Flat);

        verticalLayoutConfig->addWidget(timeGame);

        verticalSpacer_2 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutConfig->addItem(verticalSpacer_2);

        buttonReStart = new QPushButton(widgetInfo);
        buttonReStart->setObjectName(QStringLiteral("buttonReStart"));
        QPalette palette;
        QBrush brush(QColor(243, 243, 243, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        buttonReStart->setPalette(palette);
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        buttonReStart->setFont(font2);
        buttonReStart->setAutoFillBackground(false);
        buttonReStart->setFlat(false);

        verticalLayoutConfig->addWidget(buttonReStart);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutConfig->addItem(verticalSpacer);

        buttonPause = new QPushButton(widgetInfo);
        buttonPause->setObjectName(QStringLiteral("buttonPause"));
        buttonPause->setFont(font);

        verticalLayoutConfig->addWidget(buttonPause);


        verticalLayout_2->addLayout(verticalLayoutConfig);


        horizontalLayout_2->addWidget(widgetInfo);

        MwDemineur->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MwDemineur);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 620, 22));
        menu_Jeu = new QMenu(menuBar);
        menu_Jeu->setObjectName(QStringLiteral("menu_Jeu"));
        MwDemineur->setMenuBar(menuBar);

        menuBar->addAction(menu_Jeu->menuAction());
        menu_Jeu->addAction(action_Nouveau);
        menu_Jeu->addAction(action_Fermer);
        menu_Jeu->addAction(action_Quitter);

        retranslateUi(MwDemineur);

        QMetaObject::connectSlotsByName(MwDemineur);
    } // setupUi

    void retranslateUi(QMainWindow *MwDemineur)
    {
        MwDemineur->setWindowTitle(QApplication::translate("MwDemineur", "MwDemineur", Q_NULLPTR));
        action_Nouveau->setText(QApplication::translate("MwDemineur", "&Nouveau", Q_NULLPTR));
        action_Fermer->setText(QApplication::translate("MwDemineur", "&Fermer", Q_NULLPTR));
        action_Quitter->setText(QApplication::translate("MwDemineur", "&Quitter", Q_NULLPTR));
        imageClock->setText(QString());
        buttonReStart->setText(QApplication::translate("MwDemineur", "Recommencer", Q_NULLPTR));
        buttonPause->setText(QApplication::translate("MwDemineur", "Pause", Q_NULLPTR));
        menu_Jeu->setTitle(QApplication::translate("MwDemineur", "&Jeu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MwDemineur: public Ui_MwDemineur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MWDEMINEUR_H
