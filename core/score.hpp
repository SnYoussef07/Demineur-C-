#ifndef SCORE_H
#define SCORE_H
#include <iostream>

/*!
 * \brief The Score class
 */
class Score {
private:

    /*!
     * \brief The name of the player
     */
    std::string player;

    /*!
     * \brief The chosen height of the board
     */
    unsigned height;

    /*!
     * \brief The chosen width of the board
     */
    unsigned width;

    /*!
     * \brief The chosen amount of bombs of the board
     */
    unsigned bombs;

    /*!
     * \brief The time take by the player to finish the game
     */
    unsigned time;

public:

    /*!
     * \brief Constructs a Score
     * \param aPlayer The name of the player
     * \param aHeight A height
     * \param aWidth A width
     * \param aBombs An amount of bombs
     * \param aTime A time
     */
    Score(std::string aPlayer,unsigned aHeight,unsigned aWidth,unsigned aBombs,unsigned aTime);


    /*!
     * \brief Gets the name of the player
     * \return The name of the player
     */
    inline std::string getNamePlayer() const {return player;}


    /*!
     * \brief Gets the chosen height of the board
     */
    inline unsigned getHeight() const {return height;}


    /*!
     * \brief Gets the chosen width of the board
     */
    inline unsigned getWidth() const {return width;}


    /*!
     * \brief Gets the chosen amount of bombs of the board
     */
    inline unsigned getBombs() const {return bombs;}


    /*!
     * \brief Gets the time elapsed
     */
    inline unsigned getTime() const {return time;}
};
#endif // SCORE_H
