#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int year;
	
	printf("Input the year: ");
	scanf("%d", &year);
	
	printf("Is this year %d the leap year? %d\n", year, (year%4 == 0) && (year%100 != 0) || (year%400 == 0));
	printf("1 = true, 0 = false.");
	
	return 0;
}
