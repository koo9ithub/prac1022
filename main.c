#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float i1;
	float i2;
	float f;
	
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%f", &i1);
	
	printf("�и� �Է��ϼ���: ");
	scanf("%f", &i2);
	
	f = i1/i2;
	printf("�������� �����? %.4f", f); 
	
	return 0;
}
