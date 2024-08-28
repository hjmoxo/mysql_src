//#include <cstdio>
#include <iostream>
#include "stack.h"

int main(){
	Stack s1(10), s2(100);
	//s1.initStack(10);
	//s2.initStack(100);
	
	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	//printf("s1 1st pop(): %d\n", s1.pop());
	std::cout << "s1 1st pop: ";
	std::cout << s1.pop();
	std::cout << "\n";

	std::cout << "s1 2nd pop(): " << s1.pop() << std::endl;
	std::cout << "s1 3nd pop(): " << s1.pop() << std::endl;

	//printf("s1 2st pop(): %d\n", s1.pop());
	//printf("s1 3st pop(): %d\n", s1.pop());
	
	s2.push(500);
	s2.push(600);
	s2.push(700);
	
	//printf("s2 1st pop(): %d\n", s2.pop());
	std::cout << "s2 1nd pop(): " << s2.pop() << std::endl;
	std::cout << "s2 1nd pop(): " << s2.pop() << std::endl;
	std::cout << "s2 1nd pop(): " << s2.pop() << std::endl;
	//printf("s2 2st pop(): %d\n", s2.pop());
	//printf("s2 3st pop(): %d\n", s2.pop());
	
	//s1.cleanupStack();
	//s2.cleanupStack();

	return 0;
}

	
