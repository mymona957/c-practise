#include<stdio.h>
int main()
{
	float fahrenheit,centigrade;
	
	printf("enter thmperature of city in fahrenheit:");
	scanf("%f",&fahrenheit);
	centigrade=(5.0/9.0)*(fahrenheit-32);
	printf("temperature:%f",centigrade);
	
	return 0;
}
