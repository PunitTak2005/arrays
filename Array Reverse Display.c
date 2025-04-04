#include <stdio.h>

int main() {
    int n, i;

    // Asking the user for number of elements
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Input %d number of elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nThe values stored into the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Display the array in reverse order
    printf("\nThe values stored into the array in reverse are:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
