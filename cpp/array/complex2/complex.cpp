#include "complex.h"

Complex::Complex() {
    this->re = 0.0;
    this->im = 0.0;
}

Complex::Complex(double re) {
    this->re = re;
    this->im = 0.0;
}

Complex::Complex(double re, double im) {
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex &rc){
    this->re = rc.re;
    this->im = rc.im;
}

Complex::~Complex() {

}

/*int Complex::operator==(Complex c) {
    return this->re == c.re && this->im == c.im;
}

int Complex::operator==(const Complex *pc) {
    return this->re == pc->re && this->im == pc->im;
}*/

bool Complex::operator==(const Complex &rc) {
    return this->re == rc.re && this->im == rc.im;
}

void Complex::operator=(const Complex &rc){
    this->re = rc.re;
    this->im = rc.im;
}

double Complex::real() {
    return this->re;
}

double Complex::imag() {
    return this->im;
}

void Complex::real(double re) {
    this->re = re;
}

void Complex::imag(double im) {
    this->im = im;
}