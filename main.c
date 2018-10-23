#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("Input the number: ");
	scanf("%d", &number);
	
	switch (number)
	{
		case 0:
			printf("없음.\n");
			break;
			
		case 1:
			printf("one.\n");
			break;
			
		case 2:
			printf("two.\n");
			break;
			
		default:
			printf("많음.\n");
			break;		
	}
	
	return 0;
}
