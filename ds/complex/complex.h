#ifndef COMPLEX_H
#define COMPLEX_H  

class Complex {
private:
    // implementation
    double re;  
    double im;  

public:
    // interface
    Complex();              // funcgion overloading(함수 중복)
    Complex(double re);     // --> 'one-interface multi-tethod'
    Complex(double re, double im);
    ~Complex();

    double real();
    double imag();

    void real(double re);
    void imag(double im);

    // 

};

#endif