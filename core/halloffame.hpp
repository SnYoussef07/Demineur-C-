#ifndef HALLOFFAME_H
#define HALLOFFAME_H
#include <vector>
#include <score.hpp>
#include <string>


/*!
 * \brief The Hall Of Fame class
 */
class HallOfFrame{

private:

    /*!
     * \brief The name of the file.
     */
    std::string const file;
public:
    HallOfFrame();
    /*!
         * \brief Allows to read in the file the score that corresponds to a certain game configuration (
         * \param rows the rows of the game configuration
         * \param columns the columns of the game configuration
         * \param nbBombs the number of bombs of the game configuration
         * \param top the top 5 ranking
         * \return the sorted score of the configuration (sort by time ascending)
         */
    std::vector<Score> read(unsigned rows, unsigned columns, unsigned nbBombs, unsigned top=5);
    /*!
         * \brief write the score in the file
         * \param score the score to write in the file
         */
    void write(const Score &score);
};
#endif // HALLOFFAME_H
