#include<stdio.h>
#include<conio.h>

void main(){
int n,sum=0;
int firstdigit,lastdigit;
clrscr();
printf("enter the number: ");
scanf("%d",&n);
lastdigit=n%10;

 while(n>=10){n=n/10;}

 firstdigit=n;

sum=firstdigit+lastdigit;

printf("sum firstdigit and lastdigit %d",sum);
getch();
}