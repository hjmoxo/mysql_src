#include <stdio.h>

int fl(void) {
	return 100;
}

void f2(int *p) {
	*p = 200;
}

int main(void) {
	int re;
	re = fl();
	printf("re: %d\n", re);
	
	f2(&re);
	printf("re: %d\n", re);
	
	return 0;
}
