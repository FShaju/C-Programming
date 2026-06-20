
#include <stdio.h>

int main()
{
    int i,count, Missing_alpa =0;
    char j;
    char str[100];
    
    printf("Enter the string: ");
    
    scanf("%[^\n]", &str);
    
    
    for (j='A'; j<='Z';j++)
    {
        i=0;
        count=0;
        while(str[i]!='\0')
        {
            
            
            if (str[i]==j ||str[i]==j+32)
            {
                count=1;
                break;
            }
            i++;
        }
        
        if (count==0)
        {
            Missing_alpa = 1;
            break;
        }
    }
    
    if (Missing_alpa ==1)
    {
        printf("The string is not pangram");
    }
    else
    {
        printf("The string is pangram");
    }
    return 0;
}
