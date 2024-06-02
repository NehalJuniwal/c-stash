#include <stdio.h>

int main() {
    int totalMinutes, hours, minutes;

    // Input the total flying time in minutes
    printf("Enter Flying time from Hyderabad to Singapore in minutes: ");
    scanf("%d", &totalMinutes);

    // Calculate hours and minutes
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;

    // Display the result
    printf("Flying time is %d hours and %d minutes.\n", hours, minutes);

    return 0;
}
