#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the 'c' value:");
scanf("%c",&c);
if(c>='a'&& c<='z'|| c>='A'&& c<='Z')
{
printf(" it is alphabet");
}
else
{
printf("it is not alphabet");
}
getch();
}
