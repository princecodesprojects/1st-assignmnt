#include<stdio.h>
#include<conio.h>
int main()
{
    char userName;
    printf("Enter user name");
    scanf("%c",&userName);
    printf("\"%c\"",userName);
    getch();
    return 0;
}