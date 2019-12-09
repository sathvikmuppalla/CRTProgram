#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\n enter a number");
	scanf("\%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		printf("\n%d",i);
		sum=sum+1;
	}
if (sum==n)
	printf("\n perfect number");
else
	printf("\n not a perfect number");
}
