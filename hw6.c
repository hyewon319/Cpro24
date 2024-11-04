#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[50];
	printf("Please input five integers: ");
	scanf("%d", &arr);
	
	is_primeNum(arr);

	printf("Odd numbers: %d", );
	printf("Even numbers: %d", );
}

int is_primeNum(num) {
	int prime = 1;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			prime = 0;
			break;
		}
		else return is_primeNum;
	}
}

