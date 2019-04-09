#include "catch.hpp"

int gcd (int a ,int b)
{
    if (a == 0 and b == 0){
        return NULL;
    }

    if (a < 0 or b < 0){
        return NULL;
    }
    for(int i = std::min(a,b); i >= 1; --i){
        if (a % i == 0 and b % i == 0){
            return i;
        }
    }
    return 1;

}

TEST_CASE("describe_gcd","[gcd]")
{
    REQUIRE(gcd(0, 0) == NULL);
    REQUIRE(gcd(-1,1) == NULL);
    REQUIRE(gcd(1,-1) == NULL);
    REQUIRE(gcd(-1,-1) == NULL);
    REQUIRE(gcd(1,1) == 1);
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);
}