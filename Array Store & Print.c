#include <stdio.h>

int main() {
    int arr[10]; // Declare an array of size 10
    int i;

    // Input elements in the array
    printf("Input 10 elements in the array:\n");
    for(i = 0; i < 10; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Display elements of the array
    printf("Elements in array are: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
