/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n, i, j, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    int num_set[n];   

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num_set[i]);
    }

   
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(num_set[j] > num_set[j + 1])
            {
                temp = num_set[j];
                num_set[j] = num_set[j + 1];
                num_set[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", num_set[i]);
        printf(" ");
    }

    return 0;
}

