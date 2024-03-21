#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *firstString, *secondString, *concatenatedString;
    int len1, len2;

    printf("Enter the length of the first string: ");
    scanf("%d", &len1);
    getchar(); // Consume newline character left in the buffer

    printf("Enter the first string: ");
    firstString = (char *)malloc((len1 + 1) * sizeof(char)); // +1 for null terminator
    fgets(firstString, len1 + 1, stdin);
    firstString[strcspn(firstString, "\n")] = '\0'; // remove trailing newline

    printf("Enter the length of the second string: ");
    scanf("%d", &len2);
    getchar(); // Consume newline character left in the buffer

    printf("Enter the second string: ");
    secondString = (char *)malloc((len2 + 1) * sizeof(char)); // +1 for null terminator
    fgets(secondString, len2 + 1, stdin);
    secondString[strcspn(secondString, "\n")] = '\0'; // remove trailing newline

    // Allocate memory for concatenated string
    concatenatedString = (char *)malloc((len1 + len2 + 1) * sizeof(char)); // +1 for null terminator

    // Concatenate the strings
    strcpy(concatenatedString, firstString);
    strcat(concatenatedString, secondString);

    printf("Concatenated string: %s\n", concatenatedString);

    // Free dynamically allocated memory
    free(firstString);
    free(secondString);
    free(concatenatedString);

    return 0;
}
