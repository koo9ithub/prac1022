#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int j;
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<10; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
