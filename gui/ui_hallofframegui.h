/********************************************************************************
** Form generated from reading UI file 'hallofframegui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HALLOFFRAMEGUI_H
#define UI_HALLOFFRAMEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HallOfFrameGui
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horiLayoutInfoGame;
    QLabel *labHeight;
    QLabel *label_4;
    QLabel *labWidth;
    QLabel *label_6;
    QLabel *labBomb;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verPlayer;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verTime;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verTope;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *HallOfFrameGui)
    {
        if (HallOfFrameGui->objectName().isEmpty())
            HallOfFrameGui->setObjectName(QStringLiteral("HallOfFrameGui"));
        HallOfFrameGui->resize(437, 593);
        verticalLayout_2 = new QVBoxLayout(HallOfFrameGui);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(HallOfFrameGui);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("UnShinmun"));
        font.setPointSize(35);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setKerning(true);
        label->setFont(font);
        label->setFrameShadow(QFrame::Plain);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horiLayoutInfoGame = new QHBoxLayout();
        horiLayoutInfoGame->setObjectName(QStringLiteral("horiLayoutInfoGame"));
        labHeight = new QLabel(HallOfFrameGui);
        labHeight->setObjectName(QStringLiteral("labHeight"));
        QFont font1;
        font1.setPointSize(16);
        labHeight->setFont(font1);

        horiLayoutInfoGame->addWidget(labHeight);

        label_4 = new QLabel(HallOfFrameGui);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        label_4->setFont(font2);

        horiLayoutInfoGame->addWidget(label_4);

        labWidth = new QLabel(HallOfFrameGui);
        labWidth->setObjectName(QStringLiteral("labWidth"));
        labWidth->setFont(font1);

        horiLayoutInfoGame->addWidget(labWidth);

        label_6 = new QLabel(HallOfFrameGui);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horiLayoutInfoGame->addWidget(label_6);

        labBomb = new QLabel(HallOfFrameGui);
        labBomb->setObjectName(QStringLiteral("labBomb"));
        labBomb->setFont(font1);

        horiLayoutInfoGame->addWidget(labBomb);

        label_8 = new QLabel(HallOfFrameGui);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horiLayoutInfoGame->addWidget(label_8);


        horizontalLayout_2->addLayout(horiLayoutInfoGame);

        horizontalSpacer_4 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verPlayer = new QVBoxLayout();
        verPlayer->setSpacing(9);
        verPlayer->setObjectName(QStringLiteral("verPlayer"));
        verPlayer->setContentsMargins(0, 0, -1, -1);
        label_9 = new QLabel(HallOfFrameGui);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignCenter);

        verPlayer->addWidget(label_9);


        horizontalLayout->addLayout(verPlayer);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verTime = new QVBoxLayout();
        verTime->setSpacing(9);
        verTime->setObjectName(QStringLiteral("verTime"));
        verTime->setSizeConstraint(QLayout::SetDefaultConstraint);
        verTime->setContentsMargins(0, 0, -1, 0);
        label_10 = new QLabel(HallOfFrameGui);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setMargin(0);

        verTime->addWidget(label_10);


        horizontalLayout->addLayout(verTime);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verTope = new QVBoxLayout();
        verTope->setSpacing(9);
        verTope->setObjectName(QStringLiteral("verTope"));
        verTope->setContentsMargins(0, -1, -1, -1);
        label_11 = new QLabel(HallOfFrameGui);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);
        label_11->setAlignment(Qt::AlignCenter);

        verTope->addWidget(label_11);


        horizontalLayout->addLayout(verTope);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 414, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(HallOfFrameGui);

        QMetaObject::connectSlotsByName(HallOfFrameGui);
    } // setupUi

    void retranslateUi(QDialog *HallOfFrameGui)
    {
        HallOfFrameGui->setWindowTitle(QApplication::translate("HallOfFrameGui", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("HallOfFrameGui", "F\303\251licitation", Q_NULLPTR));
        labHeight->setText(QApplication::translate("HallOfFrameGui", "0 ", Q_NULLPTR));
        label_4->setText(QApplication::translate("HallOfFrameGui", "X", Q_NULLPTR));
        labWidth->setText(QApplication::translate("HallOfFrameGui", "0 ", Q_NULLPTR));
        label_6->setText(QApplication::translate("HallOfFrameGui", ": :  ", Q_NULLPTR));
        labBomb->setText(QApplication::translate("HallOfFrameGui", "0  ", Q_NULLPTR));
        label_8->setText(QApplication::translate("HallOfFrameGui", "Bombes", Q_NULLPTR));
        label_9->setText(QApplication::translate("HallOfFrameGui", "Joueurs", Q_NULLPTR));
        label_10->setText(QApplication::translate("HallOfFrameGui", "Temps", Q_NULLPTR));
        label_11->setText(QApplication::translate("HallOfFrameGui", "Position", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HallOfFrameGui: public Ui_HallOfFrameGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALLOFFRAMEGUI_H
