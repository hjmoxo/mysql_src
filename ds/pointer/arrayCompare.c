#include <stdio.h>

int main(void) {
	int nums1[5] = {1, 2, 3, 4, 5};
	int nums2[5] = {1, 2, 3, 4, 5};
	int i;
	
	/* if (nums1 == nums2) {
		printf("nums1 and nums2 are equal\n");
	} else {
		printf("ums1 and nums2 are not equal\n");
	} */
	
	for (i=0; i<5; i++) {
		if (nums1[i] != nums2[i]) {
			break;
		}
	}
	
	if (i==5) {
		printf("nums1 and nums2 are equal\n");
	} else { 
		printf("nums1 and nums2 are not equal\n");
	}
	
	return 0;
}
