//Program to swap values of two variables A and B

#include <stdio.h>

int main()
{
    //variable declaration and initalization
    int a,b;
    a=b=0;

    //Reading input
    printf("Enter Value for A:");
    scanf("%d",&a);

    printf("Enter Value for B:");
    scanf("%d",&b);

    //Process or Logic
    a = a + b;
    b = a - b;
    a = a - b;

    //Output
    printf("\nA is:%d",a);
    printf("\nB is:%d",b);

    return 0;
}
