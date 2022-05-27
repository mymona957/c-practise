#include<stdio.h>
int main()
{
	int num,sum,a,b,c,d,e,b1,b2,b3,b4,b5;
	
	printf("enter the num: ");
	scanf("%d",&num);
	
	a=num/10;
	b5=num%10;
	b=a/10;
	b4=a%10;
	c=b/10;
	b3=b%10;
	d=c/10;
	b2=c%10;
	e=d/10;
	b1=d%10;
	sum=b1+b2+b3+b4+b5;
	
	printf("revrse order: ");
	printf("%d\t %d\t %d\t %d\t %d\t",b5,b4,b3,b2,b1);
	
	return 0;
}
