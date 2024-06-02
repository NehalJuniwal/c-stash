//Total & Average of 5 subjects

#include<stdio.h>
main()
{
    int e,s,m,p,c;
    float tot,avg;

    printf("Enter English Marks:");
    scanf("%d",&e);

    printf("Enter Sanskrit Marks:");
    scanf("%d",&s);

    printf("Enter Maths Marks:");
    scanf("%d",&m);

    printf("Enter Physics Marks:");
    scanf("%d",&p);

    printf("Enter Chemistry Marks:");
    scanf("%d",&c);

    tot = e + s + m + p + c;
    avg = tot / 5;

    printf("\nTotal Marks: %f",tot);
    printf("\nAverage Marks: %f %%",avg);
}
