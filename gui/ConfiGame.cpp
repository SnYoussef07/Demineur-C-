#include "ConfiGame.hpp"
#include "ui_ConfiGame.h"

ConfiGame::ConfiGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfiGame)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QColor(248,248,248,248)));
    setPalette(palette);
}

ConfiGame::~ConfiGame()
{
    delete ui;
}

QString ConfiGame::getName() const{
    if(ui->namePlayer->text().isEmpty()){
        return "Guest";
    }else{
        return ui->namePlayer->text();
    }
}

int ConfiGame::getWidth() const{
    return ui->width->value();
}

int ConfiGame::getHeight() const{
    return ui->height->value();
}


double ConfiGame::getNbrBomb() const{
    if(ui->nbMineTab->currentIndex() == 0){
        return ui->spinMineFix->value();
    }else if(ui->nbMineTab->currentIndex() == 1){
        return (double)ui->spinMinePour->value()/100;
    }

    return 0;
}




