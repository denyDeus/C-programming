#include <stdio.h>

int main() {
	int x = 10;
	int y = 3;
	
	printf("%d\n", x + y); //Addition
	printf("%d\n", x - y); //Substratcion
	printf("%d\n", x * y); //Multiplication
	printf("%d\n", x / y); //Division
	printf("%d\n", x % y); //Modulus
	
	int z = 5;
	++z;
	printf("%d\n", z);
	
	--z;
	printf("%d\n", z);
}
