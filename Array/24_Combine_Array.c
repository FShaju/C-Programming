/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int n,m, i, j, k;

    printf("Enter array size: ");
    scanf("%d %d", &n,&m);

    int num_set1[n]; 
    int num_set2[m];
    int num_set[n+m];
    

    printf("Enter elements first array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num_set1[i]);
    }
    

    printf("Enter elements second array:\n");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &num_set2[i]);
    }
    
    i=j=k=0;
   
   while(i<n && j<m)
   {
        if(num_set1[i] < num_set2[j])
        {
            num_set[k++]=num_set1[i++];
        }
            
        else
        {
            num_set[k++]=num_set2[j++];
        }    
        
    }
    
    while(i<n)
    {
        num_set[k++]=num_set1[i++];
    }
    
    while(j<m)
    {
        num_set[k++]=num_set2[j++];
    }
    
    printf("Combined array:\n");
    for(i = 0; i < k; i++)
    {
        printf("%d ", num_set[i]);
    }


    return 0;
}

