#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char name[50];
    int num1, num2, correctAnswer, username;
    int score = 0;
    int questionnumber = 1;

    srand(time(0));

    printf("=== WELCOME TO MATH MAFIA===\n");

    printf("enter your name , player :");
    scanf("%s", name);
    
    printf("WELCOME!!%s LETS SEE IF YOU CAN WIN THIS CHALLAGE.\n ");
    printf("RULE: Give 3 Corrent Answer To Win The Game!!\n\n");
    printf("LETS START THE GAME\n\n");

    while (score<3)
    {
        num1 = (rand() %20) + 1;
        num2 =(rand() %20) + 1;

        int sign_choice= (rand() % 3);
        int useranswer;
        if(sign_choice == 1)
        {
        correctAnswer = num1 + num2;

        printf("Question %d: What is %d + %d? \n",questionnumber,num1,num2);
        }
        else if (sign_choice == 2)
        {
            if (num1 < num2) {
                int temp = num1; num1 = num2; num2 = temp;
        }
            correctAnswer = num1 - num2;
            printf("Question %d: What is %d - %d? \n", questionnumber, num1, num2);
        }
        else // MULTIPLY (sign_choice == 3)
        {
            correctAnswer = num1 * num2;
            printf("Question %d: What is %d * %d? \n", questionnumber, num1, num2);
        }
        
        printf("%s's Answer : ",name);
        scanf("%d", &useranswer);

        if (useranswer == correctAnswer)
        {
            score++;
            printf("CORRECT!!!  GOOD JOB %s!! Current score: %d\n\n", name, score);

        }
        else
        {
            printf("WRONG!!!  THE CORRECT ANSWER IS: %d. Next question!\n\n", correctAnswer);

        }
        questionnumber++;

    }

    printf(" CONGRATULATIONS %s!!! You are the ultimate MATH MAFIA!! \n", name);

    return 0;



}