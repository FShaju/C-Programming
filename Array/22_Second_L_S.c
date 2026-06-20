/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n,i,Ltemp1,Ltemp2,Stemp1,Stemp2;

    printf("Enter array size: ");
    scanf("%d", &n);

    int num_set[n]; 
 

    printf("Enter array: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num_set[i]);
    }
    
   if(num_set[0] > num_set[1])
    {
        Ltemp1 = num_set[0];
        Ltemp2 = num_set[1];
    
        Stemp1 = num_set[1];
        Stemp2 = num_set[0];
    }
    else
    {
        Ltemp1 = num_set[1];
        Ltemp2 = num_set[0];
    
        Stemp1 = num_set[0];
        Stemp2 = num_set[1];
    }
    
    for(i=2;i<n;i++)
        {
            
            if (num_set[i] > Ltemp1)
            {
              Ltemp2 =Ltemp1;
              Ltemp1 = num_set[i];
            }
            else if (num_set[i] > Ltemp2)
            {
              Ltemp2 = num_set[i];
            }
            
            if (num_set[i] < Stemp1)
            {
              Stemp2 =Stemp1;
              Stemp1 = num_set[i];
            }
            else if (num_set[i] < Stemp2)
            {
              Stemp2 = num_set[i];
            }
        }
    
    printf("Second largest number: %d \n",Ltemp2);
    printf("Second smallest number: %d",Stemp2);
    

    return 0;
}

