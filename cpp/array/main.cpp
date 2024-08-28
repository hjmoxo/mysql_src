#include <iostream>
#include "array.h"

int main() {

    Array arr1;     // Array arr1(100);
    //Array arr2 = 10; int 타입이 배열(10) 형태로 바뀌는건 뭔가 이상함 오잉 
    Array arr2(10);

    int nums[] = { 1, 2, 3, 4, 5 };
    Array arr3(nums, 5);

    const Array arr4 = arr3;

    arr1 = arr3;

    if (arr1 == arr3) {
        std::cout << "arr1 and arr3 are equal" << std::endl;
    } else {
        std::cout << "arr1 and arr3 are not equal" << std::endl;
    }

    for(int i=0; i<arr1.size(); i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    for(int i=0; i<arr1.size(); i++) {
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}