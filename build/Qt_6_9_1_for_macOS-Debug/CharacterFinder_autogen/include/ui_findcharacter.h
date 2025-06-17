/********************************************************************************
** Form generated from reading UI file 'findcharacter.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCHARACTER_H
#define UI_FINDCHARACTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindCharacter
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *goButton;

    void setupUi(QWidget *FindCharacter)
    {
        if (FindCharacter->objectName().isEmpty())
            FindCharacter->setObjectName("FindCharacter");
        FindCharacter->resize(775, 600);
        verticalLayout = new QVBoxLayout(FindCharacter);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(FindCharacter);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(FindCharacter);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(FindCharacter);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        goButton = new QPushButton(FindCharacter);
        goButton->setObjectName("goButton");

        horizontalLayout->addWidget(goButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FindCharacter);

        QMetaObject::connectSlotsByName(FindCharacter);
    } // setupUi

    void retranslateUi(QWidget *FindCharacter)
    {
        FindCharacter->setWindowTitle(QCoreApplication::translate("FindCharacter", "FindCharacter", nullptr));
        label->setText(QCoreApplication::translate("FindCharacter", "Search for Text:", nullptr));
        goButton->setText(QCoreApplication::translate("FindCharacter", "GO!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindCharacter: public Ui_FindCharacter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCHARACTER_H
