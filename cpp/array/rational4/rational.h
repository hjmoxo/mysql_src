#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational {
friend std::ostream& operator<<(std::ostream& out, const Rational& rhs); 

private:
    int num_;
    int den_;

    void reduce(); //helper func. tool func

public:
    
    //Rational();
    //Rational(int num);
    Rational(int num=0, int den=1);
    //Rational() { } X /생성자가 있으면 디폴트 생성자는 안생김 
    //Rational(const Rational& rhs) { /* membarwise copy*/ }
    //~Rational(){ }

    //Rational* operator&() { return *this; }
    //const Rational* operator&() const { return this; }

    //Rational& operator=(const Rational& rhs) { /* memverwise copy */ return *this }

    Rational& operator+=(const Rational& rhs);

    bool operator==(const Rational& rhs) const;
    bool operator!=(const Rational& rhs) const;

    const Rational operator+(const Rational& rhs) const;

    const Rational& operator++();
    const Rational operator++(int );


    int getNum() const;
    int getDen() const;

    void setNum(int num);
    void setDen(int den);

};

#endif