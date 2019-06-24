#ifndef GAMEVIEW_HPP
#define GAMEVIEW_HPP
#include <iostream>
#include <string>
#include "Game.hpp"
#include "../controllers/Observer.hpp"
#include "Case.hpp"
#include "Board.hpp"


/*!
 * \brief Represents the view of the game.
 */
class GameView : public Observer

{

private:

    /*!
     * \brief The model of the game.
     */
    Game& myGame;


public:

    /*!
     * \brief Constructs the gameview.
     * \param aGame The model of the game
     */
    GameView (Game &aGame);


    /*!
     * \brief Prints a case of the board correctly.
     * \param myCase A case
     * \return String that contaits the correct format of a case to print.
     */
    std::string printCase(Case &myCase);


    /*!
     * \brief Prints a border for each case.
     * \param height A height
     */
    void printLigne(const unsigned& height);


    /*!
     * \brief Prints the board of the game
     * \param myBoard The board of the game
     */
    void printBoard(Board& myBoard);


    /*!
     * \brief Prints the board with bombs. Used in the end of the game.
     * \param myBoard A board.
     */
    void printBoardWithBombs(Board& myBoard);


    /*!
     * \brief Prints a player.
     * \param player A player.
     */
    void printPlayer(Player& player);



    /*!
     * \brief Converts an amount of seconds to HMS format and prints it.
     * \param seconds An amount of seconds
     * \return String that represents the HMS format for an amount of seconds.
     */
    std::string printTimeHMS(unsigned seconds);


    /**
     * @brief Updates the view (Observer Pattern)x
     */
    void aUpdate();



};


#endif // GAMEVIEW_HPP
