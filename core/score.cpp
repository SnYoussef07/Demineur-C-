#include "score.hpp"

Score::Score(std::string aPlayer, unsigned aHeight, unsigned aWidth, unsigned aBombs, unsigned aTime) :
    player(aPlayer) , height(aHeight) , width(aWidth) , bombs(aBombs) , time(aTime) {}
