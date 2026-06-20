/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n,i, j,k=0,count;

    printf("Enter array size: ");
    scanf("%d", &n);

    int num_set[n];
    int New_set[n]; 


    printf("Enter elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num_set[i]);
    }

   
    for(j=0;j<n;j++)
    {
        count=0;
        for(i=j+1; i<n;i++)
        
        {
            if (num_set[j]==num_set[i])
            {
                 count++;
            }
        }
        
        if (count==0)
        {
            New_set[k++]=num_set[j];
        }
    }
    printf("New array:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", New_set[i]);
    }


    return 0;
}

