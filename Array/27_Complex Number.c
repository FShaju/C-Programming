/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



struct complex {
    
    int real;
    int imaginary;
};

void print_sum (struct complex s1, struct complex s2);

void print_sum (struct complex s1, struct complex s2)
{
    int sum_real = s1.real+s2.real;
    int sum_imaginary = s1.imaginary + s2.imaginary;
    
    
    
    printf("sum of complex numbers: %d + %di", sum_real, sum_imaginary);
}

int main()
{
    
    struct complex s1, s2;
    
    printf (" Enter the two complex number:");
    scanf ("%d+%di", &s1.real, &s1.imaginary);
    
    printf("\n");
    
    printf (" Enter the two complex number:");
    scanf ("%d+%di", &s2.real, &s2.imaginary);
    
    printf("\n");
    
    print_sum (s1,s2);

    return 0;
}