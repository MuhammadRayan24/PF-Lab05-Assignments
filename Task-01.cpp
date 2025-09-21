#include<stdio.h>
int main ()
{
	char ch;
	printf ("Enter the color (R,Y,G):");
	scanf ("%c", &ch);
	if (ch=='R')
	 {
	 printf("\n Red:Stop");
	 }
	 else 
	 {
	  if(ch=='Y')
	  {	
	  printf("\n Yellow:Caution");
	  }
	  else 
       {
     	if (ch=='G')
     	{
     	printf("\n Green:Go");
	    }
	    else 
	    {
	    	printf("\n Invalid Input!");	
		}
       }
     }
	 return 0;
}
