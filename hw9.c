#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convert(char* arr1, char* arr2) {
    int i;
    for(i = 0; arr1[i] != '\0'; i++) {
        if (arr1[i] >= 'A' && arr1[i] <= 'Z') {
            arr2[i] = arr1[i] + 32;  // 아스키코드에서 간격은 다 동일
        }
        else if (arr1[i] >= 'a' && arr1[i] <= 'z') {
            arr2[i] = arr1[i] - 32;
        }
        else arr2[i] = arr1[i];
    }
    arr2[i] = '\0';
}

int main() {
    char arr1[100];
    char arr2[100];
    scanf("%s", arr1);
    printf("arr1: %s\n", arr1);
    convert(arr1, arr2);
    printf("arr2: %s\n", arr2);
    return 0;
}