/*
		AuthoR:-KUSH
		DOC:27 October 2026
		Objective:To scan and print 4 numbers
			  using function with return type with argument
*/
#include<stdio.h>
////#include<conio.h>
int sum(int a,int b,int c,int d);
int main()
{
	int a,b,c,d,addition;
	////clrscr();
	printf("\nEnter value of a : ");
	scanf("%d",&a);
	printf("\nEnter value of b : ");
	scanf("%d",&b);
	printf("\nEnter value of c : ");
	scanf("%d",&c);
	printf("\nEnter value of d : ");
	scanf("%d",&d);

	addition=sum(a,b,c,d);
	printf("\nSum of All Numbers = %d",addition);
	////getch();
}
int sum(int x,int y,int z,int w)
{
	int s;
	s = x+y+z+w;
	return s;
}
