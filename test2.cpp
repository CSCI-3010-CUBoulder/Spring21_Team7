#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

int CheckIfAbove10(int number) 
{
    if(number > 10)
    {
      return 100;
    }
    else
    {
      return 0;
    }
     
}

TEST_CASE( "CheckIfAbove10 are computed" ) {
    REQUIRE( CheckIfAbove10(10) == 0 );
    REQUIRE( CheckIfAbove10(19) == 100 );
    REQUIRE( CheckIfAbove10(3) == 0 );
    REQUIRE( CheckIfAbove10(100) == 100);
}
