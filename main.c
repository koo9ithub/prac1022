#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i1;
	int i2;
	
	printf("Input two integers: ");
	scanf("%d %d", &i1, &i2);
	
	printf("+ result is %d\n", i1+i2);
	printf("- result is %d\n", i1-i2);
	printf("* result is %d\n", i1*i2);
	printf("/ result is %d\n", i1/i2);
	printf("%% result is %d\n", i1%i2);
	
	
	return 0;
}
