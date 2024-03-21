#include <stdio.h>
#include <stdlib.h>

void findDuplicates(int *nums, int n) {
    // Allocate memory for an array to keep track of occurrences
    int *occurrences = (int *)calloc(n + 1, sizeof(int));
    if (occurrences == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Traverse the nums array and update the occurrences
    for (int i = 0; i < n + 1; i++) {
        occurrences[nums[i]]++;
    }

    // Print numbers that occur more than once
    printf("Numbers occurring more than once: ");
    for (int i = 1; i <= n; i++) {
        if (occurrences[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    // Free dynamically allocated memory
    free(occurrences);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 3}; // Example array with duplicates
    int n = sizeof(nums) / sizeof(nums[0]) - 1;  // n + 1 integers in nums array

    findDuplicates(nums, n);

    return 0;
}
