#ifndef STACK_H
#define STACK_H

class Stack {
private:
	int *pArr;
	int size;
	int tos;

public:
	Stack(int size);	// --> constructor(생성자)
	~Stack();		// --> destructor(소멸자)

	void push(int data);
	int pop();

};

#endif
