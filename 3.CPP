#include<stdio.h>
#include<conio.h>

void main(){
int count=0;
int n;
clrscr();
printf("enter the number: ");
scanf("%d",&n);
do{n/=10;++count;
}while(n!=0);
   printf("enter the digit:%d",count);
getch();
}