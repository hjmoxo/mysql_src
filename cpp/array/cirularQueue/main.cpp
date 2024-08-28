#include <iostream>
#include "queue.h"

int main(void)
{
	Queue q1(10), q2(100);

	q1.push(100);
	q1.push(200);
	q1.push(300);


	std::cout << "q1 1st pop(): " << q1.pop() << std::endl;
	std::cout << "q1 1st pop(): " << q1.pop() << std::endl;	
	std::cout << "q1 1st pop(): " << q1.pop() << std::endl;		

	q2.push(900);
	q2.push(800);
	q2.push(700);	

	std::cout << "q2 1st pop(): " << q2.pop() << std::endl;		
	std::cout << "q2 1st pop(): " << q2.pop() << std::endl;		
	std::cout << "q2 1st pop(): " << q2.pop() << std::endl;		

	return 0;
}

