#ifndef HALLOFFRAMEGUI_HPP
#define HALLOFFRAMEGUI_HPP

#include <QDialog>
#include <QLabel>

#include <halloffame.hpp>
#include <vector>
#include <score.hpp>

namespace Ui {
class HallOfFrameGui;
}

class HallOfFrameGui : public QDialog
{
    Q_OBJECT

public:
    explicit HallOfFrameGui(unsigned aHeight , unsigned aWidth , unsigned aNbBombs , QWidget *parent = 0);
    ~HallOfFrameGui();

    /*!
     * \brief Constructs the hall of fame with scores according to the received data.
     * \param score The score
     */
    void runHallOfFrame(std::vector<Score> score);

private:

    /*!
     * \brief The hall of fame
     */
    HallOfFrame hal;

    /*!
     * \brief The height
     */
    unsigned height;

    /*!
     * \brief The width
     */
    unsigned width;

    /*!
     * \brief The number of bombs.
     */
    unsigned nbBombs;

    Ui::HallOfFrameGui *ui;
};

#endif // HALLOFFRAMEGUI_HPP
