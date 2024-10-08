#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int num, prime = 1; 

    printf("Please enter a number: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("양의 정수를 입력하세요.\n");
    }
    else {
        if (num <= 1) {
            prime = 0; 
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime) {
            printf("It is a prime number.\n");
        }
        else {
            printf("It is not a prime number.\n");
        }
    }

    return 0;
}

