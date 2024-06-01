//program to read price of Iphone & Cover case and calculate the total bill
#include <stdio.h>
main()
{
    int p1, p2, totalbill;
    p1 = p2 = totalbill = 0;

    //input
    printf("Enter the price of Iphone:Rs");
    scanf("%d", &p1);

    printf("Enter the price of Cover case:Rs");
    fflush(stdin);
    scanf("%d", &p2);

    //process
    totalbill = p1 + p2;

    //output
    printf("Total Bill amount is:%d\n", totalbill);
}
