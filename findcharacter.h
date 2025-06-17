#ifndef FINDCHARACTER_H
#define FINDCHARACTER_H

#include <QWidget>

QT_BEGIN_NAMESPACE // namespaces also let you group classes together?
namespace Ui {
class FindCharacter;
}
QT_END_NAMESPACE

class FindCharacter : public QWidget
{
    Q_OBJECT

public:
    FindCharacter(QWidget *parent = nullptr); //Constructor
    ~FindCharacter(); // Destructor

private slots:
    void on_goButton_clicked();

private:
    Ui::FindCharacter *ui; //represents overall interfave for the class
    void getTextFile(); // loads in textfile
};
#endif // FINDCHARACTER_H
