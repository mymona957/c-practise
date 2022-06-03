#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,flag;
	printf("the prime num are 1 to 200 : \n",i);
	for(i=1;i<200;i+=2){
		flag=0;
		
		
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=0;
				break;
			}
			
		  else{
			flag=1;
		}
		
	}
	if(flag==1){
		printf("%d ",i);
	}
	
  }

}
