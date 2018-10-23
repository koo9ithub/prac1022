#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int square(int n) {
		return (n*n);
	}
	
	int n;
	
	printf("Input a number: ");
	scanf("%i", &n);
	
	printf("square function: %d", square(n));
	
	return 0;
}
