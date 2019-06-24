#include "Case.hpp"

Case::Case() : state(HIDDEN), containsBomb(false), nbBombNeighbours(0){}

void Case::setContainsBomb()
{
    containsBomb = true;
}

