#include <stdio.h>

int main() {
	int a;
	int *pa;
	int **ppa;
	
	a=100;
	pa=&a;
	**ppa=&pa;
	
	**ppa = 100;
	
	printf("a: %d\n", a);

	return 0;
}
