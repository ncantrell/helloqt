#include "helloqt.h"
#include "ui_helloqt.h"
#include <vector>
using namespace std;

int HelloQt::findLow(){
    vector<int> hwgrades;
    hwgrades.push_back(hw1);
    hwgrades.push_back(hw2);
    hwgrades.push_back(hw3);
    hwgrades.push_back(hw4);
    hwgrades.push_back(hw5);
    hwgrades.push_back(hw6);
    hwgrades.push_back(hw7);
    hwgrades.push_back(hw8);
    std::sort(hwgrades.begin(), hwgrades.end());
    return hwgrades[0];
}

void HelloQt::gradeMe(){
    schemaA = false;
    if(schemaB){schemaB = false;}
    hw1 = ui->spinBox_1->value(),
    hw2 = ui->spinBox_2->value();
    hw3 = ui->spinBox_3->value();
    hw4 = ui->spinBox_4->value();
    hw5 = ui->spinBox_5->value();
    hw6 = ui->spinBox_6->value();
    hw7 = ui->spinBox_7->value();
    hw8 = ui->spinBox_8->value();
    mt1 = ui->spinBox_9->value();
    mt2 = ui->spinBox_10->value();
    final = ui->spinBox_11->value();
    double lowest = this->findLow();
    double hwg = (hw1+hw2+hw3+hw4+hw5+hw6+hw7+hw8-lowest)/7;
    double mtg = max(mt1,mt2);
    if(schemaA){grade = (35*final/100)+(40*mtg/100)+(25*hwg/10);}
    else{grade = (45*final/100)+(30*mtg/100)+(25*hwg/10);}
    ui->spinBox_12->setValue(grade);
}
void HelloQt::gradeMeA(){
    schemaA = true;
    if(schemaB){schemaB = false;}
    hw1 = ui->spinBox_1->value(),
    hw2 = ui->spinBox_2->value();
    hw3 = ui->spinBox_3->value();
    hw4 = ui->spinBox_4->value();
    hw5 = ui->spinBox_5->value();
    hw6 = ui->spinBox_6->value();
    hw7 = ui->spinBox_7->value();
    hw8 = ui->spinBox_8->value();
    mt1 = ui->spinBox_9->value();
    mt2 = ui->spinBox_10->value();
    final = ui->spinBox_11->value();
    double lowest = this->findLow();
    double hwg = (hw1+hw2+hw3+hw4+hw5+hw6+hw7+hw8-lowest)/7;
    double mtg = (mt1+mt2)/2;
    grade = (45*final/100)+(30*mtg/100)+(25*hwg/10);
    ui->spinBox_12->setValue(grade);
}
void HelloQt::gradeMeB(){
    schemaB = true;
    if(schemaA){schemaA = false;}
    hw1 = ui->spinBox_1->value(),
    hw2 = ui->spinBox_2->value();
    hw3 = ui->spinBox_3->value();
    hw4 = ui->spinBox_4->value();
    hw5 = ui->spinBox_5->value();
    hw6 = ui->spinBox_6->value();
    hw7 = ui->spinBox_7->value();
    hw8 = ui->spinBox_8->value();
    mt1 = ui->spinBox_9->value();
    mt2 = ui->spinBox_10->value();
    final = ui->spinBox_11->value();
    double lowest = this->findLow();
    double hwg = (hw1+hw2+hw3+hw4+hw5+hw6+hw7+hw8-lowest)/7;
    double mtg = max(mt1,mt2);
    grade = (35*final/100)+(40*mtg/100)+(25*hwg/10);
    ui->spinBox_12->setValue(grade);
}
HelloQt::HelloQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HelloQt)
{
    ui->setupUi(this);
    schemaB = true;
    schemaA = true;
    gradeMeB();

    ui->spinBox_1->setValue(0);
    ui->horizontalSlider_1->setValue(ui->spinBox_1->value());
    connect(ui->spinBox_1, SIGNAL(valueChanged(int)),ui->horizontalSlider_1, SLOT(setValue(int)));
    connect(ui->horizontalSlider_1, SIGNAL(valueChanged(int)),ui->spinBox_1, SLOT(setValue(int)));

    ui->spinBox_2->setValue(0);
    ui->horizontalSlider_2->setValue(ui->spinBox_2->value());
    connect(ui->spinBox_2, SIGNAL(valueChanged(int)),ui->horizontalSlider_2, SLOT(setValue(int)));
    connect(ui->horizontalSlider_2, SIGNAL(valueChanged(int)),ui->spinBox_2, SLOT(setValue(int)));

    ui->spinBox_3->setValue(0);
    ui->horizontalSlider_3->setValue(ui->spinBox_3->value());
    connect(ui->spinBox_3, SIGNAL(valueChanged(int)),ui->horizontalSlider_3, SLOT(setValue(int)));
    connect(ui->horizontalSlider_3, SIGNAL(valueChanged(int)),ui->spinBox_3, SLOT(setValue(int)));

    ui->spinBox_4->setValue(0);
    ui->horizontalSlider_4->setValue(ui->spinBox_4->value());
    connect(ui->spinBox_4, SIGNAL(valueChanged(int)),ui->horizontalSlider_4, SLOT(setValue(int)));
    connect(ui->horizontalSlider_4, SIGNAL(valueChanged(int)),ui->spinBox_4, SLOT(setValue(int)));

    ui->spinBox_5->setValue(0);
    ui->horizontalSlider_5->setValue(ui->spinBox_5->value());
    connect(ui->spinBox_5, SIGNAL(valueChanged(int)),ui->horizontalSlider_5, SLOT(setValue(int)));
    connect(ui->horizontalSlider_5, SIGNAL(valueChanged(int)),ui->spinBox_5, SLOT(setValue(int)));

    ui->spinBox_6->setValue(0);
    ui->horizontalSlider_6->setValue(ui->spinBox_6->value());
    connect(ui->spinBox_6, SIGNAL(valueChanged(int)),ui->horizontalSlider_6, SLOT(setValue(int)));
    connect(ui->horizontalSlider_6, SIGNAL(valueChanged(int)),ui->spinBox_6, SLOT(setValue(int)));

    ui->spinBox_7->setValue(0);
    ui->horizontalSlider_7->setValue(ui->spinBox_7->value());
    connect(ui->spinBox_7, SIGNAL(valueChanged(int)),ui->horizontalSlider_7, SLOT(setValue(int)));
    connect(ui->horizontalSlider_7, SIGNAL(valueChanged(int)),ui->spinBox_7, SLOT(setValue(int)));

    ui->spinBox_8->setValue(0);
    ui->horizontalSlider_8->setValue(ui->spinBox_8->value());
    connect(ui->spinBox_8, SIGNAL(valueChanged(int)),ui->horizontalSlider_8, SLOT(setValue(int)));
    connect(ui->horizontalSlider_8, SIGNAL(valueChanged(int)),ui->spinBox_8, SLOT(setValue(int)));

    ui->spinBox_9->setValue(0);
    ui->horizontalSlider_9->setValue(ui->spinBox_9->value());
    connect(ui->spinBox_9, SIGNAL(valueChanged(int)),ui->horizontalSlider_9, SLOT(setValue(int)));
    connect(ui->horizontalSlider_9, SIGNAL(valueChanged(int)),ui->spinBox_9, SLOT(setValue(int)));

    ui->spinBox_10->setValue(0);
    ui->horizontalSlider_10->setValue(ui->spinBox_10->value());
    connect(ui->spinBox_10, SIGNAL(valueChanged(int)),ui->horizontalSlider_10, SLOT(setValue(int)));
    connect(ui->horizontalSlider_10, SIGNAL(valueChanged(int)),ui->spinBox_10, SLOT(setValue(int)));

    ui->spinBox_11->setValue(0);
    ui->horizontalSlider_11->setValue(ui->spinBox_11->value());
    connect(ui->spinBox_11, SIGNAL(valueChanged(int)),ui->horizontalSlider_11, SLOT(setValue(int)));
    connect(ui->horizontalSlider_11, SIGNAL(valueChanged(int)),ui->spinBox_11, SLOT(setValue(int)));

    connect(ui->spinBox_2,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_2,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_2,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_3,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_3,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_4,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_4,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_5,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_5,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_6,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_6,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_7,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_7,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_8,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_8,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_9,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_9,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_10,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_10,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->spinBox_11,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));
    connect(ui->horizontalSlider_11,SIGNAL(valueChanged(int)),this,SLOT(gradeMe()));

    connect(ui->radioButton_1,SIGNAL(clicked()),this,SLOT(gradeMeA()));
    connect(ui->radioButton_2,SIGNAL(clicked()),this,SLOT(gradeMeB()));

}
HelloQt::~HelloQt()
{
    delete ui;
}
