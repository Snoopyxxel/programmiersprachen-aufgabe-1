#include "catch.hpp"
#include <iostream>
#include <string>

double mile_to_kilometer(double in_mile){
    if(in_mile < 0){
        return -1;
    } else{
        return (in_mile * 1.60934);
    }
}

TEST_CASE("Converting miles to kilometers"){
    REQUIRE(mile_to_kilometer(0) == Approx(0));
    REQUIRE(mile_to_kilometer(0.5) == Approx(0.804672));
    REQUIRE(mile_to_kilometer(1) == Approx(1.609344));
    REQUIRE(mile_to_kilometer(235) == Approx(378.19584));
    REQUIRE(mile_to_kilometer(-3) == Approx(-1));
    REQUIRE(mile_to_kilometer(9) == Approx(14.484096));
}