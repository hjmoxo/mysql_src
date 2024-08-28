#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "array.h"

class Stack {
private:
    static const int STACKSIZE;

    // int *pArr_;
	// int size_;
    Array arr_;     //'has-a'
	int tos_;

    Stack(const Stack& ); 
    Stack& operator=(const Stack& );

public:
    explicit Stack(int size = STACKSIZE);
	// ~Stack();

    void push(int data);
	int pop();

    bool isFull() const;
    bool isEmpty() const;

};

#endif