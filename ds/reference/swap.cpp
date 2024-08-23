#include <iostream>

void swap(int &ra, int &rb){

    int tmp = ra;
    ra = rb;
    rb = tmp;

}

int main() {
    int a, b;
    a = 100;
    b = 200;

    swap(a, b);

    std::cout << "a: " << a << "\t" << "b: " << std::endl;

    return 0;
}