#include "catch.hpp"
#include <cmath>

float vol_cylin(float radius, float height){
    if(radius < 0 or height < 0){
        return -1;
    }
    return 1;
}

float surface_cylin(float radius, float height){
    if(radius < 0 or height < 0){
        return -1;
    }
    return 1;
}

TEST_CASE("Volume of a Cylinder", "[cylinder]"){
    REQUIRE(vol_cylin(3,5) == Approx(141.371669));
    REQUIRE(vol_cylin(0,0) == Approx(0));
    REQUIRE(vol_cylin(5,4) == Approx(314.159265));
    REQUIRE(vol_cylin(1,1) == Approx(3.14159265));
    REQUIRE(vol_cylin(1,-1) == -1);
}

TEST_CASE("Surface Area of a Cylinder", "[cylinder]"){
    REQUIRE(surface_cylin(1,1) == Approx(12.5663706));
    REQUIRE(surface_cylin(3,5) == Approx(150.796447));
    REQUIRE(surface_cylin(0,0) == Approx(0));
    REQUIRE(surface_cylin(-1,1) == -1);
    REQUIRE(surface_cylin(5,4) == Approx(282.743339));
}