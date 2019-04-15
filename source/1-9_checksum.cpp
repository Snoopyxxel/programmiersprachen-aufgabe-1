#include "catch.hpp"

int checksum(int in){
    if(in < 10){
        return in;
    } else{
        return in % 10 + checksum(floor(in/10));
    }

}

TEST_CASE("checksum"){
    REQUIRE(checksum(21) == 3);
    REQUIRE(checksum(12) == 3);
    REQUIRE(checksum(1) == 1);
    REQUIRE(checksum(120277) == 19);
}