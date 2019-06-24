#include "Game.hpp"


Game::Game(std::string namePlayer) : player(namePlayer) , board() , isGameOver(false) {
    start = std::chrono::system_clock::now();
}

Game::Game(std::string namePlayer,unsigned width,unsigned height) : player(namePlayer) , board(width,height) , isGameOver(false){
    start = std::chrono::system_clock::now();
}


Game::Game(std::string namePlayer , unsigned width, unsigned height, double nbrBomb) : player(namePlayer) , board(width,height,nbrBomb) , isGameOver(false) {
    start = std::chrono::system_clock::now();
}


void Game::revealCase(int row, int column){
    if(!board.isInsideGrid(row,column))
        throw std::invalid_argument("Invalid case");
    if(board.getGrid().at(row).at(column).getState() == MARKED){
        throw std::invalid_argument("Cannot reveal the case at ["+
                                    std::to_string(row)+","+
                                    std::to_string(column)+"].");
    }


    board.reveal(row,column);
    notify();
}

void Game::markCase(const unsigned &row, const unsigned &column){
    if(board.isInsideGrid(row,column) && board.getGrid().at(row).at(column).getState() == HIDDEN){
        board.getGrid().at(row).at(column).setState(MARKED);
        notify();
    }else{
        throw std::invalid_argument("Cannot mark the case at ["+
                                    std::to_string(row)+","+
                                    std::to_string(column)+"].");
    }
}

void Game::removeMarkCase(const unsigned &row, const unsigned &column){
    if(board.isInsideGrid(row,column) && board.getGrid().at(row).at(column).getState() == MARKED){
        board.getGrid().at(row).at(column).setState(HIDDEN);
        notify();
    }else{
        throw std::invalid_argument("Cannot unmark the case at ["+
                                    std::to_string(row)+","+
                                    std::to_string(column)+"].");
    }

}

bool Game::endGame(){

    unsigned diff {0};
    diff = ( (board.getWidth()*board.getHeight()) - board.getNbrBomb() );
    unsigned cpt{0};
    for(auto firsTab : board.getGrid()){
        for(auto myCase : firsTab){
            if( myCase.getState() == REVEALED ){
                cpt++;
            }
        }
    }
    if(diff == cpt){
        end = std::chrono::system_clock::now();
        elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
        hallOfFame.write(Score(player.getUserName(),board.getHeight(),board.getWidth(),board.getNbrBomb(),elapsed_seconds));
    }
    return diff == cpt;
}


void Game::bombFirstReveal(const unsigned &row, const unsigned &column){
    double randomX ;
    double randomY ;

    board.getGrid().at(row).at(column).removeContainsBomb();

    if(!board.getHeight()*board.getWidth() == board.getNbrBomb()){

        bool isContain = false;
        while(!isContain){
            randomX = 0 + rand() % (( board.getWidth()-1 + 1 ) - 0);
            randomY = 0 + rand() % (( board.getHeight()-1 + 1 ) - 0);

            if(!board.getGrid().at(randomX).at(randomY).getContainsBomb() && randomX != row && randomY != column){
                board.getGrid().at(randomX).at(randomY).setContainsBomb();
                isContain = true;
            }
        }

    }
}






















