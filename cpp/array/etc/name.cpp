#include <iostream>
#include <string>

int main() {

    std::string name;   //띄어쓰기는 못받음 
    
    std::cin >> name;

    std::cout << "hello, " << name << std::endl;

    return 0;
}