#include<stdio.h>
int main ()
{
   char name[50];
   int age;
   float height;
   printf("enter your name:");
   scanf("%s",name);
   printf ("enter your age:");
   
   scanf("%d",&age);
   printf ("enter your height:");
   scanf ("%f", &height);
   printf("\nmy name is:%s", name);
   printf("\nmy age is:%d",age);
   printf("\nmy hight is:%.1f",height);
   

   return 0;

}