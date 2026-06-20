
#include <stdio.h>

int main()
{
    int i,p1,p2,p,n,stat_bit,mask, bit1,bit2;
    
    printf("Enter first integer: ");
    scanf("%d", &p1);
    printf("Enter second integer: ");
    scanf("%d", &p2);
    printf("Enter starting bit position (0-31): ");
    scanf("%d", &p);
    printf("Enter number of bits to swap (n): ");
    scanf("%d", &n);
    
    for (i=0; i<n;i++)
    {
        stat_bit = p+i;
        
        mask=(1<<stat_bit);
        
        bit1= (p1 >>stat_bit) &1;
        bit2= (p2 >>stat_bit) &1;
        
        if (bit1!=bit2)
        {
            p1=p1^mask;
            p2=p2^mask;
        }
        
    }
    
    printf("number after swap %d %d \n",p1,p2);

    return 0;
}
