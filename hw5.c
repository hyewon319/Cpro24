#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeBinary(int num) {
	if (num > 1) {
		changeBinary(num / 2);
	}
	printf("%d", num % 2);
	}


int main(){
		int num = 0;
		printf("Please enter a number: ");
		scanf("%d", &num);
		changeBinary(num);
	}