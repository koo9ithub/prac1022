#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float i1;
	float i2;
	float f;
	
	printf("분자를 입력하세요: ");
	scanf("%f", &i1);
	
	printf("분모를 입력하세요: ");
	scanf("%f", &i2);
	
	f = i1/i2;
	printf("나누기의 결과는? %.4f", f); 
	
	return 0;
}
