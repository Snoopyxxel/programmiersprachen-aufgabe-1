#include <iostream>
#include "catch.hpp"

long long Divisionsearch(long long inp){
    bool dividable = false;
    long long dividend = inp;
    while (!dividable){
        for (int i = 2; i <= inp; ++i) {
            if (dividend % i != 0) {
                break;
            }
            if (i == inp) {
                return dividend;
            }
        }
        dividend += inp;
    }
}

/*
TEST_CASE( "Dividends are computed") {
    REQUIRE( Divisionsearch(10) == 2520);
    REQUIRE( Divisionsearch(20) == 232792560);
}
*/


int main() {
    std::cout << Divisionsearch(20) << std::endl;
    return 0;
}
