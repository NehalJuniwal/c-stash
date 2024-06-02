#include <stdio.h>

int main() {
    int totalDays, years, months, weeks, days;

    // Input the total number of days
    printf("Enter No of Days: ");
    scanf("%d", &totalDays);

    // Calculate years, months, weeks, and days
    years = totalDays / 365;
    totalDays = totalDays % 365;

    months = totalDays / 30;
    totalDays = totalDays % 30;

    weeks = totalDays / 7;
    days = totalDays % 7;

    // Display the results
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
