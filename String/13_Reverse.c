
#include <stdio.h>
#include <string.h>

int main()
{
    int i,x;
    char temp;
    char str[100];
    
    printf("Enter the string: ");
    
    scanf("%[^\n]", str);
    
    x=strlen(str);
    
    for (i=0; i<x/2;i++)
    {
        temp = str[i];
        str[i]=str[x-1-i];
        str[x-1-i]=temp;
    }
    
    printf("Reversed String: %s",&str);
    return 0;
}
