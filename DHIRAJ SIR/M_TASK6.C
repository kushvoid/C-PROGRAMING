/*
		Author:kush
		DOC:27 October 2026
		Objective:To scan and print 10 numbers
			  using function without return type without
			  argument
*/
#include<stdio.h>
/////#include<conio.h>
int sum();
int main()
{
	////clrscr();
	sum();
	////getch();
}
int sum()
{
	int a,b,c,d,e,f,g,h,i,j;
	int add;
	printf("\nEnter value : ");
	scanf("%d",&a);
	printf("\nEnter value : ");
	scanf("%d",&b);
	printf("\nEnter value : ");
	scanf("%d",&c);
	printf("\nEnter value : ");
	scanf("%d",&d);
	printf("\nEnter value : ");
	scanf("%d",&e);
	printf("\nEnter value : ");
	scanf("%d",&f);
	printf("\nEnter value : ");
	scanf("%d",&g);
	printf("\nEnter value : ");
	scanf("%d",&h);
	printf("\nEnter value : ");
	scanf("%d",&i);
	printf("\nEnter value : ");
	scanf("%d",&j);

	add=a+b+c+d+e+f+g+h+i+j;
	printf("\nAdditon of given numbers = %d",add);
}
