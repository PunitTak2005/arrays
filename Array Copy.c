#include <stdio.h>

int main() {
    int n, i;

    // Asking the user for number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n]; // Declare two arrays of size n

    // Input elements into the first array
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Display elements of the first array
    printf("\nThe elements stored in the first array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    // Display elements of the second array
    printf("\nThe elements copied into the second array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\n");
    return 0;
}
