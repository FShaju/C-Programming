
#include <stdio.h>

int perfect_num(int num);

int num, quotient, count=0;

int main()
{
    printf("Input  integer:");
    scanf("%d",&num);

    int result = perfect_num(num);

    if(result ==num)
    {
        printf("Number is perfect number");  
    }
    else
    {
        printf("Number is not perfect number");   
    }
    return 0;
}

int perfect_num (int num)
{
    for(int i=1;i<num;i++)
    {
        quotient = num%i;
        if(quotient==0)
        {
          count=count+i; 
        }
    }
    
    return count;
}
