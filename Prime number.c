#include <stdio.h>
void primenumber(int n);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	primenumber(n);
	return 0;
}
void primenumber(int n)
{
	int i,j;
	int z=0;
	for(i=2;i<=n/2;i++)
		{
			j=n%i;
		if(j==0)
		{
			z=1;
			break;	
		}
		}
		if(z==1)
		{
			printf("%d is not a prime number",n);
		}
	    else
	    {
	    	printf(" %d is a prime number",n);
		}
	
}
