#include "complex.h"
#include <iostream>
#include <ostream>

std::istream& operator>>(std::istream& in, Complex& rhs)
{
    double re = 0.0, im = 0.0;
    char c = 0;
    in >> c;
    if ( c == '(') {
        in >> re >> c;
        if( c == ',') {
            in >> im >> c;
        }
        if (c == 'i') {
            in >> c;
        }
        if (c!= ')') {
            in.clear(std::ios::failbit);
        }
    } else {
        in.putback(c);
        in >> re;
    }

    if(in) {
        rhs = Complex(re, im);
    }

    return in;  
}

std::ostream& operator << (std::ostream& out, const Complex& rhs){
   return  out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";
}

Complex::Complex(double re, double im) 
: re_(re), im_(im)  //constructor initalization list
{
    
    //re_ = re;    //this->re = re 멤버 함수의 this->는 생략 가능
    //im_ = im;    //앞에는 멤버변수 re 뒤의 re는 인자값으로 받은 re
}

Complex& Complex::operator+=(const Complex& rhs) {
    re_ += rhs.re_;
    im_ += rhs.im_;

    return *this;
}

bool Complex::operator==(const Complex& rhs) const {
    return re_ == rhs.re_ && im_ == rhs.im_;
}

bool Complex::operator!=(const Complex& rhs) const {
    return !this->operator==(rhs);
}

const Complex Complex::operator+(const Complex& rhs) {
    Complex result(re_ + rhs.re_, im_ + rhs.im_);

    return result;
}

const Complex& Complex::operator++() {
    re_ = re_ + 1;

    return *this;
}

const Complex Complex::operator++(int ) {
    Complex tmp = *this;

    re_ = re_+1;
    return tmp;
}

double Complex::real() const {
    return re_;
}

double Complex::imag() const {
    return im_;
}

void Complex::real(double re){
    re_ = re;
}

void Complex::imag(double im){
    im_ = im;
}

