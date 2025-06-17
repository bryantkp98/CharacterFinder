#include "findcharacter.h"
#include "./ui_findcharacter.h"
#include <QtCore/QFile>
#include <QtCore/QTextStream>


FindCharacter::FindCharacter(QWidget *parent): QWidget(parent), ui(new Ui::FindCharacter){
    ui->setupUi(this);
    getTextFile(); // will grab the text file after the inital rendering of the UI
}

FindCharacter::~FindCharacter(){
    delete ui;
}

void FindCharacter::on_goButton_clicked(){
    QString word = ui->lineEdit->text(); // stores whats typed in the line edit widget
    ui->textEdit->find(word, QTextDocument::FindWholeWords); //searches for word
}

void FindCharacter::getTextFile(){
    QFile myFile(":/Test.txt"); // looks for referenced file
    myFile.open(QIODevice::ReadOnly); // open file
    QTextStream textStream(&myFile); // convert to string
    QString line = textStream.readAll();
    myFile.close();

    ui->textEdit->setPlainText(line); // display converted text in text edit area
    QTextCursor textCursor = ui->textEdit->textCursor();
    textCursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);

}

