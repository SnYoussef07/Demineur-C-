#ifndef CASE_HPP
#define CASE_HPP
#include "State.hpp"
#include <ostream>

/*!
 * \brief Represents a case in a board.
 */
class Case
{
private:

    /*!
     * \brief The state of the case.
     */
    State state;


    /*!
     * \brief True if a case contains a bomb, false if not.
     */
    bool containsBomb;


    /*!
     * \brief The number of neighbours bombs (adjacent cases).
     */
    unsigned nbBombNeighbours;


public:


    /*!
     * \brief Constructs a Case
     */
    Case();



    /*!
     * \brief Adds a bomb in a case.
     */
    void setContainsBomb();


    /*!
     * \brief Removes a bomb of a case.
     */
    inline void removeContainsBomb()
    {
        containsBomb = false;
    }


    /*!
     * \brief Getter for the state
     * \return The state of a case (Hidden, discovered or mined)
     */
    inline State& getState()
    {
        return this->state;
    }


    /*!
     * \brief Getter for containsBomb.
     * \return True if the case contains a bomb, false if not.
     */
    inline bool getContainsBomb() const
    {
        return this->containsBomb;
    }


    /*!
     * \brief Changes the state of a case.
     * \param state A state
     */
    inline void setState(State state)
    {
        this->state = state;
    }


    /*!
     * \brief Gets the number of neighbours bombs (adjacent cases).
     * \return The number neighbours bombs.
     */
    inline unsigned getNbBombNeighbours() const
    {
        return this->nbBombNeighbours;
    }


    /*!
     * \brief Sets the number of neighbours bombs (adjacent cases).
     */
    inline void setNbBombNeighbours(unsigned nbBombs)
    {
        this->nbBombNeighbours = nbBombs;
    }

};


#endif // CASE_H
