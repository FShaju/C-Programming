
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i,x=0,temp=0,num=0,leng=0;
    char str[100];
    
    printf("Enter the Interger: ");
    
    scanf("%d",&num);
    
    leng = num;
    
    while (leng !=0)
    {
        leng=leng/10;
        x++;
    }
    
    for (i=0; i<x;i++)
    {
        temp =num%10;
        num = num/10;
        
        str[x-1-i]=temp+'0';
    }
    str[x] = '\0';
    
    printf(" String :%s",str);
    
    return 0;
}
