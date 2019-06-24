/********************************************************************************
** Form generated from reading UI file 'HallOfFrameGui.ui'
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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HallOfFrameGui
{
public:

    void setupUi(QWidget *HallOfFrameGui)
    {
        if (HallOfFrameGui->objectName().isEmpty())
            HallOfFrameGui->setObjectName(QStringLiteral("HallOfFrameGui"));
        HallOfFrameGui->resize(400, 562);

        retranslateUi(HallOfFrameGui);

        QMetaObject::connectSlotsByName(HallOfFrameGui);
    } // setupUi

    void retranslateUi(QWidget *HallOfFrameGui)
    {
        HallOfFrameGui->setWindowTitle(QApplication::translate("HallOfFrameGui", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HallOfFrameGui: public Ui_HallOfFrameGui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HALLOFFRAMEGUI_H
