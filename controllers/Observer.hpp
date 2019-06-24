#ifndef OBSERVER_H
#define OBSERVER_H
#include "Subject.hpp"

/*!
 * \brief The Observer class
 */
class Observer
{

public:

    /*!
     * \brief Updates all observers.
     */
    virtual void aUpdate() = 0;
};

#endif // OBSERVER_H
