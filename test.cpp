#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "CheckIfAbove10 are computed" ) {
    REQUIRE( CheckIfAbove10(10) == 0 );
    REQUIRE( CheckIfAbove10(19) == 100 );
    REQUIRE( CheckIfAbove10(3) == 0 );
    REQUIRE( CheckIfAbove10(100) == 100);
}
