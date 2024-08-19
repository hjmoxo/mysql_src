#include "stack.h"

void initStack(Stack *ps) {
	ps->tos = 0;
}

void push(Stack *ps, int data){
	ps->array[ps->tos] = data;
	++ps->tos;
}

int pop(Stack *ps){ 
	--ps->tos;
	return ps->array[ps->tos];
}

