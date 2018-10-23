#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=1;
	
	while (i<3)
	{
		printf("%i 번째 반복중.\n", i);
		i++;
	}
	
	printf("실행종료.");
	
	return 0;
}
