#include "MwDemineur.hpp"
#include "ui_MwDemineur.h"
#include "ConfiGame.hpp"
#include "HallOfFrameGui.hpp"

#include <string>

MwDemineur::MwDemineur(QWidget *parent) :
    QMainWindow(parent),timer(this),qTime(0,0,0),
    buttonStart("Start"),buttonHallOfFame("Meilleurs temps"),
    ui(new Ui::MwDemineur)
{
    ui->setupUi(this);

    buttonStart.setParent(ui->widgetInfo);
    buttonHallOfFame.setParent(ui->widgetInfo);

    ui->centralWidget->setParent(this);

    QPixmap monImage("resource/clock.png");

    ui->imageClock->setPixmap(monImage);

    ui->verticalLayoutConfig->addWidget(&buttonStart);
    ui->verticalLayoutConfig->addWidget(&buttonHallOfFame);
    buttonStart.setVisible(false);
    buttonHallOfFame.setVisible(false);

    ui->action_Fermer->setVisible(false);

    QPalette palette;
    palette.setBrush(QPalette::Background, QBrush(QColor(240,241,242,243)));
    setPalette(palette);

    conexion();
}

MwDemineur::~MwDemineur()
{
    delete ui;
}

void MwDemineur::conexion(){

    QObject::connect(ui->action_Quitter,SIGNAL(triggered(bool)),this,SLOT(close()));

    QObject::connect(ui->action_Nouveau,SIGNAL(triggered(bool)),this,SLOT(createGame()));
    QObject::connect(ui->action_Fermer,SIGNAL(triggered(bool)),this,SLOT(closeGame()));


    QObject::connect(ui->buttonPause,SIGNAL(clicked(bool)),this,SLOT(pause()));
    QObject::connect(&buttonStart,SIGNAL(clicked(bool)),this,SLOT(start()));
    QObject::connect(ui->buttonReStart,SIGNAL(clicked(bool)),this,SLOT(restart()));
    QObject::connect(&buttonHallOfFame,SIGNAL(clicked(bool)),this,SLOT(runHallOfFrame()));

    connect(&timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
}

void MwDemineur::createGame(){
    ConfiGame cd {this};
    cd.exec();

    while((cd.getWidth() == 0) ^ (cd.getHeight() == 0)){
        QMessageBox::critical(this,"Erreur","Un ou plusieurs arguments invalides. Vérifier largeur et hauteur.");
        cd.exec();
    }
    while(cd.getNbrBomb() > cd.getWidth()*cd.getHeight()){
        QMessageBox::critical(this,"Erreur","Nombre de bombes trop élevé à la dimension du tableau.");
        cd.exec();
    }

    if(cd.getWidth() == 0 && cd.getHeight() == 0){
        myGame = new Game(cd.getName().toStdString());
    }else if (cd.getNbrBomb() == 0){
        myGame = new Game(cd.getName().toStdString(),cd.getHeight(),cd.getWidth());
    }else{
        myGame = new Game(cd.getName().toStdString(),cd.getHeight(),cd.getWidth(),cd.getNbrBomb());
    }


    myGame->getBoard().initBomb();

    buttonHallOfFame.setVisible(false);
    ui->action_Nouveau->setVisible(false);

    timer.start(1000);
    showTime();

    ui->scrollArea->setEnabled(true);

    ui->centralWidget->setEnabled(true);
    ui->action_Fermer->setVisible(true);

    boardGui = new BoardGame(*myGame);
    boardGui->setParent(ui->scrollArea);
    boardGui->setMinimumSize(myGame->getBoard().getWidth()*41,myGame->getBoard().getHeight()*41);

    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setWidget(boardGui);
    ui->scrollArea->setVisible(true);
}

void MwDemineur::showTime(){
    ui->timeGame->display(qTime.toString("hh:mm:ss"));
}

void MwDemineur::winGame()
{
    timer.stop();
    HallOfFrameGui hal(myGame->getBoard().getHeight(),myGame->getBoard().getWidth(),myGame->getBoard().getNbrBomb());
    hal.exec();
    ui->scrollArea->setEnabled(false);
    ui->buttonPause->setVisible(false);
}

void MwDemineur::loseGame()
{
    timer.stop();
    buttonStart.setVisible(false);
    ui->buttonPause->setVisible(false);
    buttonHallOfFame.setVisible(true);
}

void MwDemineur::onTimeout(){
    qTime = qTime.addMSecs(timer.interval());
    showTime();
    if(myGame->getIsGameOver()){
        loseGame();
    }else if(myGame->endGame()){
        winGame();
    }
}

void MwDemineur::pause(){
    ui->scrollArea->setVisible(false);

    timer.stop();

    buttonStart.setVisible(true);
    ui->buttonPause->setVisible(false);
}
void MwDemineur::start(){
    ui->scrollArea->setVisible(true);

    timer.start(1000);

    buttonStart.setVisible(false);
    ui->buttonPause->setVisible(true);
}

void MwDemineur::resetTime()
{
    timer.stop();

    qTime = QTime(0,0,0);
    ui->timeGame->display("00:00");
}

void MwDemineur::restart(){
    std::string name {myGame->getPlayer().getUserName()};
    unsigned width {myGame->getBoard().getWidth()};
    unsigned height {myGame->getBoard().getHeight()};
    unsigned nbBomb {myGame->getBoard().getNbrBomb()};

    delete myGame;
    myGame = nullptr;
    delete boardGui;
    boardGui = nullptr;

    resetTime();

    myGame = new Game(name,width,height,nbBomb);
    myGame->getBoard().initBomb();
    boardGui = new BoardGame(*myGame);

    boardGui->setMinimumSize(myGame->getBoard().getWidth()*41,myGame->getBoard().getHeight()*41);
    ui->scrollArea->setWidget(boardGui);
    ui->scrollArea->setVisible(true);

    ui->scrollArea->setEnabled(true);
    buttonStart.setVisible(false);
    ui->buttonPause->setVisible(true);
    buttonHallOfFame.setVisible(false);

    timer.start(1000);
}


void MwDemineur::closeGame(){
    delete myGame;
    myGame = nullptr;
    delete boardGui;
    boardGui = nullptr;

    timer.stop();
    qTime = QTime(0,0,0);
    ui->timeGame->display("00:00");

    buttonStart.setVisible(false);
    ui->buttonPause->setVisible(true);
    ui->action_Nouveau->setVisible(true);
    ui->action_Fermer->setVisible(false);
    ui->centralWidget->setEnabled(false);
}

void MwDemineur::runHallOfFrame(){
    HallOfFrameGui hal(myGame->getBoard().getHeight(),myGame->getBoard().getWidth(),myGame->getBoard().getNbrBomb());
    hal.exec();
}













