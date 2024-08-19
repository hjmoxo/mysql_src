#include <stdio.h>
#define STACKSIZE 100

int stack[STACKSIZE];
int tos;		//top of stack(index)

void push(int data){
	stack[tos] = data;
	++tos;
}

int pop(void){
	--tos;
	
	// int re;
	// re = stack[tos];
	// return re;
	
	return stack[tos];

}

int main(void) {
	
	push(100);
	push(200);
	push(300);
	
	int re = pop();
	printf("lst pop(): %d\n", re);
	
	printf("2rd pop(): %d\n", pop());
	printf("3rd pop(): %d\n", pop());
	
	return 0;
}
