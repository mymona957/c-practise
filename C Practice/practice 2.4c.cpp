#include<stdio.h>
int main()
{
	int num,rev_num = 0, remainder;
	
	printf("enter the number to reverse: ");
	
	scanf("%d", &num);
	
	while(num!= 0){
		
		remainder = num % 10;
		
		num= num/10;
	}
	
	printf("the reversed number is :%d/n", rev_num);
	if(rev_num==num){
		
		printf("numbers are equel");
		
	}
	else{
		
		          printf("number are not equal");
		          
		          
		          
	}
	
	return 0;
}
