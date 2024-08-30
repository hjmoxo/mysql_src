#ifndef BOUNDARY_ARRAY_H
#define BOUNDARY_sARRAY_H
#include "safeArray.h"

template <typename T>

class BoundaryArray : public SafeArray<T> {
private:
    int low_;

public:
    //BoundaryArray();
    explicit BoundaryArray(int size = Array<T>::ARRAYSIZE); // 디폴트 생성자 
    BoundaryArray(int low, int high);
    BoundaryArray(const T *pArr, int size, int low);
    // 복사 생성자, 소멸자는 기본 제공 사용(소멸자는 virual 넣어야하는데 안해도 상관 x)

    bool operator==(const BoundaryArray<T>& rhs) const;

    T& operator[](int index);
    const T& operator[](int index) const;

    int lower() const;
    int upper() const; 

};

template <typename T>
BoundaryArray<T>::BoundaryArray(int size) 
: SafeArray<T>(size)
{
    low_ = 0;
}


template <typename T>
BoundaryArray<T>::BoundaryArray(int low, int high) 
: SafeArray<T>(high - low + 1)
{
    low_ = low;
}


template <typename T>
BoundaryArray<T>::BoundaryArray(const T *pArr, int size, int low) 
: SafeArray<T>(pArr, size)
{
    low_ = low;
}

template <typename T>
bool BoundaryArray<T>::operator==(const BoundaryArray<T>& rhs) const
{
    return this->SafeArray<T>::operator==( (SafeArray<T>)rhs );
}

template <typename T>
T& BoundaryArray<T>::operator[](int index) 
{
    return this->SafeArray<T>::operator[](index - low_);
}

template <typename T>
const T& BoundaryArray<T>::operator[](int index) const
{
    return this->SafeArray<T>::operator[](index - low_);
}

template <typename T>
int BoundaryArray<T>::lower() const 
{
    return low_;
}

template <typename T>
int BoundaryArray<T>::upper() const
{
    return low_ + this->Array<T>::size_ - 1;
}

#endif