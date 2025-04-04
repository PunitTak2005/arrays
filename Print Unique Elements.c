#include <stdio.h>

int main() {
    int n, i, j, isUnique;

    // Asking the user for the number of elements
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements into the array
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Print unique elements
    printf("\nThe unique elements found in the array are:\n");
    for(i = 0; i < n; i++) {
        isUnique = 1; // Assume element is unique

        // Check if arr[i] appears elsewhere in the array
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) { // If duplicate found
                isUnique = 0;
                break;
            }
        }

        if(isUnique) {
            printf("%d ", arr[i]); // Print
