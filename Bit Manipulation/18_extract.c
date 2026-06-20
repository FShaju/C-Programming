
#include <stdio.h>

int main()
{
    int p1,p2,p,n, np_mask,num_dif;
    
    printf("Enter first integer: ");
    scanf("%d", &p1);
    printf("Enter starting bit position (0-31): ");
    scanf("%d", &p);
    printf("Enter number of bits to swap (n): ");
    scanf("%d", &n);
    
    
    np_mask= ((1<<n)-1)<<p;
  
    p2=(p1&np_mask)>>p;
    
    printf("Number extracted %d \n",p2);
    printf("Orginal number %d \n",p1);

    return 0;
}
