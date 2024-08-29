#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "array.h"

template <typename T>

class Stack {
private:
    static const int STACKSIZE;

    Array arr_;     
	T tos_;

    Stack(const Stack& ); 
    Stack& operator=(const Stack& );

public:
    explicit Stack<T>(int size = STACKSIZE);

    void push(int data);
	int pop();

    bool isFull() const;
    bool isEmpty() const;

};

//cpp
#include <cassert>

template <typename T>
const int Stack<T>::STACKSIZE = 100;

template <typename T>
Stack<T>::Stack(int size) 
: arr_(size), tos_(0)
{

}

template <typename T>
void Stack<T>::push(int data) { 
	
	assert(!isFull());

	arr_[tos_] = data;
	++tos_;

}

template <typename T>
int Stack<T>::pop() { 
	
	assert(!isEmpty());

	--tos_;
	return arr_[tos_];

}

template <typename T>
bool Stack<T>::isFull() const {
	return tos_ == arr_.size();
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return tos_ == 0;
}


#endif