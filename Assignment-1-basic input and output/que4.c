#include<stdio.h>
#include<conio.h>
int main()
{
int r;
float area;
    printf("Enter radius of the circle");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("circle with radius %d,area is %f",r,area);
    getch();
    return 0;
}