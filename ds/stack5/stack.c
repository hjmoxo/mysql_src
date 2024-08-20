#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "stack.h"

void initStack(Stack *ps, int size) {
	ps->pArr = malloc(sizeof(int) * size);
	ps->size = size;
	ps->tos = 0;
}

void cleanupStack(Stack *ps) {
	free(ps->pArr);
}

void push(Stack *ps, int data){

	assert(ps->tos != ps->size);
	
	memcpy(	(unsigned char *)ps->pArr+ps->eleSize * pss->tos, pData,
	ps->eleSize);
	++ps->tos;
}

void pop(Stack *ps, int *pResult){ 
	
	assert(ps->tos != 0);
	
	--ps->tos;
	memcpy(pResult, (unsigned char *)ps->pArr + ps->eleSize *ps->tos, 
	ps->eleSize);
}

