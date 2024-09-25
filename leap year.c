#include<stdio.h>

#include<math.h>

int main() {

int y;

printf("enter the year"); 
scanf("%d", &y);

if (y % 4==0 && y % 100!=0 || y % 400==0)
printf("it is a leap year");

else

printf("it is not a leap year"); }