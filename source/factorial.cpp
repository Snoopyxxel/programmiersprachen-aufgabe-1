#include "catch.hpp"

int factorial(int in){
    if(in == 0){
        return 1;
    }
    return in * factorial(in - 1);
}

TEST_CASE("Factorials"){
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(10) == 3628800);
}