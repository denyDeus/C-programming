#include <stdio.h>

int main() {
	
	int myNum[] = {25, 50, 75, 100};
	
	int length = sizeof(myNum) / sizeof(myNum[0]);
	int i;
	
	for (i = 0; i < length; i++) {
		printf("%d\n", myNum[i]);	
	}
}
