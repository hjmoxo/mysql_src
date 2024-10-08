#include <iostream>
#include "complex.h"

int main()
{  
    Complex c1; 
    Complex c2 = 3.0;    
    Complex c3(3.0, 4.0);
    Complex c4 = c3; 
    Complex c5;

    c1 = c2 = c3;

    if(c1 == c3) {
        std::cout << "c1 and c3 are equal" << std::endl;
    }
    else {
        std::cout << "c1 and c3 are not equal" << std::endl;
    }

    c1 != c3;

    c5 = c2 + c3;
    c5 = c2 - c3;

    std::cout << "c1 : " << c1 << std::endl;        // cout.operator << (c1) or operator << (cout, c1)
                                                    // 전자는 라이브러리를 건드려야 하므로 후자인 전역 함수 형태로 중복 함수로 코드 작성
    std::cout << "c2 : " << c2 << std::endl;
    std::cout << "c3 : " << c3 << std::endl;
    std::cout << "c4 : " << c4 << std::endl;
    std::cout << "c5 : " << c5 << std::endl;
}