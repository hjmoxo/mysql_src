#include <iostream>
#include <vector>
#include <string>

int main() 
{
    std::vector<std::string> lower, upper;

    std::string s;
    while(std::cin >> s) {
        if(isUpper(s)) {
            upper.push_back(s);
        } else {
            lower.push_back(s);
        }
    }

    // print low

    // print upper 

    return 0;
}