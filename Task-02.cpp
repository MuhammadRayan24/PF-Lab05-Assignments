#include<stdio.h>
int main ()
{
	int a=0;
	printf("\n Enter the age:");
	scanf ("%d", &a);
    if (a>=0 && a<=11)
    {
    	printf("\n Person is a child!");
	}
	else 
	{
		if (a>=12 && a<=18)
		{
			printf("\n Person is a teenager!");
		}
		else 
		{
			if (a>=19 && a<=50)
			{
			printf("\n Person is an adult!");
		    }
		    else 
		    {
		     if (a>=51)
			 {
				printf("\n Person is a senior!");
			 }
			 else 
			 {
			 	printf("\n Invalid age entered!");
			 }
 			}
		}
	}
	return 0;
}
