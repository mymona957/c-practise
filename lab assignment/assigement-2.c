#include<stdio.h>
int main()
{
	int num,i,sum=0,aver;
	printf("enter 10 num to sum and aver:\n");
	
	
	for(i=1;1<=10;i++){
	   scanf("%d",&num);
	   sum+=num;
	}
	aver=sum/10;
	printf("the sum of ten num is: %d\n",sum);
	printf("aver of sum of ten num is: %d\n",aver);

	   
	   
}
