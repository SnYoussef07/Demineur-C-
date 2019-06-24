#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include "Game.hpp"
#include "Gameview.hpp"
#include "input.hpp"

#include "halloffame.hpp"
#include "score.hpp"

using namespace std;

void catchMark(int& width, Game& game, bool& catchMe, int& column, int& height, int& row)
{
    while (!catchMe){
        try{
            cout << "Choisissez la position que vous voulez marquer: " << endl;
            row = askRow(row,width);
            column = askColumn(column,height);
            game.markCase(row,column);
            catchMe = true;
        }catch(exception& e){
            cout << "!!!-Impossible de marquer cette case-!!!" << endl;
        }
    }
}

void catchRemoveMark(int& height, bool& catchMe, int& column, int& width, int& row, Game& game)
{
    while (!catchMe){
        try{
            cout << "Choisissez la position que vous voulez démarquer: " << endl;
            row = askRow(row,width);
            column = askColumn(column,height);
            game.removeMarkCase(row,column);
            catchMe = true;
        }catch(exception& e){
            cout << "!!!-Impossible de supprimer la marque de cette case-!!!" << endl;
        }
    }
}


void start(){
    int row{0};
    int column{0};
    int choice{0};
    bool catchMe{false};

    cout << "                       Demineur" << endl;
    cout << "----------------------------------------------------------------" << endl;

    string namePlayer = askPlayer();

    cout << "Choisissez la taille du tableau:" << endl;

    int width {askWidth()};
    int height {askHeight()};
    cout << "Choisissez le nombre de bombes (de 0.0 a 1.0, c'est la probabilité "
            "qu'une case aura d'avoir une bombe. A partir de 2.0, ça sera un nombre fixe"
            " de bombes.)" << endl;
    double nbrBomb {askNbrBomb()};
    while(nbrBomb <= 0 || nbrBomb > width*height)
    {
        cout << "Erreur. Le nombre de bombes doit être supérieur a 1."
                " Reessayez SVP." << endl;
        nbrBomb = askNbrBomb();
    }


    Game game(namePlayer,height,width,nbrBomb);
    GameView gameView(game);
    game.attach(&gameView);
    game.getBoard().initBomb();

    cout << "                       Debut Du jeux" << endl;
    cout << "----------------------------------------------------------------" << endl;

    gameView.printBoard(game.getBoard());
    while( !(game.endGame()) || game.getIsGameOver() ){
        row = 0;
        column = 0;
        choice = 0;
        catchMe = false;
        cout << endl;

        cout << "Introduisez 1 pour révéler une case,  2 pour marquer, ou 3 pour démarquer." << endl;
        choice = askChoice(choice);
        if(choice == 1){
            cout << "Choisissez la position que vous voulez révéler:" << endl;
            row = askRow(row,width);
            column = askColumn(column,height);
            if(game.getBoard().getGrid().at(row).at(column).getContainsBomb()){
                if(game.getPlayer().getNbTours() == 0){
                    game.bombFirstReveal(row,column);
                    game.revealCase(row,column);
                    game.getPlayer().incrementTour();
                }else{
                    game.setIsGameOver();
                    break;
                }
            }else{
                game.revealCase(row,column);
                game.getPlayer().incrementTour();
            }
        }else if(choice == 2){
            catchMark(width, game, catchMe, column, height, row);
        }else if(choice == 3){
            catchRemoveMark(height, catchMe, column, width, row, game);
        }

        cout << "----------------------------------------------------------------" << endl;
    }

    if((game.getIsGameOver())){
        cout << "BOOOOOOM: Vous avez perdu :(" << endl;
        gameView.printBoardWithBombs(game.getBoard());
    }else{
        cout << "BRAVO! Vous avez gagné!! :D" << endl;
        gameView.printBoardWithBombs(game.getBoard());
        gameView.printPlayer(game.getPlayer());

        //Score sc(game.getPlayer().getUserName(),game.getBoard().getHeight(),game.getBoard().getWidth(),game.getBoard().getNbrBomb(),game.getPlayer().getSeconds());
        //HallOfFrame hall;
        //hall.write(sc);
        //hall.read(game.getBoard().getHeight(),game.getBoard().getWidth(),game.getBoard().getNbrBomb());

    }
}

int main()
{
    start();
}















