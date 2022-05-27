#include<stdio.h>
int main()
{
/*	int num,sum,a1,a2,a3,a4,a5,a,b,c,d,e;
	printf("enter the num:");
	scanf("%d",&num);
	
	
	a=num/10;
	a5=num%10;
	b=num/10;
	a4=num%10;
	c=num/10;
	a3=num%10;
	d=num/10;
	a2=num%10;
	e=num/10;
	a1=num%10;
	sum=a1+a2+a3+a4+a5;
	
	printf("reverse order: ");
	
	printf("sum:%d",sum);
	
	return 0;*/

	int number,sum,a,b,c,d,e,d1,d2,d3,d4,d5;
	printf("Enter the 5 digit number: ");
	scanf("%d",&number);
	a=number/10;
	d5=number%10;
	b=a/10;
	d4=a%10;
	c=b/10;
	d3=b%10;
	d=c/10;
	d2=c%10;
	e=d/10;
	d1=d%10;
	sum=d1+d2+d3+d4+d5;
	printf("Sum:%d",sum);
	return 0;
}
