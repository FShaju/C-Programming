
#include <stdio.h>

int main()
{
    int i=0,j=0;
    char str[100];
    char str1[100];
    
    printf("Enter the string: ");
    
    scanf("%[^\n]", str);
    
    while(str[i]!='\0')
    {
        if (!(str[i]==' '&& str[i+1]==' '))
        {
            str1[j]=str[i];
            j++;
        }
        i++;

    }
    str[j]='\0';
   
   printf(" Edited string: %s",str1);
   
    return 0;
}
