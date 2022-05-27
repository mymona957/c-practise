#include<stdio.h>
int main()
{
	
	int first_angel,secound_angel,third_angel,sum;
	
	sum=first_angel+secound_angel+third_angel;
	
	printf("enter first side of traingle:");
	scanf("%d",&first_angel);
	
	printf("enter secound side of traingle:");
	scanf("%d",&secound_angel);
	
	printf("enter third side of traingle:");
	scanf("%d",&third_angel);
	
	
	if(sum==180){
		
		printf("triangle is vaild");
		
	}
	else{
		
		  
		    printf("triangle is invaild");
		    
	}
	
	
	return 0;
		
	
}
