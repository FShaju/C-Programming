
#include <stdio.h>
#include <string.h>

int main()
{
    int i,x,count=0;
    char temp;
    char str[100];
    
    printf("Enter the string: ");
    
    scanf("%[^\n]", str);
    
    x=strlen(str);
    
    for (i=0; i<x/2;i++)
    {
        if (str[i]!=str[x-1-i])
        {
            count++;
        }
    }
    
    if (count==0)
    {
        printf("Number is Palindrome :");
    }
    else
    {
        printf("Number is not Palindrome :");   
    }

    return 0;
}
