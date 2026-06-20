
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i,x,temp=0,num=0;
    char str[100];
    
    printf("Enter the string: ");
    
    scanf("%[^\n]", str);
    
    x=strlen(str);
    
    for (i=0; i<x;i++)
    {
         temp =str[i]-'0';

         
         if(temp<0 ||temp>9)
         {
             printf("\n Error: non character");
             return 1;
         }
         
        num = (num*10+temp);
    }
    
    printf(" Interger :%d",num);
    
    return 0;
}
