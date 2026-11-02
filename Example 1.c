#include <stdio.h>

int main() {
	
	int myNumber[] = {3, -1, 7, 0, 9};
	int length = sizeof(myNumber) / sizeof(myNumber[0]);
	int i;
	
	for (i = 0; i < length; i++) {
		if (myNumber[i] < 0) {
			continue;
		}
		if (myNumber[i] == 0) {
			break;
		}
		printf("%d\n", myNumber[i]);
	}
	return 0;
}
