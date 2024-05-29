
//program to calvulate bill amount
#include<stdio.h>

int main()
{
    int p1,p2,billamount;
    p1=p2=billamount=0;

    //input
    printf("Enter the quantity of rice in bag in kgs:");
    scanf("%d",&p1);

    printf("Enter the price of rice per quantity in Rs:");
    scanf("%d",&p2);


    //process
    billamount=p1*p2;


    //output
    printf("Total bill amount is: %d\n",billamount);
    return 0;
}
