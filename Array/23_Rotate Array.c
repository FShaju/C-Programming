/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n,m,q=0;
    int i, j,temp;

    printf("Enter array size: ");
    scanf("%d", &m);

    int num_set[m]; 
    
    printf("Number of times to rotate: ");
    scanf("%d", &n);
    
    printf("direction of rotation 0 for left, 1 for right: ");
    scanf("%d", &q);
    

    printf("Enter elements in array:\n");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &num_set[i]);
    }
    
    if (q==1)
    {
        for(i=0;i<n;i++)
        {
            temp = num_set[m-1];
            for (j=m-1; j>0 ;j--)
            {
                num_set[j]=num_set[j-1];
            }
            num_set[0]=temp;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            temp = num_set[0];
            for (j=0; j<m-1 ;j++)
            {
                num_set[j]=num_set[j+1];
            }
            num_set[m-1]=temp;
        }
    }
    
    
   
   
    
    printf("Rotated array array:\n");
    for(i = 0; i < m; i++)
    {
        printf("%d ", num_set[i]);
    }


    return 0;
}

