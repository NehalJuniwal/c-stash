#include <stdio.h>

int main() {
    char char1, char2, char3;

    // Input the three characters
    printf("Enter 3 characters of your choice: ");
    scanf(" %c %c %c", &char1, &char2, &char3);

    // Display the characters in reverse order
    printf("The characters in reverse order are: %c%c%c\n", char3, char2, char1);

    return 0;
}
