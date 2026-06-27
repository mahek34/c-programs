#include<stdio.h>
int main()
{
    int number;

    printf("enter your number :");
    scanf("%d", &number);

    if(number % 2==0)
    {
        printf ("the number is even!!");
    }
    else
    {
        printf("tne number is odd!!");
    }

    return 0;


}

