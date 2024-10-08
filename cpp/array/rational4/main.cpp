#include <iostream>
#include "rational.h"

int main() {

    Rational r1;
    Rational r2 = 3;
    Rational r3(3, 4);
    const Rational r4 = r3;

    r1 = r3;

    if ( r1 == r3 ) {
        std::cout << "r1 and r3 are equal" << std::endl;
    } else {
        std::cout << "r1 and r3 are not equal" << std::endl;
    }

    r1 != r3;

    r2 = r1+r2;
    r2 += r1;

    r1++;
    ++r2;

    std::cout << "r1: " << r1.getDen() << "/" << r1.getDen() << std::endl;
    std::cout << "r2: " << r2 << std::endl;
    std::cout << "r3: " << r3 << std::endl;
    std::cout << "r4: " << r4 << std::endl;

    //추가된 부분 (24.08.30)
    Rational r5;

    std::cout << "input r5: ";
    std::cin >> r5;

    std::cout << "r5: " << r5 << std::endl;

    return 0;
}