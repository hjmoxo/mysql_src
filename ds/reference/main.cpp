#include <iostream>

int main() {

    int a = 100;
    int &ra = a;

    ra = 200;

    std::cout <<"a: " << a << std::endl;

    return 0;
}