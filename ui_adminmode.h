/********************************************************************************
** Form generated from reading UI file 'adminmode.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMODE_H
#define UI_ADMINMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_adminMode
{
public:
    QTextEdit *titleEdit;
    QTextEdit *genreEdit;
    QTextEdit *yearEdit;
    QTextEdit *likesEdit;
    QTextEdit *trailerEdit;
    QPushButton *addButton;
    QPushButton *updateButton;
    QTextEdit *titleDeleteEdit;
    QPushButton *deleteButton;
    QComboBox *choice;
    QListWidget *items;

    void setupUi(QDialog *adminMode)
    {
        if (adminMode->objectName().isEmpty())
            adminMode->setObjectName(QStringLiteral("adminMode"));
        adminMode->resize(744, 247);
        titleEdit = new QTextEdit(adminMode);
        titleEdit->setObjectName(QStringLiteral("titleEdit"));
        titleEdit->setGeometry(QRect(10, 10, 151, 31));
        genreEdit = new QTextEdit(adminMode);
        genreEdit->setObjectName(QStringLiteral("genreEdit"));
        genreEdit->setGeometry(QRect(170, 10, 104, 31));
        yearEdit = new QTextEdit(adminMode);
        yearEdit->setObjectName(QStringLiteral("yearEdit"));
        yearEdit->setGeometry(QRect(10, 50, 104, 31));
        likesEdit = new QTextEdit(adminMode);
        likesEdit->setObjectName(QStringLiteral("likesEdit"));
        likesEdit->setGeometry(QRect(170, 50, 104, 31));
        trailerEdit = new QTextEdit(adminMode);
        trailerEdit->setObjectName(QStringLiteral("trailerEdit"));
        trailerEdit->setGeometry(QRect(10, 90, 261, 31));
        addButton = new QPushButton(adminMode);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(10, 130, 113, 32));
        updateButton = new QPushButton(adminMode);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(170, 130, 113, 32));
        titleDeleteEdit = new QTextEdit(adminMode);
        titleDeleteEdit->setObjectName(QStringLiteral("titleDeleteEdit"));
        titleDeleteEdit->setGeometry(QRect(10, 170, 151, 31));
        deleteButton = new QPushButton(adminMode);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(170, 170, 113, 32));
        choice = new QComboBox(adminMode);
        choice->setObjectName(QStringLiteral("choice"));
        choice->setGeometry(QRect(10, 210, 271, 26));
        items = new QListWidget(adminMode);
        items->setObjectName(QStringLiteral("items"));
        items->setGeometry(QRect(290, 10, 441, 221));

        retranslateUi(adminMode);

        QMetaObject::connectSlotsByName(adminMode);
    } // setupUi

    void retranslateUi(QDialog *adminMode)
    {
        adminMode->setWindowTitle(QApplication::translate("adminMode", "Dialog", Q_NULLPTR));
        addButton->setText(QApplication::translate("adminMode", "Add", Q_NULLPTR));
        updateButton->setText(QApplication::translate("adminMode", "Update", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("adminMode", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminMode: public Ui_adminMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMODE_H
