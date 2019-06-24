#ifndef MWDEMINEUR_H
#define MWDEMINEUR_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QLabel>

#include <QPushButton>
#include <QMovie>

#include <QWidget>
#include <QMessageBox>

#include "../controllers/Subject.hpp"
#include "Game.hpp"
#include "BoardGame.hpp"

namespace Ui {
class MwDemineur;
}

class MwDemineur : public QMainWindow
{
    Q_OBJECT


private slots:
    /*!
     * \brief Creates the game with received data from ConfigGame
     */
    void createGame();


    /*!
     * \brief Closes the current game session.
     */
    void closeGame();


    /*!
     * \brief Prints the timer
     */
    void showTime();


    /*!
     * \brief Pauses the game, incluing the timer.
     */
    void pause();


    /*!
     * \brief Resumes the game if it's paused
     */
    void start();


    /*!
     * \brief Restarts the game with same configuration (wodth, height, number of bombs..)
     */
    void restart();


    /*!
     * \brief Updates the view of the timer each second
     */
    void onTimeout();


    /*!
     * \brief Runs the Hall of Fame window at the end of the game, or if we click into the associated button.
     */
    void runHallOfFrame();

public:
    explicit MwDemineur(QWidget *parent = 0);
    ~MwDemineur();

    /*!
     * \brief Manages all buttons connections
     */
    void conexion();

    /*!
     * \brief Ends the game in case of winning
     */
    void winGame();
    /*!
     * \brief Ends the game in case of losing
     */
    void loseGame();

private:

    /*!
     * \brief timer
     */
    QTimer timer;

    /*!
     * \brief For printing time in H:M:S
     */
    QTime qTime;

    /*!
     * \brief Button to resume game when it's paused
     */
    QPushButton buttonStart;

    /*!
     * \brief Button to print the hall of fame
     */
    QPushButton buttonHallOfFame;

    /*!
     * \brief A game
     */
    Game* myGame;

    /*!
     * \brief boardGui
     */
    BoardGame *boardGui;

    /*!
     * \brief ui
     */
    Ui::MwDemineur *ui;

    /*!
     * \brief resetTime
     */
    void resetTime();
};

#endif // MWDEMINEUR_H
