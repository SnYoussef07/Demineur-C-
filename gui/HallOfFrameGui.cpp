#include "HallOfFrameGui.hpp"
#include "ui_hallofframegui.h"

HallOfFrameGui::HallOfFrameGui(unsigned aHeight, unsigned aWidth, unsigned aNbBombs, QWidget *parent) :
    QDialog(parent),height(aHeight),width(aWidth),nbBombs(aNbBombs),
    ui(new Ui::HallOfFrameGui)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QColor(248,248,248,248)));
    setPalette(palette);
    this->setFixedSize(sizeHint());
    std::vector<Score> score;
    score = hal.read(height,width,nbBombs);


    runHallOfFrame(score);
}

void HallOfFrameGui::runHallOfFrame(std::vector<Score> score)
{
    ui->labHeight->setText(QString::number(height));
    ui->labWidth->setText(QString::number(width));
    ui->labBomb->setText(QString::number(nbBombs));
    for(unsigned i{0};i<score.size();i++){
        ui->verPlayer->addWidget(new QLabel(QString::fromStdString(score.at(i).getNamePlayer())));
        ui->verTime->addWidget(new QLabel(QString::number(score.at(i).getTime())));
        ui->verTope->addWidget(new QLabel(QString::number(i+1)));
    }
}


HallOfFrameGui::~HallOfFrameGui()
{
    delete ui;
}
