/*!
 * \file Board.hpp
 * \brief Définition de la classe Board et des fonctions utilisant
 *        ce type.
 */
#include <vector>
#include <math.h>
#include "Case.hpp"
#ifndef BOARD_HPP
#define BOARD_HPP

/*!
* \brief Represents the minesweeper board.
*/
class Board
{
private:

    /*!
     * \brief The width of the board.
     */
    int width;


    /*!
     * \brief The height of the board.
     */
    int height;

    /*!
     * \brief The number of bombs in the board. Between 0 and 1 will be the probability
     * of a case to have a bomb inside it, and greater than 1, will be a fix amount of bombs.
     * of bombs in the board.
     */
    double nbrBomb;

    /*!
     * \brief 2D vector that represents the board.
     */
    std::vector<std::vector<Case>> grid;


    /*!
     * \brief Generates a random number within a range.
     * \param min Min range
     * \param max Max range
     * \return The generated number.
     */
    int random(int min, int max);


    /*!
     * \brief Places bombs at randomly positions according to a probability.
     *  The probability is chosen when user enters a number between 0 and 1
     * for initialize the number of bombs. This number will be the probability
     * of a case to have a bomb inside it.
     */
    void bombProba();


public:

    /*!
     * \brief Constructs a board.
     * \param width A width
     * \param height A height
     * \param number of Bomb
     */
    Board(unsigned aWidth, unsigned aHeight, double aNbrBomb);

    /*!
     * \brief Constructs a board with defaults parameters (9x9 with 5 bombs), unless
     * we overload parameters.
     * \param width A width
     * \param height A height
     */
    Board(unsigned aWidth = 9, unsigned aHeight = 9);



    /*!
     * \brief Checks if the bombs are not greather than the size of the board.
     * \return true if the bombs are not greather than the size of the board,
     * false if its the opposite.
     */
    bool canmakeBoard();


    /*!
     * \brief Getter for the width.
     * \return The width.
     */
    inline unsigned getWidth() const
    {
        return width;
    }


    /*!
     * \brief Getter for the height.
     * \return The height.
     */
    inline unsigned getHeight() const
    {
        return height;
    }

    /*!
     * \brief Getter for the number of bombs in the board.
     */
    inline unsigned getNbrBomb() const
    {
        return nbrBomb;
    }

    /*!
     * \brief Getter for the grid.
     * \return The grid.
     */
    inline std::vector<std::vector<Case>>& getGrid()
    {
        return grid;
    }

    /*!
     * \brief Finds the case corresponding to a position.
     * \param row A row
     * \param column A column
     * \return
     */
    Case getCaseAt(const unsigned& row, const unsigned& column) const;

    /*!
     * \brief Reveals a case
     * \param row The case's row
     * \param column The case's column
     */
    void reveal(int row, int column);


    /*!
     * \brief Initializes the bombs on the board.
     */
    void initBomb();



    /*!
     * \brief Initializes the bombs in specific positions. Useful for unit tests.
     * \param row Tha row in the board
     * \param column The column in the board.
     */
    void initBombManual(const unsigned& row, const unsigned& column);


    /*!
     * \brief Counts the number of neighbours that a case has.
     * \param row The row of a case's position
     * \param column The column of a case's position
     */
    unsigned checkNeighbours(int &row, int &column);


    /*!
     * \brief Checks if a position is inside of the grid.
     * \param row A row
     * \param column A column
     * \return true if the position is in the grid, false if not.
     */
    bool isInsideGrid(const int &row, const int &column);


    /*!
     * \brief Counts the number of bombs in the board (looping).
     */
    unsigned countBombs();

};

#endif
