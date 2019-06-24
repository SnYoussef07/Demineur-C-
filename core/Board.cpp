#include "Board.hpp"
#include <iostream>
#include <time.h>
#include <cmath>


Board::Board(unsigned aWidth, unsigned aHeight , double aNbrBomb) :
    width(aWidth), height(aHeight),nbrBomb(aNbrBomb),
    grid(width,std::vector<Case>(height))
{
    if (!canmakeBoard())
        throw std::invalid_argument("The number of bombs cannot be greater than board size");
}


Board::Board(unsigned aWidth, unsigned aHeight) :
    width(aWidth), height(aHeight),nbrBomb((0.0002*std::pow((width*height),2)+ 0.0938*(width*height)+ 0.8937)),
    grid(width,std::vector<Case>(height)) {}


Case Board::getCaseAt(const unsigned& row, const unsigned& column) const
{
    return grid.at(row).at(column);
}

void Board::initBomb()
{
    double nbBombs = nbrBomb;

    if(nbrBomb > 1){
        while (nbBombs > 0)
        {
            double randomX = random(0, this->width-1);
            double randomY = random(0, this->height-1);
            if(!this->grid.at(randomX).at(randomY).getContainsBomb()){
                this->grid.at(randomX).at(randomY).setContainsBomb();
                nbBombs--;
            }
        }
    }else{
        bombProba();
    }
}


void Board::bombProba(){
    int nbBombs {0};
    srand((unsigned)time(NULL));
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            double random = static_cast<double>(rand()) / RAND_MAX;
            if (random <= nbrBomb)
            {
                grid.at(i).at(j).setContainsBomb();
                nbBombs++;
            }
        }
    }
    nbrBomb = nbBombs;
}

int Board::random(int min, int max)
{
    static bool first = true;
    if (first)
    {
        srand( time(NULL) );
        first = false;
    }
    return min + rand() % (( max + 1 ) - min);
}

void Board::initBombManual(const unsigned &row, const unsigned &column){
    if(!isInsideGrid(row,column))
        throw std::invalid_argument("Invalid position for a bomb.");

    grid.at(row).at(column).setContainsBomb();
}


unsigned Board::checkNeighbours(int& row, int& column)
{
    unsigned cpt = 0;

    for(int i = row-1; i <= row+1; i++)
    {
        for(int j = column-1; j <= column+1; j++)
        {
            if(isInsideGrid(i,j))
            {
                if(grid.at(i).at(j).getContainsBomb())
                    cpt++;
            }
        }
    }
    return cpt;
}

bool Board::isInsideGrid(const int& row, const int& column)
{
    return row >= 0 && row < width && column >= 0 && column < height ;
}


bool Board::canmakeBoard()
{
    return nbrBomb <= width*height;
}

void Board::reveal(int row, int column){
    if (isInsideGrid(row, column) && grid.at(row).at(column).getState() == HIDDEN) {
        int adjacentMines = checkNeighbours(row, column);
        grid.at(row).at(column).setNbBombNeighbours(adjacentMines);
        grid.at(row).at(column).setState(REVEALED);
        if(adjacentMines == 0)
        {
            for(int i = -1; i <= 1; i++)
            {
                for(int j = -1; j <= 1; j++)
                {
                    if(!(i == 0 && j == 0))
                        reveal(row+i, column+j);
                }
            }
        }
    }
}

//useful for tests
unsigned Board::countBombs()
{
    unsigned cpt = 0;
    for(int i = 0; i < width; i++)
        for(int j = 0; j < height; j++)
            if(grid.at(i).at(j).getContainsBomb())
                cpt++;

    return cpt;
}

