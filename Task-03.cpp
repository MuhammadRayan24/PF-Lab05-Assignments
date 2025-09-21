#include<stdio.h>
int main ()
{
	int year=0;
	printf("\n Enter the year:");
	scanf("%d", &year);
	if (year%4==0)
	printf("\n Entered year is a leap year");
	else 
	printf("\n Entered year is not a leap year");
	return 0;
}
