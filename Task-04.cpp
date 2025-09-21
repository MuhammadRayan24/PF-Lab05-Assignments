#include<stdio.h>
int main ()
{
	int amount=0 , limit=500;
	printf("\n Enter the withdrawal amount:");
	scanf("%d", &amount);
	
	if (amount<=limit && amount%20==0)
	{
	printf("\n Withdrawal approved!");
    }
	else 
	printf("\n Withdrawal denied!");
	return 0;
}
