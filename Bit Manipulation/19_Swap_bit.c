
#include <stdio.h>

int main()
{
    int p1,p2,p,n, np_mask,num_dif;
    
    printf("Enter first integer: ");
    scanf("%d", &p1);
    printf("Enter second integer: ");
    scanf("%d", &p2);
    printf("Enter starting bit position (0-31): ");
    scanf("%d", &p);
    printf("Enter number of bits to swap (n): ");
    scanf("%d", &n);
    
    np_mask= ((1<<n)-1)<<p;
    num_dif=(p1^p2) &np_mask;
   
    p1=p1^num_dif;
    p2=p2^num_dif;
    
    printf("number after swap %d %d \n",p1,p2);

    return 0;
}
