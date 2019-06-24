#include "Game.hpp"
#include "catch.hpp"

SCENARIO("You cannot access a case that is not in the board")
{
    GIVEN("A default game")
    {
        Game game("test");
        WHEN("A case is in the board")
        {
            THEN("The element is accessed")
            {
                REQUIRE_NOTHROW(game.revealCase(0,0));
            }
        }

        WHEN("A case is not in the board")
        {
            THEN("An std::invalid_argument exception is thrown")
            {
                REQUIRE_THROWS_AS(game.revealCase(-1,0), std::invalid_argument);
            }
        }
    }
}

