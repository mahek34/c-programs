#include<stdio.h>
int main(){
   char name[50];
    int age;
    char city[50];
    float marks;
    int roll_no;
    printf("enter your name :");
    scanf("%s",name);
    printf("enter your age :");
    scanf("%d",&age);
    printf("enter your city :");
    scanf("%s",city);
    printf("enter your marks:");
    scanf("%f",&marks);
    printf("enter your roll no. :");
    scanf("%d",&roll_no);

    printf("\nmy name is :%s",name);
    printf("\nmy age is :%d",age);
    printf("\ni am from :%s",city);
    printf("\nmy marks:%.1f",marks);
    printf("\nmy roll no. :%d",roll_no);

    return 0;

}



