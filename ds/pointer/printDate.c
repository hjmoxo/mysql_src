#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} Date;

void printDate(Date d) {
	printf("%d. %d. %d\n", d.year, d.month, d.day);
}

void printDate2(Date *pd){
	//printf("*pd: %d. %d. %d\n", (*pd).year, (*pd).month, (*pd).day);
	printf("*pd: %d. %d. %d\n", pd->year, pd->month, pd->day);
} 

int main(void) {
	Date today = {2024, 8, 20};
	
	printDate(today);
	printDate2(&today);
	
	return 0;
}
