
#include <stdio.h>

int main()
{
    int i=0;
    char str[100];
    
    printf("Enter the string: ");
    
    scanf("%[^\n]", str);
    
    while(str[i]!='\0')
    {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
        i++;
    }
   
   printf(" Edited string: %s",str);
   
    return 0;
}
