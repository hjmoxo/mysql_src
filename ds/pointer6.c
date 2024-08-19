#include <stdio.h>

int main() {
	int a = 100;
	double b = 3.14;
	
	
	void *p;
	p = &a;
	
	p = &b;
	
	printf("a: %d\n", a);
	printf("b: %f\n", b);

	return 0;
}
