#include <stdio.h>

int main() {
    int arr1[6] = { 1, 2, 3, 4, 5, 6 };
    int arr2[6] = { 7, 8, 9, 10, 11, 12 };

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    printf("arr1\n: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    printf("arr2\n: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    for (int i = 0; i < 6; i++) {
        int temp = ptr1[i];
        ptr1[i] = ptr2[i];
        ptr2[i] = temp;
    }

    printf("\nafter swap\n");

    printf("arr1\n: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr1[i]);
    }
    printf("\n");

    printf("arr2\n: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");

    return 0;
}
