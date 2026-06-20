
#include <stdio.h>

float num1,num2,result,result1;
char oper;

float Arith_Operation (float num1, float num2, char oper);


int main()
{

    printf("Input first integer:");
    scanf("%f",&num1);
    
    printf("Input second integer:");
    scanf("%f",&num2);
    
    printf("Enter the opertaion:");
    scanf(" %c",&oper);
    
    result1 = Arith_Operation (num1,num2,oper);
    
    if (oper == '/' && num2 == 0) 
    {
        printf("Error: Division by zero is undefined.\n");
    } 
    else 
    {
        printf("Result: %.2f\n", result);
    }
    return 0;
}

float Arith_Operation (float num1, float num2, char oper)
{
    switch(oper)
    {
        case'+':
        {
            result=num1+num2;
            return result;
        }
        case'-':
        {
            result=num1-num2;
            return result;
        }
        case'*':
        {
            result=num1*num2;
            return result;
        }
        case'/':
        {
            result=num1/num2;
            return result;
        }

        default:
            printf("Invalid Operator!\n");
            return 0;
    }
}
