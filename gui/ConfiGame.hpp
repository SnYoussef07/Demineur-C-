#ifndef CONFIGAME_H
#define CONFIGAME_H

#include <QDialog>

namespace Ui {
class ConfiGame;
}

/*!
 * \brief The ConfiGame class
 */
class ConfiGame : public QDialog
{
    Q_OBJECT

public:
    explicit ConfiGame(QWidget *parent = 0);
    ~ConfiGame();

    /*!
     * \brief Returns the introduced player name.
     * \return the introduced player name.
     */
    QString getName() const ;


    /*!
     * \brief Returns the width of the game
     * \return
     */
    int getWidth() const ;


    /*!
     * \brief Returns the height of the game
     * \return
     */
    int getHeight() const ;

    /*!
     * \brief Returns the amount of bombs (fixed or %)
     * \return
     */
    double getNbrBomb() const;

private:
    Ui::ConfiGame *ui;
};

#endif // CONFIGAME_H
