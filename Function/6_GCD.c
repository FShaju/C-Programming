
#include <stdio.h>

int recursive_gcd(int num1, int num2);

int main()
{

    int num1,num2;
    
    printf("Input first integer:");
    scanf("%d",&num1);
    
    printf("Input first integer:");
    scanf("%d",&num2);
    
    if (num2>num1)
    {
        int temp=num2;
        num2=num1;
        num1=temp;
    }
    
    int gcd = recursive_gcd(num1, num2);
    
    printf("GCD is: %d",gcd);
 
   
    return 0;
}

int recursive_gcd(int num1, int num2)
{
    int rem = num1 % num2;
        
    if (rem == 0)
    {
        return num2;
    }
        
    return recursive_gcd(num2, rem);
}
