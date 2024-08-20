#ifndef STACK_H
#define STACK_H
#define STACKSIZE 100

typedef struct {
	int *pArr;
	int size;
	int tos;
} Stack;

void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);

void push(Stack *ps, void *pData, int eleSize);
void pop(Stack *ps, void *pResult, int eleSize);
// int pop(Stack *ps);

#endif
