#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
friend std::ostream& operator<< (std::ostream& out, const Complex& rhs);

private:  
    double re_;
    double im_;

public:
    //Complex();     
    //Complex(double re);
    Complex(double re = 0.0, double im = 0.0);

    //+=, -=, *=, /=  O 
    Complex& operator+=(const Complex& rhs);
    //Complex& operator-=(const Complex& rhs);
    //Complex& operator*=(const Complex& rhs);
    //Complex& operator/=(const Complex& rhs);
    // %= X    
    // &=, |=, ^=, <<=, >>= X
   
    //+, -, *, / O        
   const Complex operator+(const Complex& rhs);
    //const Complex operator-(const Complex& rhs);
    //const Complex operator*(const Complex& rhs);
    //const Complex operator/(const Complex& rhs);
    // %X
   
    const Complex& operator++();       //prefix
    const Complex operator++(int );    //postfix
    // ++, -- X
    
    bool operator==(const Complex& ths) const;
    bool operator!=(const Complex& ths) const;
    //bool operator>(const Complex& ths) const;
    //bool operator<(const Complex& ths) const;
    //bool operator<=(const Complex& ths) const;
    //bool operator>=(const Complex& ths) const;
    //==, !=, >, <, >=, <=  O
   
    // && || !  X


    double real() const;
    double imag() const;

    void real(double re);
    void imag(double im);
   
};

#endif