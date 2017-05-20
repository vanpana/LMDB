/********************************************************************************
** Form generated from reading UI file 'usermode.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMODE_H
#define UI_USERMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_userMode
{
public:
    QTextEdit *genreEdit;
    QPushButton *suggestionButton;
    QTextEdit *watchedEdit;
    QPushButton *deleteButton;
    QComboBox *liked;
    QLabel *movieLabel;
    QPushButton *trailerButton;
    QPushButton *addButton;
    QPushButton *nextButton;
    QListWidget *items;
    QPushButton *openButton;

    void setupUi(QDialog *userMode)
    {
        if (userMode->objectName().isEmpty())
            userMode->setObjectName(QStringLiteral("userMode"));
        userMode->resize(426, 429);
        genreEdit = new QTextEdit(userMode);
        genreEdit->setObjectName(QStringLiteral("genreEdit"));
        genreEdit->setGeometry(QRect(10, 20, 121, 31));
        suggestionButton = new QPushButton(userMode);
        suggestionButton->setObjectName(QStringLiteral("suggestionButton"));
        suggestionButton->setGeometry(QRect(10, 60, 121, 32));
        watchedEdit = new QTextEdit(userMode);
        watchedEdit->setObjectName(QStringLiteral("watchedEdit"));
        watchedEdit->setGeometry(QRect(10, 110, 121, 31));
        deleteButton = new QPushButton(userMode);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(10, 180, 121, 32));
        liked = new QComboBox(userMode);
        liked->setObjectName(QStringLiteral("liked"));
        liked->setGeometry(QRect(20, 150, 104, 26));
        movieLabel = new QLabel(userMode);
        movieLabel->setObjectName(QStringLiteral("movieLabel"));
        movieLabel->setGeometry(QRect(180, 40, 201, 20));
        movieLabel->setAlignment(Qt::AlignCenter);
        trailerButton = new QPushButton(userMode);
        trailerButton->setObjectName(QStringLiteral("trailerButton"));
        trailerButton->setGeometry(QRect(210, 80, 121, 32));
        addButton = new QPushButton(userMode);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(210, 120, 121, 32));
        nextButton = new QPushButton(userMode);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setGeometry(QRect(210, 160, 121, 32));
        items = new QListWidget(userMode);
        items->setObjectName(QStringLiteral("items"));
        items->setGeometry(QRect(10, 220, 411, 161));
        openButton = new QPushButton(userMode);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(310, 390, 113, 32));

        retranslateUi(userMode);

        QMetaObject::connectSlotsByName(userMode);
    } // setupUi

    void retranslateUi(QDialog *userMode)
    {
        userMode->setWindowTitle(QApplication::translate("userMode", "Dialog", Q_NULLPTR));
        suggestionButton->setText(QApplication::translate("userMode", "Get Suggestion", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("userMode", "Watched Movie", Q_NULLPTR));
        movieLabel->setText(QApplication::translate("userMode", "TextLabel", Q_NULLPTR));
        trailerButton->setText(QApplication::translate("userMode", "Watch Trailer", Q_NULLPTR));
        addButton->setText(QApplication::translate("userMode", "Add Movie", Q_NULLPTR));
        nextButton->setText(QApplication::translate("userMode", "Next Movie", Q_NULLPTR));
        openButton->setText(QApplication::translate("userMode", "Open in App", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userMode: public Ui_userMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMODE_H
