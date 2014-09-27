#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  int t,n,h,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n); //Not storing the value for future use
		h=1; //Initial height is 1m
		j=0; 
		while(j!=n) //until required growth cycle is reached
		{
			(j%2==0)?(h*=2):(h+=1); //j%2==0 corresponds to monsoon and the latter to summer
			j++;
		}
		printf("%d\n",h);
	}
  return 0;
}
