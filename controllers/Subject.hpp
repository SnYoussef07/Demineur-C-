#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.hpp"
#include <algorithm>
#include <vector>

/*!
 * \brief The Subject class.
 */
class Subject
{

protected:

    /*!
     * \brief A list of observers.
     */
    std::vector <Observer *> observers;

public:

    /*!
     * \brief Attaches an observer to the list of observers.
     * \param obj A pointer that represents an observer.
     */
    void attach(Observer *obj)
    {
        std::vector<Observer *>::iterator it;
        it = std::find (observers.begin(), observers.end(), obj);
        if (it == observers.end())
            observers.push_back(obj);
    }


    /*!
     * \brief Dettaches an observer from the list of observers.
     * \param obj A pointer that represents an observer.
     */
    void dettach(Observer *obj)
    {
        std::vector<Observer *>::iterator it;
        it = std::find (observers.begin(), observers.end(), obj);
        if (it != observers.end())
            observers.erase(it);
    }

    /*!
     * \brief Notifies all observers.
     */
    void notify(){
        for(unsigned i{0}; i<observers.size(); ++i){
            observers[i]->aUpdate();
        }
    }


};

#endif // SUBJECT_H
