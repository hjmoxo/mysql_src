#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double re;
    double im;

public:
    Complex();                      // defaul tconstruct.(기본 생성자)
    Complex(double re);             // convert construct.(변환 생성자)
    Complex(double re, double im);
    Complex(const Complex &rc);     // copy construct (복사 생성자)
    ~Complex();

    //int operator==(Complex c);
    //int operator==(const Complex *pc);
    bool operator==(const Complex &rc);

    void operator=(const Complex &rc);

    double real();
    double imag();

    void real(double re);
    void imag(double imag);

};

#endif