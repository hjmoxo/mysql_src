#include <stdio.h>

int main() {
	int a = 0x123456789;
	//int *p;
	char *p;
	
	//p = (char *)&a;
	//p = static_cast<char *>(&a);
	p = reinterpret_cast<char *>(&a);

	printf("*p: 0x%d\n", *p);

	return 0;
}
