#include <stdio.h>

int main() {
	int num;
	int nums[5] = {1, 2, 3, 4, 5};
	
	int *p;
	p = &num;
	*p = 100;
	
	p = &nums[1];
	*p = 7;
	
	printf("num: %d\n", num);
	
	printf("nums: ");
	for(int i=0; i<5; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
	
	return 0;
}
