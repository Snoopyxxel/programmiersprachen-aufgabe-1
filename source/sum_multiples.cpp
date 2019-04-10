#include "catch.hpp"

int sum_multiples(){
    return 1;
}

TEST_CASE("sum_multiples"){
    REQUIRE(sum_multiples() == 1);
}