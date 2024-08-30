#ifndef ARRAY_H
#define ARRAY_H

template <typename T> // 얘를 헤더에 다 붙임
class Array { // 클래스 이름, 생성자, 소멸자 등에는 <T> 사용하면 X
private:
    T *pArr_; // 받는 형식 int를 T로 변함

protected:
    static const int ARRAYSIZE;

    int size_;

public:
    static int getArraySize();
    
    //Array(); size 디폴트 값 100
    explicit Array(int size = ARRAYSIZE); //explicit 명시적인
    Array(const T *pArr, int size);
    Array(const Array<T>& rhs);
    virtual ~Array();

    Array<T>& operator=(const Array<T>& rhs);
    
    bool operator==(const Array<T>& rhs) const;

    virtual T& operator[](int index);
    virtual const T& operator[](int index) const;

    int size() const;

};

#include <cassert> // cpp에 있던 코드를 h로 옮김 

template <typename T>
const int Array<T>::ARRAYSIZE = 100;

template <typename T>
int Array<T>::getArraySize() 
{
    return Array<T>::ARRAYSIZE;    
}

template <typename T>
Array<T>::Array(int size) 
: pArr_(new T[size]), size_(size)
{
    assert(pArr_ );
}

template <typename T>
Array<T>::Array(const T *pArr, int size) 
: pArr_(new T[size]), size_(size) 
{
    assert(pArr_ );
  
    for(int i=0; i<size; ++i) {
        pArr_[i] = pArr[i];
    }
}

template <typename T>
Array<T>::Array(const Array<T>& rhs) 
: pArr_(new T[rhs.size_]), size_(rhs.size_)
{
    assert(pArr_ );

    for(int i=0; i<rhs.size_; i++) {
        pArr_[i] = rhs.pArr_[i];
    }
}

template <typename T>
Array<T>::~Array() {
    delete [] pArr_;    
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
    
    if(this != &rhs) {
        delete [] pArr_;
        pArr_ = new T[rhs.size_];
        assert(pArr_ );
        size_ = rhs.size_;

        for(int i=0; i<rhs.size_; ++i) {
            pArr_[i] = rhs.pArr_[i];
        }

    }

    return *this;

}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const {

    if(size_ != rhs.size_) 
        return false;
    
    int i;
    for(i=0; i<rhs.size_; ++i) {
        if(pArr_[i] != rhs.pArr_[i]) 
            break;
    }

    return (i == rhs.size_);
}

template <typename T>
T& Array<T>::operator[](int index) {
    return pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const {
    return pArr_[index];
}


template <typename T>
int Array<T>::size() const {
    return size_;
}


#endif