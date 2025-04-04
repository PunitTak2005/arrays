#include <stdio.h>

int main() {
    int n, i, max, min;
    
    // Taking input for array size
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input elements into the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element
    max = min = arr[0];

    // Loop through array to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }

    // Printing the results
    printf("\nMaximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
