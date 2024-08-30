#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Complex {
friend std::ostream& operator<< (std::ostream& out, const Complex& rhs);

private:  
    double re_;
    double im_;

public:
    Complex(double re = 0.0, double im = 0.0);

   
    Complex& operator+=(const Complex& rhs);

   const Complex operator+(const Complex& rhs);

    const Complex& operator++();       
    const Complex operator++(int );    

    bool operator==(const Complex& ths) const;
    bool operator!=(const Complex& ths) const;

    double real() const;
    double imag() const;

    void real(double re);
    void imag(double im);
   
};

#endif