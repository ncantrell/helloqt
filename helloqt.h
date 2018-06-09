#ifndef HELLOQT_H
#define HELLOQT_H

#include <QMainWindow>

namespace Ui {
class HelloQt;
}

class HelloQt : public QMainWindow
{
    Q_OBJECT

public:
    explicit HelloQt(QWidget *parent = 0);
    ~HelloQt();

private slots:
    void gradeMe();
    void gradeMeA();
    void gradeMeB();

private:
    Ui::HelloQt *ui;
    bool schemaA = true;
    bool schemaB = false;
    int hw1;
    int hw2;
    int hw3;
    int hw4;
    int hw5;
    int hw6;
    int hw7;
    int hw8;
    int mt1;
    int mt2;
    int final;
    int classg;
    int grade;
    int findLow(void);
};

#endif // HELLOQT_H
