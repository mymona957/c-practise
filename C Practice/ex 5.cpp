#include<stdio.h>
int main()
{
	int num,sum,a1,a2,a3,a4,a5,a,b,c,d,e;
	printf("enter the num:");
	scanf("%d",&num);
	
	
	a=num/10;
	a5=num%10;
	b=a/10;
	a4=a%10;
	c=b/10;
	a3=b%10;
	d=c/10;
	a2=c%10;
	e=d/10;
	a1=d%10;
	sum=a1+a2+a3+4+a5;
	
	printf("reverse order: ");
	
	printf("sum:%d",sum);
	
	return 0;
	
	
}
