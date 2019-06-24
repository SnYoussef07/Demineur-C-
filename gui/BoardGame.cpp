#include "BoardGame.hpp"


BoardGame::BoardGame(Game &aGame, QWidget *parent) :
    QWidget(parent),myGame(aGame),sizeCase(40)
{
    image = QImage(myGame.getBoard().getWidth(), myGame.getBoard().getHeight(), QImage::Format_ARGB32);
    myGame.attach(this);
    setMouseTracking(true);
}

void BoardGame::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    for (int i = 0; i <= image.width(); ++i)
        painter.drawLine(sizeCase * i, 0,sizeCase * i, sizeCase * image.height());
    for (int j = 0; j <= image.height(); ++j)
        painter.drawLine(0, sizeCase * j,sizeCase * image.width(), sizeCase * j);

    for (int i = 0; i < image.width(); ++i) {
        for (int j = 0; j < image.height(); ++j) {
            QRect rect = pixelRect(i, j);
            if (!event->region().intersected(rect).isEmpty()) {
                /********/
                if(myGame.getBoard().getGrid().at(i).at(j).getContainsBomb() && myGame.getIsGameOver()){
                    painter.fillRect(rect,QBrush(QImage("resource/bomb.png")));
                }else{
                    if(myGame.getBoard().getGrid().at(i).at(j).getState() == HIDDEN){
                        painter.fillRect(rect,QBrush(QImage("resource/hidden.png")));
                    }else if(myGame.getBoard().getGrid().at(i).at(j).getState() == MARKED){
                        painter.fillRect(rect,QBrush(QImage("resource/marked.png")));
                    }else if(myGame.getBoard().getGrid().at(i).at(j).getState() == REVEALED){
                        if(myGame.getBoard().getGrid().at(i).at(j).getNbBombNeighbours() == 0){
                            painter.fillRect(rect,QBrush(QImage("resource/reveal.png")));
                        }else{
                            switch(myGame.getBoard().getGrid().at(i).at(j).getNbBombNeighbours()){
                            case 1:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal1.png")));break;
                            case 2:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal2.png")));break;
                            case 3:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal3.png")));break;
                            case 4:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal4.png")));break;
                            case 5:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal5.png")));break;
                            case 6:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal6.png")));break;
                            case 7:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal7.png")));break;
                            case 8:
                                painter.fillRect(rect,QBrush(QImage("resource/reveal8.png")));
                            }
                        }
                    }
                }
            }
        }
    }
}

QRect BoardGame::pixelRect(int i, int j) const{
    return QRect(sizeCase * i + 1, sizeCase * j + 1, sizeCase - 1, sizeCase - 1);
}

void BoardGame::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::LeftButton) {
        revealCase(event->pos());
    } else if (event->button() == Qt::RightButton) {
        markedCase(event->pos());
    }
}

void BoardGame::revealCase(const QPoint &pos){
    int i = pos.x() / sizeCase;
    int j = pos.y() / sizeCase;

    if (image.rect().contains(i, j) && myGame.getBoard().getGrid().at(i).at(j).getState() == HIDDEN) {
        if(myGame.getBoard().getGrid().at(i).at(j).getContainsBomb()){
            if(myGame.getPlayer().getNbTours() == 0 ){
                myGame.bombFirstReveal(i,j);
                myGame.revealCase(i,j);
                myGame.getPlayer().incrementTour();
            }else{
                myGame.setIsGameOver();
                update();
                this->setDisabled(true);
            }
        }else{
            myGame.revealCase(i,j);
            myGame.getPlayer().incrementTour();
        }
    }
}

void BoardGame::markedCase(const QPoint &pos){
    int i = pos.x() / sizeCase;
    int j = pos.y() / sizeCase;

    if (image.rect().contains(i, j)) {
        if(myGame.getBoard().getGrid().at(i).at(j).getState() == MARKED){
            myGame.removeMarkCase(i,j);
        }else if(myGame.getBoard().getGrid().at(i).at(j).getState() == HIDDEN){
            myGame.markCase(i,j);
        }
    }
}

void BoardGame::aUpdate(){
    this->update();
}
