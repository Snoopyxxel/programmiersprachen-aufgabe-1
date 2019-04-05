#include <iostream>

long long divisionsearch(long long inp){
    bool dividable = false;
    long long divisor = inp;
    while (!dividable){
        for (long long i = 2; i <= inp; ++i) {
            if (divisor % i != 0) {
                break;
            }
            if (i == inp) {
                return divisor;
            }
        }
        divisor += inp;
    }
}

int main() {
    std::cout << divisionsearch(10) << std::endl;
    return 0;
}