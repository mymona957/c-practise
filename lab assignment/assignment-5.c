#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter a num to sum of even num:\n");
	scanf("%d",&num);
	for(i=0;i<=num;i+=2){
		sum+=1;
	}
	printf("the sum of even num: %d\n",sum);
}
