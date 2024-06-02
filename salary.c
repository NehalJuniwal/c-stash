#include <stdio.h>

int main() {
    float basicSalary, HRA, DA, PF, grossSalary, netSalary;

    // Input the basic salary
    printf("Enter the Basic Salary of the Employee: ");
    scanf("%f", &basicSalary);

    // Calculate HRA, DA, and PF
    HRA = 0.20 * basicSalary;
    DA = 0.10 * basicSalary;
    PF = 0.05 * basicSalary;

    // Calculate Gross Salary
    grossSalary = basicSalary + HRA + DA;

    // Calculate Net Salary
    netSalary = grossSalary - PF;

    // Display the results
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", HRA);
    printf("DA: %.2f\n", DA);
    printf("PF: %.2f\n", PF);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
