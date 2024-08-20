#define QUEUESIZE 100

int queue[QUEUESIZE];
int front;
int rear;

void push(int data) {
	queue[rear] = data;
	rear++;
}

int pop(void) {
	int i = front;
	++front;
	return queue[i]; 
}
