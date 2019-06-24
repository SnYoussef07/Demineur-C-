#ifndef INPUT_HPP
#define INPUT_HPP
#include <iostream>

/*!
 * \brief Asks a width of a board to the user.
 * \return Integer that represents the width chosen by the user.
 */
int askWidth()
{
    int width;
    bool ok = false;

    std::cout << "Largeur = ";
    while (!ok)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cin >> width;
        ok = width > 1;
        if(!ok){
            std::cerr << "Valeur invalide. Reesayez SVP." << std::endl;
            std::cout << "Largeur = ";
        }

    }
    return width;
}


/*!
 * \brief Asks a height of a board to the user.
 * \return Integer that represents the height chosen by the user.
 */
int askHeight()
{
    int height;
    bool ok = false;
    std::cout << "Hauteur = ";
    while (!ok)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cin >> height;
        ok = height > 1;
        if(!ok){
            std::cerr << "Valeur invalide. Reesayez SVP." << std::endl;
            std::cout << "Hauteur = ";
        }

    }
    return height;
}


/*!
 * \brief Asks for an username.
 * \return String that represents the chosen username.
 */
std::string askPlayer()
{
    std::string namePlayer = "";
    std::cout << "Introduisez votre nom:" << std::endl;
    std::cin >> namePlayer;
    return namePlayer;
}


/*!
 * \brief Asks how many bombs a board will have.
 * \return Double representing the number of bombs (check Board.hpp to
 * see why we've put a double)
 */
double askNbrBomb()
{
    double nbrBomb {0};
    std::cout << "Nombre de bombes = ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> nbrBomb;

    return nbrBomb;
}


/*!
 * \brief Asks user to enter a row.
 * \param row A row
 * \param width A width
 * \return Integer that contains the row entered by the user.
 */
int askRow(int row , int width)
{
    int myRow = 0;
    std::cout << "rangeé = " ;
    while ( ! ( std::cin >> row ) || row > width-1 || row < 0 )
    {
        if ( std::cin.fail() ){
            std::cout << "Saisie incorrecte, recommencez : " << std::endl;
            std::cout << "rangeé = " ;
            std::cin.clear();
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }else{
            std::cout << "la rangée est incorrecte " << std::endl;
            std::cout << "rangeé = " ;
        }
    }
    myRow = row;
    return myRow;
}


/*!
 * \brief Asks user to enter a column.
 * \param column A row
 * \param height A width
 * \return Integer that contains the column entered by the user.
 */
int askColumn(int column , int height)
{
    int myColumn = 0;
    std::cout << "colonne = " ;
    while ( ! ( std::cin >> column ) || column > height-1 || column < 0 )
    {
        if ( std::cin.fail() ){
            std::cout << "Saisie incorrecte, recommencez : " << std::endl;
            std::cout << "colonne = " ;
            std::cin.clear();
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }else{
            std::cout << "la colonne est incorrecte " << std::endl;
            std::cout << "colonne = " ;
        }
    }
    myColumn = column;
    return myColumn;
}


/*!
 * \brief Asks user to make a choice.
 * 1 for reveal a case
 * 2 for mark a case
 * 3 for unmark a case
 *
 * \param choice An int
 * \return Integer that represents the following actions.
 */
int askChoice(int choice)
{
    int mychoice{0};
    std::cout << "Choisissez = ";

    while ( ! ( std::cin >> choice ) || choice < 1 || choice > 3 )
    {
        if ( std::cin.fail() ){
            std::cout << "Saisie incorrecte, recommencez : " << std::endl;
            std::cout << "Choisissez = ";
            std::cin.clear();
            std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
        }else{
            std::cout << "Saisie incorrecte, recommencez : " << std::endl;
            std::cout << "Choisissez = ";
        }
    }
    mychoice = choice;
    return mychoice;
}



#endif // INPUT_HPP

































