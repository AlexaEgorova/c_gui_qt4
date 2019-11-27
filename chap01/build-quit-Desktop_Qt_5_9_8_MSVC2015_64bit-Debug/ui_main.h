/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main
{
public:

    void setupUi(QWidget *main)
    {
        if (main->objectName().isEmpty())
            main->setObjectName(QStringLiteral("main"));
        main->resize(800, 600);

        retranslateUi(main);

        QMetaObject::connectSlotsByName(main);
    } // setupUi

    void retranslateUi(QWidget *main)
    {
        main->setWindowTitle(QApplication::translate("main", "main", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class main: public Ui_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
