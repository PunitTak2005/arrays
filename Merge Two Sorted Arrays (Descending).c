#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int merged[], int n) {
    int i, j, temp;
    
    // Merging both arrays into merged[]
    for (i = 0; i < n; i++) {
        merged[i] = arr1[i];
        merged[i + n] = arr2[i];
    }

    // Sorting the merged array in descending order using Bubble Sort
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1 - i; j++) {
            if (merged[j] < merged[j + 1]) { // Swap if next element is larger
                temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    
    // Input size of both arrays
    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2 * n]; // Arrays declaration

    // Input elements into the first array
    printf("Input %d elements in the first array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Input elements into the second array
    printf("Input the number of elements to be stored in the second array: %d\n", n);
    printf("Input %d elements in the second array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr2[i]);
    }

    // Merging and sorting in descending order
    mergeArrays(arr1, arr2, merged, n);

    // Printing the merged sorted array
    printf("\nThe merged array in descending order is:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
