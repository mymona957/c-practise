#include<stdio.h>
int main()
{
	int amount,ten,fifty,hundred; 
	
	printf("enter the amount to be withdraw:");
	scanf("%d",&amount);
	
	ten=amount/10;
	fifty=amount/10;
	hundred=amount/10;
	
	printf("the cashiar will give ten notes=%d\n fifty notes=%d\n hundred notes=%d\n",ten,fifty,hundred);
	
	return 0;

	
}
