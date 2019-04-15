#include "catch.hpp"

bool is_prime(int in){
    if(in < 2){
        return false;
    }
    for(int i = 2; i < in; i++){
        if(in % i == 0){
            return false;
        }
    }
    return true;
}

TEST_CASE("Testing for Primes"){
    REQUIRE(is_prime(7));
    REQUIRE(!is_prime(1));
    REQUIRE(is_prime(101));
    REQUIRE(!is_prime(0));
    REQUIRE(!is_prime(-7));
    REQUIRE(!is_prime(20));
}