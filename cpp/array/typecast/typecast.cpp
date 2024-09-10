#include <iostream>

int main() {

    //int i = (int)0.9999;

    int i = static_cast<int>(0.9999);

    std::cout << "i: " << i << std::endl;

    return 0;

}