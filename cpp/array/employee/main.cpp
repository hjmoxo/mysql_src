#include "employee.h"

int main() {

    const Employee e1(1, "Park Jung Seok", NULL);
    const Employee e2(2, "Sung Young Ho", &e1);
    const Employee e3(3, "Cho Min Sung", &e1);
    const Employee e4(4, "Park Jung Hun", &e3);
    const Employee e5(5, "Kang Min Su", &e3);
    const Employee e6(6, "Lee Jin Min", &e3);

    // Employee e; 직원수인데 디폴트 생성자 의미 X
    // Employee e7 = e1; 직원수인데 복사 생성자 의미 X
    // e1 = e2; 직원인데 대입(치환) 연산자 의미 X 

    std::cout << e1 << std::endl;
    std::cout << e2 << std::endl;
    std::cout << e3 << std::endl;
    std::cout << e4 << std::endl;
    std::cout << e5 << std::endl;
    std::cout << e6 << std::endl;

    return 0;
}