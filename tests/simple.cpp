#include "catch.hpp"
#include "Game.hpp"

TEST_CASE("Test board grid sizes")
{
    Board board(5,7,8);
    REQUIRE(board.getWidth() == 5);
    REQUIRE(board.getHeight() == 7);
    REQUIRE (board.getNbrBomb() == 8);
}


TEST_CASE("Exceptions")
{
    SECTION("Mark a case that is already marked")
    {
        Game game("test");
        REQUIRE_NOTHROW(game.markCase(1,1));
        REQUIRE_THROWS_AS(game.markCase(1,1), std::invalid_argument);
    }

    SECTION("Unmark a case that is not marked")
    {
        Game game("test");
        game.markCase(2,2);
        REQUIRE_NOTHROW(game.removeMarkCase(2,2));
        REQUIRE_THROWS_AS(game.removeMarkCase(1,1), std::invalid_argument);
    }
}

TEST_CASE("Neighbour count")
{
    Game game("test");


    game.getBoard().initBombManual(2,2);
    int row = 3;
    int column = 2;
    REQUIRE (game.getBoard().checkNeighbours(row,column) == 1);
    /*
     X = case chosen to test neighbours
     B = bomb
    +--+--+--+--+--+--+--+--+--+
0   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
1   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
2   | -| -| B| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
3   | -| -| X| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
4   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
5   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
6   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
7   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
8   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
     0  1  2  3  4  5  6  7  8
    */



    game.getBoard().initBombManual(4,4);
    column = 3;
    REQUIRE(game.getBoard().checkNeighbours(row,column) == 2);
    /*
     X = case chosen to test neighbours
     B = bomb
    +--+--+--+--+--+--+--+--+--+
0   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
1   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
2   | -| -| B| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
3   | -| -| -| X| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
4   | -| -| -| -| B| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
5   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
6   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
7   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
8   | -| -| -| -| -| -| -| -| -|
    +--+--+--+--+--+--+--+--+--+
     0  1  2  3  4  5  6  7  8
    */

}

TEST_CASE("Assert that the board is initialized with correct amount of bombs")
{
    SECTION("With a fixed amount, but randomly positions")
    {
        Game game("test",5,5,3);
        game.getBoard().initBomb();
        REQUIRE(game.getBoard().countBombs() == 3);
    }

    SECTION("With default amount(10), and randomly positions")
    {
        Game game("test");
        game.getBoard().initBomb();
        REQUIRE(game.getBoard().countBombs() == 10);
    }

    SECTION("Manually")
    {
        Game game("test", 7, 8, 0);
        game.getBoard().initBombManual(0,1);
        game.getBoard().initBombManual(0,3);
        game.getBoard().initBombManual(0,6);
        game.getBoard().initBombManual(0,7);
        REQUIRE(game.getBoard().countBombs() == 4);
    }
}













