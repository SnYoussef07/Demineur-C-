#ifndef BOARDGAME_HPP
#define BOARDGAME_HPP

#include <QWidget>

#include <QtGui>
#include <QSize>
#include <QImage>
#include "../controllers/Subject.hpp"

#include "Game.hpp"

/*!
 * \brief The BoardGame class
 */
class BoardGame : public QWidget , public Observer
{
    Q_OBJECT

public:
    BoardGame(Game &aGame , QWidget *parent = 0);

protected:
    /*!
     * \brief Mouse event
     * \param event Current event
     */
    void mousePressEvent(QMouseEvent *event);


    /*!
     * \brief Event that allows to draw the board.
     * \param event A paintEvent
     */
    void paintEvent(QPaintEvent *event);

private:
    /*!
     * \brief Reveals the case according to the position got from the event.
     * \param pos Position to reveal
     */
    void revealCase(const QPoint &pos);


    /*!
     * \brief Marks the case according to the position got from the event.
     * \param pos Position to mark.
     */
    void markedCase(const QPoint &pos);


    /*!
     * \brief Allows to draw a rectangle at a specific position.
     * \param i position et largeur du rectangle
     * \param j position et Hauteur du rectangle
     * \return
     */
    QRect pixelRect(int i, int j) const;


    void aUpdate();

    /*!
     * \brief A Game
     */
    Game& myGame;

    /*!
     * \brief Size of a case
     */
    int sizeCase;

    /*!
     * \brief QImage
     */
    QImage image;
};

#endif // BOARDGAME_HPP
