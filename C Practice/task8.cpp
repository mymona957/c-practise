# include<stdio.h>
int main()
{
	int num,sum,a1,a2,a3,a4,a5,a,b,c,d,e;
	
	printf("enter the num:");
	scanf("%d",&num);
	
	a=num/100;
	a5=num%100;
	b=num/100;
	a4=num%100;
	c=num/100;
	a3=num%100;
	d=num/100;
	a2=num%100;
	e=num/100;
	a1=num%100;
	sum=a1+a2+a3+a4+a5;
	
	printf("reverse order:");
	
	printf("%d\t %d\t %d\t %d\t %d\t",a5,a4,a3,a2,a1);
	
	return 0;
}
