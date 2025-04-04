#include <stdio.h>

int main() {
    int n, i, j, count;
    
    // Taking input for the array size
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);

    int arr[n], freq[n]; // Declare arrays

    // Input elements into the array
    printf("Input %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array with -1
    }

    // Count the frequency of each element
    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark duplicate elements as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store count of unique elements
        }
    }

    // Printing frequencies
    printf("\nThe frequency of all elements in the array:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
