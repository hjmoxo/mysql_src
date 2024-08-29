#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

class Array {
private:
    // static const int ARRAYSIZE;
    
    int *pArr_;
    // int size_;

protected:
    static const int ARRAYSIZE;

    int size_;

public:
    static int getArraySize();
    
    //Array(); size 디폴트 값 100
    explicit Array(int size = ARRAYSIZE); //explicit 명시적인
    Array(const int *pArr, int size);
    Array(const Array& rhs);
    virtual ~Array();

    Array& operator=(const Array& rhs);
    
    bool operator==(const Array& rhs) const;

    virtual int& operator[](int index);
    virtual const int& operator[](int index) const;

    int size() const;

};

#endif