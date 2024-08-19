#define STACKSIZE 100

int stack[STACKSIZE];
int tos;		//top of stack(index)

void push(int data){ 	//func. definition (라고도 불림)
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
