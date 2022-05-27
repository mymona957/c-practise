#include<stdio.h>
int main()
{
	int num,sum,a,b,c,d,c1,c2,c3,c4;
	
	printf("enter the num:");
	scanf("%d",&num);
	
	a=num/10;
	c4=num%10;
	b=a/10;
	c3=a%10;
	c=b/10;
	c2=b%10;
	d=c/10;
	c1=c%10;
	
	
	sum=c1+c4;
	printf("sum of first %d and last digit % is %d",c1,c4,sum);
	
	return 0;
	
}
