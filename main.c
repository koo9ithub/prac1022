#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	float f;
	
	printf("Input an integer: ");
	scanf("%d", &i);
	
	printf("Input a float: ");
	scanf("%f", &f);
	
	printf("integer: %d, float: %.2f", i, f);
	
	return 0;
}
