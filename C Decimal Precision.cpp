#include <stdio.h>

int main() {
	float myFloatNum = 3.5;
	
	printf("%f\n", myFloatNum); //Default 6 diguts
	
	printf("%.1f\n", myFloatNum); //only show 1 digit
	printf("%.2f\n", myFloatNum); //only show 2 digits
	printf("%.4f\n", myFloatNum); //only show 4 digits
}
