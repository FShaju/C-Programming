/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n, i, j, temp,sum, count =0;

    printf("Enter array size: ");
    scanf("%d", &n);
    
    printf("Enter Targeted sum: ");
    scanf("%d", &sum);

    int num_set[n]; 
    

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num_set[i]);
    }

   
    for(i = 0; i < n-1; i++)
    {
        for(j =i+1; j < n; j++)
        {
            if((num_set[i] + num_set[j])==sum)
            {
                printf ("%d %d \n", num_set[i],num_set[j]);
                count++;
            }
        }
    }
    
    if (count==0)
    {
        printf("No valid matching");
    }

    return 0;
}

