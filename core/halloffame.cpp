#include "halloffame.hpp"

#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


HallOfFrame::HallOfFrame(): file("C:\\Users\\Thales\\Documents\\Demineur-cpp\\core\\halloffame.txt"){}

vector<Score> HallOfFrame::read(unsigned rows, unsigned columns, unsigned nbBombs, unsigned top)
{
    ifstream ifs{file.c_str(), std::ifstream::in}; //en entrée
    vector<Score> scores;
    string rjoueur;
    unsigned rrows;
    unsigned rcolumns;
    unsigned rnbBombs;
    unsigned rtime;
    ifs >> rjoueur;
    while (!ifs.eof())
    {
        ifs >> rrows;
        ifs >> rcolumns;
        ifs >> rnbBombs;
        ifs >> rtime;
        if (rrows==rows && rcolumns==columns && rnbBombs==nbBombs){
            scores.push_back(Score(rjoueur, rrows, rcolumns, rnbBombs, rtime));
        }
        ifs >> rjoueur;
    }
    sort(scores.begin(), scores.end(), [](const Score &lhs, const Score &rhs)
    {
        return lhs.getTime()<rhs.getTime();
    });
    if (scores.size()>top) scores.erase(scores.begin()+top, scores.end());
    return scores;
}

void HallOfFrame::write(const Score &score)
{
    ofstream ofs(file.c_str(),ios::app);
    ofs <<score.getNamePlayer()<<" "<<score.getHeight()<<" "<< score.getWidth()<<" "<< score.getBombs()<<" "<< score.getTime()<< '\n';
    ofs.close();
}
