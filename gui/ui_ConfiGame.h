/********************************************************************************
** Form generated from reading UI file 'ConfiGame.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGAME_H
#define UI_CONFIGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfiGame
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *namePlayer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *height;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *width;
    QTabWidget *nbMineTab;
    QWidget *mineFix;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpinBox *spinMineFix;
    QSpacerItem *horizontalSpacer_11;
    QWidget *minePour;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_13;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QSpinBox *spinMinePour;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *buttonCreat;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QDialog *ConfiGame)
    {
        if (ConfiGame->objectName().isEmpty())
            ConfiGame->setObjectName(QStringLiteral("ConfiGame"));
        ConfiGame->resize(400, 550);
        ConfiGame->setMinimumSize(QSize(400, 550));
        ConfiGame->setMaximumSize(QSize(400, 550));
        verticalLayout = new QVBoxLayout(ConfiGame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(ConfiGame);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_7 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        namePlayer = new QLineEdit(layoutWidget1);
        namePlayer->setObjectName(QStringLiteral("namePlayer"));

        horizontalLayout->addWidget(namePlayer);

        splitter->addWidget(layoutWidget1);

        verticalLayout->addWidget(splitter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_3 = new QLabel(ConfiGame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(ConfiGame);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(108, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_5 = new QLabel(ConfiGame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        height = new QSpinBox(ConfiGame);
        height->setObjectName(QStringLiteral("height"));

        horizontalLayout_3->addWidget(height);

        horizontalSpacer_3 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        width = new QSpinBox(ConfiGame);
        width->setObjectName(QStringLiteral("width"));

        horizontalLayout_3->addWidget(width);


        verticalLayout->addLayout(horizontalLayout_3);

        nbMineTab = new QTabWidget(ConfiGame);
        nbMineTab->setObjectName(QStringLiteral("nbMineTab"));
        mineFix = new QWidget();
        mineFix->setObjectName(QStringLiteral("mineFix"));
        layoutWidget2 = new QWidget(mineFix);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 50, 380, 53));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        spinMineFix = new QSpinBox(layoutWidget2);
        spinMineFix->setObjectName(QStringLiteral("spinMineFix"));
        spinMineFix->setMaximum(9999);

        verticalLayout_3->addWidget(spinMineFix);


        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalSpacer_11 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        nbMineTab->addTab(mineFix, QString());
        minePour = new QWidget();
        minePour->setObjectName(QStringLiteral("minePour"));
        layoutWidget3 = new QWidget(minePour);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 50, 380, 53));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_13 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_13);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        spinMinePour = new QSpinBox(layoutWidget3);
        spinMinePour->setObjectName(QStringLiteral("spinMinePour"));
        spinMinePour->setMinimum(1);
        spinMinePour->setMaximum(99);

        verticalLayout_2->addWidget(spinMinePour);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_12 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);

        nbMineTab->addTab(minePour, QString());

        verticalLayout->addWidget(nbMineTab);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        buttonCreat = new QPushButton(ConfiGame);
        buttonCreat->setObjectName(QStringLiteral("buttonCreat"));

        horizontalLayout_6->addWidget(buttonCreat);

        horizontalSpacer_9 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(ConfiGame);
        QObject::connect(buttonCreat, SIGNAL(clicked()), ConfiGame, SLOT(accept()));

        nbMineTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfiGame);
    } // setupUi

    void retranslateUi(QDialog *ConfiGame)
    {
        ConfiGame->setWindowTitle(QApplication::translate("ConfiGame", "Creation Partie", Q_NULLPTR));
        label->setText(QApplication::translate("ConfiGame", "Cr\303\251ation d'une partie", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConfiGame", "Veuillez saisir votre nom:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ConfiGame", "Choisissez dimensions du tableau:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ConfiGame", "Largeur", Q_NULLPTR));
        label_5->setText(QApplication::translate("ConfiGame", "Hauteur", Q_NULLPTR));
        label_6->setText(QApplication::translate("ConfiGame", "Montant fixe:", Q_NULLPTR));
        nbMineTab->setTabText(nbMineTab->indexOf(mineFix), QApplication::translate("ConfiGame", "Nombre de bombes fixes", Q_NULLPTR));
        label_7->setText(QApplication::translate("ConfiGame", "Pourcentage:", Q_NULLPTR));
        nbMineTab->setTabText(nbMineTab->indexOf(minePour), QApplication::translate("ConfiGame", "Nombre de bombes en pourcentage", Q_NULLPTR));
        buttonCreat->setText(QApplication::translate("ConfiGame", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfiGame: public Ui_ConfiGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGAME_H
