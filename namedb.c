// Program to read name, date of birth and mobile number
#include <stdio.h>
int main()
{
    char name[30] , dob, mobile;

    //input
    printf("Enter your Name:");
    scanf("%[^\n]", &name);

    printf("Enter your DOB:");
    fflush(stdin);
    scanf("%[^\n]", &dob);

    printf("Enter your Mobile number:");
    fflush(stdin);
    scanf("%[^\n]", &mobile);

    //output
    printf("Name:%s\n",name);
    printf("DOB:%s\n",dob);
    printf("Mobile:%s\n",mobile);

    return 0;
}
