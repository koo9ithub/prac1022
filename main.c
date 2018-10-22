#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r;
	float pi;
    float area;
	
	r = 10.0;
	pi = 3.141592;
	area = pi*r*r;
	
	printf("area is: %f\n", area);
	
	return 0;
}
