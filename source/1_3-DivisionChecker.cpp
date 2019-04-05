#include <iostream>

long long divisionsearch(long long inp){
    bool dividable = false;
    long long dividend = inp;
    while (!dividable){
        for (int i = 2; i <= inp; ++i) {
            if (dividend % i != 0) {
                break;
            }
            if (i == inp) {
                return dividend;
            }
        }
        dividend += inp;
    }
}

int main() {
    std::cout << divisionsearch(20) << std::endl;
    return 0;
}