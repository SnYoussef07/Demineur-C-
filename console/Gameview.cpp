#include "Gameview.hpp"
#include <iostream>


GameView::GameView(Game& aGame) : myGame(aGame) {}


std::string GameView::printCase(Case& myCase){

    std::string osCase;
    switch(myCase.getState())
    {
    case HIDDEN:
        osCase = "-" ;break;
    case REVEALED:
        if(myCase.getNbBombNeighbours() == 0){
            osCase = " "; break;
        }else{
            osCase = std::to_string(myCase.getNbBombNeighbours());break;
        }
    case MARKED:
        osCase = "M";
    }

    return osCase;
}

void GameView::printLigne(const unsigned &height){

    std::string ligne {"+--"};
    for(unsigned x=0;x<height;x++){
        std::cout << ligne;
    }
    std::cout <<"+"<< std::endl;
}

void GameView::printBoard(Board& myBoard)
{
    for(unsigned i=0;i<myBoard.getWidth();i++){
        printLigne(myBoard.getHeight());
        for(unsigned j=0;j<myBoard.getHeight();j++){
            std::cout <<"| "<<printCase(myBoard.getGrid().at(i).at(j));
        }
        std::cout <<"| "<<std::endl;
    }
    printLigne(myBoard.getHeight());


}

void GameView::printPlayer(Player& player)
{

    for(int i = 0; i < 20; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
    std::cout << "Joueur: " << player.getUserName() << std::endl
              << "Temps écoulé: " << printTimeHMS(myGame.getElapsedSeconds())
              << std::endl << "Tours: " << player.getNbTours() << std::endl;

    for(int i = 0; i < 20; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
}


std::string GameView::printTimeHMS(unsigned seconds)
{
    return std::to_string(seconds/3600)+ "h " + std::to_string(seconds/60)
            + "m " + std::to_string(seconds%60)+"s";
}

void GameView::printBoardWithBombs(Board& myBoard)
{
    for(unsigned i=0;i<myBoard.getWidth();i++){
        printLigne(myBoard.getHeight());
        for(unsigned j=0;j<myBoard.getHeight();j++){
            if(myBoard.getGrid().at(i).at(j).getContainsBomb()){
                std::cout <<"| B";
            }
            else if(myBoard.getGrid().at(i).at(j).getState() == REVEALED){
                std::cout <<"|  ";
            }

            else if(myBoard.getGrid().at(i).at(j).getState() == MARKED){
                std::cout <<"| M";
            }

            else{
                std::cout << "| -";
            }

        }
        std::cout <<"| "<<std::endl;
    }
    printLigne(myBoard.getHeight());


}


void GameView::aUpdate(){
    printBoard(myGame.getBoard());

}


