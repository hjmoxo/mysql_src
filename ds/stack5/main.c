#include <stdio.h>
#include "stack.h"

int main(){
	Stack s1, s2;

	initStack(&s1, 10, sizeof(int));
	initStack(&s2, 100, sizeof(double));
	
	int i;
	i = 100;	push(&s1, &i, sizeof(int));
	i = 200; 	push(&s1, &i, sizeof(int));
	i = 300; 	push(&s1, &i, sizeof(int));
	
	int re;
	pop(&s1, &re, sizeof(int)); 	printf("s1 1st pop(): %d\n", re);
	pop(&s1, &re, sizeof(int)); 	printf("s1 2st pop(): %d\n", re);
	pop(&s1, &re, sizeof(int));	printf("s1 3st pop(): %d\n", re);
	
	double d;
	d = 1.1;	push(&s2, &d, sizeof(double));
	d = 2.2;	push(&s2, &d, sizeof(double));
	d = 3.3;	push(&s2, &d, sizeof(double));
	
	double re2;
	pop(&s2, &re2, sizeof(double));	printf("s2 1st pop(): %f\n", re2);
	pop(&s2, &re2, sizeof(double));	printf("s2 2st pop(): %f\n", re2);
	pop(&s2, &re2, sizeof(double));	printf("s2 3st pop(): %f\n", re2);
	
	cleanupStack(&s1);
	cleanupStack(&s2);

	return 0;
}

	
