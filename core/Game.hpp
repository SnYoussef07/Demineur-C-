#ifndef GAME_HPP
#define GAME_HPP
#include "Board.hpp"
#include "Player.hpp"
#include "../controllers/Subject.hpp"

#include <chrono>
#include <ctime>
#include <halloffame.hpp>

#include <string>
#include <iostream>
#include <fstream>
#include <cmath>

/*!
 * \brief The Game class
 */
class Game : public Subject
{
private:


    /*!
     * \brief The player in current game.
     */
    Player player;

    /*!
     * \brief A board
     */
    Board board;


    /*!
     * \brief To check if the game is over.
     */
    bool isGameOver;

    /*!
     * \brief chrono time
     */
    std::chrono::time_point<std::chrono::system_clock> start, end;


    /*!
     * \brief Amount of seconds elapsed.
     */
    unsigned elapsed_seconds;


    /*!
     * \brief The Hall Of Fame
     */
    HallOfFrame hallOfFame;


public:

    /*!
     * \brief Constructs the game with default parameters.
     */
    Game(std::string namePlayer);


    /*!
     * \brief Constructs the game with custom parameters.
     * \param width The width of the board.
     * \param height The height of the board.
     * \param nbrBomb The number of the bombs that the board will have.
     */
    Game(std::string namePlayer, unsigned width , unsigned height , double nbrBomb);

    /*!
     * \brief Constructs the game with custom parameters.
     * \param width The width of the board.
     * \param height The height of the board.
     */
    Game(std::string namePlayer, unsigned width , unsigned height);

    /*!
     * \brief Reveals a case
     * \param row The case's row
     * \param column The case's column
     */
    void revealCase(int row, int column);

    /*!
     * \brief Marks a case with a flag (bomb suspect)
     * \param row The case's row
     * \param column The case's column
     */
    void markCase(const unsigned& row, const unsigned& column);

    /*!
     * \brief Removes the flag from a case
     * \param row The case's row
     * \param column The case's column
     */
    void removeMarkCase(const unsigned& row, const unsigned& column);


    /*!
     * \brief
     * \return
     */
    bool endGame();


    /*!
     * \brief Gets the amount of elapsed seconds.
     */
    inline unsigned getElapsedSeconds() const{
        return elapsed_seconds;
    }

    /*!
     * \brief Getter for the Board.
     */
    inline Board& getBoard() {
        return board;
    }

    /*!
     * \brief Getter for the Player.
     */
    inline Player& getPlayer() {
        return player;
    }


    /*!
     * \brief Getter fot the attribute 'isGameOver'. The game is over when
     *  the player has revealed all hidden cases without reveal a bomb. If
     * the user chooses to reveal a case that contains a bomb, the game ends instantanely
     * and user looses.
     * \return  true if the game is over, false if not.
     */
    inline bool getIsGameOver() {
        return isGameOver;
    }


    /*!
     * \brief Sets game over.
     */
    inline void setIsGameOver() {
        isGameOver = true;
    }

    /*!
     * \brief The first case that the user reveals must not be a bomb, this method
     * do this work.
     * \param row A row
     * \param column A column
     */
    void bombFirstReveal(const unsigned &row, const unsigned &column);
};

#endif // GAME_H
