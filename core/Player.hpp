#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>


/*!
 * \brief Represents a player.
 */
class Player
{
private:

    /*!
     * \brief An username for the player.
     */
    std::string username;


    /*!
     * \brief The number of the tours. Each user's click increments this attribute.
     */
    unsigned nbTours;
public:

    /*!
     * \brief Constructs a Player
     * \param username An username
     */
    Player(std::string aUsername);


    /*!
    * \brief Getter for username.
    * \return The player's username.
    */
    inline std::string getUserName() const{
        return username;
    }


    /*!
     * \brief Gets the number of tours.
     */
    inline unsigned getNbTours() const
    {
        return nbTours;
    }

    /*!
     * \brief Increments a player's tour. A tour is incremented when a player
     * reveals a case.
     */
    inline void incrementTour()
    {
        nbTours++;
    }

};

#endif // PLAYER_H
