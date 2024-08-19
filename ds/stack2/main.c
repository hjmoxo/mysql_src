#include <stdio.h>
#include "stack.h"

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

