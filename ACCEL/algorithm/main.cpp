#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::vector<int> vec = { 3, 1, 2, 3, 4, 2, 2, 5 };

    // cbegin(), cend() 의 c는 바꾸지 않겠다의 const 
    std::vector<int>::iterator it = remove(vec.begin(), vec.end(), 3);
    vec.erase(it, vec.end()); // 뒤쪽에 땡겨온 애들 삭제 잊지말기! 

    copy(vec.cbegin(), vec.cend(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}