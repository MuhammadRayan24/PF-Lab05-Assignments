#include<stdio.h>
int main ()
{
	int a=0;
	printf("\n Enter a number:");
	scanf("%d", &a);
	if (a%3==0 && a%5==0)
	printf("\n Number %d is divisible by both 3 and 5",a);
	else 
	printf("\n Number %d is not divisible by both 3 and 5",a);
	return 0;
}
