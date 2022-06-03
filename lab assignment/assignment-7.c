#include <stdio.h>

int main()
{
	int i,n,sum=0;
	
	printf("enter the num :");
	scanf("%d",&n);
	printf("the even num is :");
	for(i=1;i<=n;i++)
	{
		printf("%d ",2*i);
		sum+=2*i;
	}
	printf("the sum of even natural num %d : %d \n",n,sum);
}
