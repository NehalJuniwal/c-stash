#include <stdio.h>

int main() {
    char fullname[100], gender, native[100];

    // Input the full name
    printf("Enter your Full Name: ");
    scanf("%[^\n]", &fullname);

    // Input the gender
    printf("Enter your Gender (M/F): ");
    scanf(" %c", &gender);


    // Input the native place
    printf("Enter your Native Place: ");
    fflush(stdin);
    scanf("%[^\n]", &native);


    // Display the output
    printf("%s - %c - %s\n", fullname, gender, native);

    return 0;
}

