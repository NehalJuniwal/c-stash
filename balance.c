//progran to read the balance amount to be paid to the customer
#include <stdio.h>
int main()
{
    int p1 , p2 , returnamt;
    p1 = p2 = returnamt = 0;

    //input
    printf("Enter the Total Bill Amount:");
    scanf("%d", & p1);

    printf("Enter the amount paid by the Customer:");
    scanf("%d", & p2);

    //process
    returnamt = p2 - p1;

    //output
    printf("Balance amount to be returned is:%d\n",returnamt);

    return 0;
}
