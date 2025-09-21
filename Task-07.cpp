#include<stdio.h>
int main ()
{
	int a;
	printf("\n Enter the rating from (1 to 5) of movie The Lion King :");
	scanf("%d", &a);
	printf("\n User Feedback:");
	if (a==5)
	printf("\n Excellent! ");
	else if (a==4)
	printf("\n Good! ");
	else if (a==3)
	printf("\n Average! ");
	else if (a==2)
	printf("\n Poor! ");
	else if (a==1)
	printf("\n Terrible! ");
	else 
	printf("\n Oops! Can not give feedback as input is invalid");
	return 0;
}
