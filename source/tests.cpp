#include "catch.hpp"

int gcd (int a ,int b)
{
    if (a == 0 and b == 0){
        return -1;
    }

    if (a < 0 or b < 0){
        return -1;
    }
    for(int i = std::min(a,b); i >= 1; --i){
        if (i % a == 0 and i % b == 0){
            return i;
        }
    }
    return 1;

}

TEST_CASE("describe_gcd","[gcd]")
{
    REQUIRE(gcd(0, 0) == -1);
    REQUIRE(gcd(-1,1) == -1);
    REQUIRE(gcd(1,-1) == -1);
    REQUIRE(gcd(-1,-1) == -1);
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);
}