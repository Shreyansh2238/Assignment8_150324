#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;  // Pointer to the start of the array
    int *end = arr + size - 1;  // Pointer to the end of the array
    
    // Swap elements pointed by start and end pointers until they meet in the middle
    while (start < end) {
        // Swap elements
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Move pointers to the next elements
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    reverseArray(arr, size);
    
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
