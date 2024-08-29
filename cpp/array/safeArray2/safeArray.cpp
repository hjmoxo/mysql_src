#include "safeArray.h"
#include <cassert>

// const int SafeArray::ARRAYSIZE = 100;

SafeArray::SafeArray(int size) 
: Array(size) //SafeArray를 사용할때 Array쪽에 있는 걸 호출해라 
{

}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& rhs) 
: Array( (Array)rhs )  // slicing
{
    
}


SafeArray::~SafeArray() 
{
    // Array::~Array() is automatically called
    // 자식에 디폴트가 있음 부모쪽에 있는 디폴트가 호출됨
}

SafeArray& SafeArray::operator=(const SafeArray& rhs) 
{    
    this->Array::operator=( (Array)rhs );
    return *this;
}

bool SafeArray::operator==(const SafeArray& rhs) const 
{
    return this->Array::operator==( (Array)rhs );
}

int& SafeArray::operator[](int index) 
{
    assert(index >= 0 && index < this->Array::size_ ); // 부모쪽에 있는 기능을 쓰면서 얘는 +a임 

    return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const 
{
    assert(index >= 0 && index < this->Array::size_ ); 

    return this->Array::operator[](index);
}

/*
int SafeArray::size() const 
{
    return size_;
}*/
