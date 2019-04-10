#include "catch.hpp"

int gcd(int a, int b) {
    if (a < 0) {
        a = abs(a);
    }
    if (b < 0) {
        b = abs(b);
    }
    if (a == 0 and b == 0) {
        return -1;
    }
    for (int i = std::min(a, b); i >= 1; --i) {
        if (a % i == 0 and b % i == 0) {
            return i;
        }
    }
    return 1;

}

TEST_CASE("describe_gcd") {
    REQUIRE(gcd(0, 0) == -1);
    REQUIRE(gcd(-1, 1) == 1);
    REQUIRE(gcd(1, -1) == 1);
    REQUIRE(gcd(-1, -1) == 1);
    REQUIRE(gcd(1, 1) == 1);
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(9, -6) == 3);
    REQUIRE(gcd(3, 7) == 1);
}