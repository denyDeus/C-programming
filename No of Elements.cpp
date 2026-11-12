#include <stdio.h>

int main() {
	
	int myNum[] = {10, 25, 50, 75, 100};
	int length = sizeof(myNum) / sizeof(myNum[0]);
	
	printf("%d", length);
}
