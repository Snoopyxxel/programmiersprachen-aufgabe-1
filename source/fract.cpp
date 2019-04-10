#include "catch.hpp"

float fract(float in){
    return in - floor(in);
}

TEST_CASE("fract"){
    REQUIRE(fract(4.5) == Approx(0.5));
    REQUIRE(fract(0.5) == Approx(0.5));
    REQUIRE(fract(-1.5) == Approx(0.5));
    REQUIRE(fract(-0.5) == Approx(0.5));
    REQUIRE(fract(4) == Approx(0));
    REQUIRE(fract(0) == Approx(0));
}