#include "catch.hpp"

float fract(float in){
    if (in < 0) {
        return floor(in) - in;
    } else if (in > 0){
        return in - floor(in);
    } else{
        return 0;
    }

}

TEST_CASE("fract"){
    REQUIRE(fract(4.5) == Approx(0.5));
    REQUIRE(fract(0.5) == Approx(0.5));
    REQUIRE(fract(-1.5) == Approx(-0.5));
    REQUIRE(fract(-0.5) == Approx(-0.5));
    REQUIRE(fract(4) == Approx(0));
    REQUIRE(fract(0) == Approx(0));
}