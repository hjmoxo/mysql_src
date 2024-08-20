#define STACKSIZE 100

static int stack[STACKSIZE];
static int tos;		//top of stack(index)

void push(int data){ 	//func. definition (라고도 불림)
	stack[tos] = data;
	++tos;
}

int pop(void){
	--tos;
	return stack[tos];

}
