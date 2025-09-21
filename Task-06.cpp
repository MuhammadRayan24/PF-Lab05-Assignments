#include<stdio.h>
int main ()
{
	int a , b;
	printf("\n Enter first number:");
	scanf("%d", &a);
	printf("\n Enter second number:");
	scanf("%d", &b);
	a>b? printf("\n First number is maximum"): printf("\n Second number is maximum");
	return 0;
}

