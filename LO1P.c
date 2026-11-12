#include <stdio.h>

int main() {
	
	int myNum[] = {-3, -1, 7, 0, 9};
	int length = sizeof(myNum) / sizeof(myNum[0]);
	int i;
	
	for (i = 0; i < length; i++) {
		if (myNum[i] < 0) {
			continue;
		}
		if (myNum[i] == 0) {
			break;
		}
		printf("%d\n", myNum[i]);
	}
	return 0;
}
