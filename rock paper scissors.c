#include<stdio.h>
#include<conio.h>
int main()
{
    char contestant1[10],contestant2[10];
    int in1,in2;
    printf("ROCK PAPER AND SCISSORS \nEnter the name of contestant1:\n ");
    scanf("%s",&contestant1);
    printf("Enter the name of contestant2\n ");
    scanf("%s",&contestant2);
    
    printf("%s and %s Here is the instructions\nClick 1 for stone\nClick 2 for paper\nClick 3 for scissors\n\n",contestant1,contestant2);
    printf("So start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",contestant1);
    scanf("%d",&in1);
    printf("%s is it STONE 1, PAPER 2 OR SCISSORS 3\n",contestant2);
    scanf("%d",&in2);

    if ((in1==1 && in2==1) || (in1==2 && in2==2) || (in1==3 && in2==3))
    printf("Neither %s nor %s won, it is a draw",contestant1,contestant2);

    else if ((in1==1 && in2==3) || (in1==3 && in2==2) || (in1==1 && in2==3)|| (in1==2 && in2==1) || (in1==3 && in2==2) || (in1==1 && in2==3))
    printf("Congrats %s! You won!!!!",contestant1);

    else if ((in1==1 && in2==2) || (in1==3 && in2==1) || (in1==1 && in2==2)|| (in1==2 && in2==3))
    printf("Congrats %s! You won!!!!",contestant2);
    return 0;
}