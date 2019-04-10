#include "catch.hpp"

int sum_multiples(){
    int  ausg = 0;
    for(int i = 1; i <= 1000; ++i)
        if(i % 3 == 0 or i % 5 == 0){
            ausg += i;
        }
    return ausg;
}

TEST_CASE("sum_multiples"){
    REQUIRE(sum_multiples() == 234168);
}