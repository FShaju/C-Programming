
#include <stdio.h>


int main()
{

    int num,arr[100],arr1[100],i=0;
    
    printf("Input first integer:");
    scanf("%d",&num);
    
    int temp_num=num;
    
    while(temp_num>0)
    {
        
        int digit=temp_num%10;
        
        
        int already_counted = 0; 
        for (int k = 0; k < i; k++) 
        {
            if (arr[k] == digit) 
            {
                already_counted = 1; 
                break;
            }
        }
        
    
        if (already_counted) 
        {
            temp_num = temp_num / 10;
            continue; 
        }
        
        
        int count=0;
        int temp_num1=num;
        
        while(temp_num1>0)
        {
            int digit1=temp_num1%10;
            if(digit==digit1)
            {
                count++;
            }
            temp_num1 = temp_num1/10;
        }
        arr[i]=digit;
        arr1[i]=count;
        i++;
        
        temp_num = temp_num /10;
    }
    
    for(int j=0; j<i;j++)
    {
        printf (" %d counted %d times \n",arr[j],arr1[j]);
    }

    return 0;
}
