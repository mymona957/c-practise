#include <stdio.h>
int main()
{
    int sub_1,sub_2,sub_3,sub_4,sub_5,aggregate;
    float percentage;
    printf("enter the num of sub 1:");
    scanf("%d",&sub_1);
    printf("enter the num of sub 2:");
    scanf("%d",&sub_2);
    printf("enter the num of sub 3:");
    scanf("%d",&sub_3);
    printf("enter the num of sub 4:");
    scanf("%d",&sub_4);
    printf("enter the num of sub 5:");
    scanf("%d",&sub_5);
    
    
    aggregate=sub_1+sub_2+sub_3+sub_4+sub_5;
    percentage=aggregate*(100.00/500.00);
    
    
    printf("aggregate mark obtain by student=5d\n",aggregate);
    printf("percentage of student=%.2f",percentage);
    
    return 0;
}
    
    
    
