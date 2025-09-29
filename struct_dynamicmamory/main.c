/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct data{
    int *p;
    int size;
}d;
int main()
{
    int *p=NULL;
    d.size=5;
    int i=0;
    
    d.p= (int *)malloc(sizeof(int)*d.size);
    printf("%ld\n",sizeof(struct data));
    
    if (d.p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter an array elements:");
    for(i=0;i<d.size;i++)
    {
        scanf("%d",&d.p[i]); 
    }
    
   for(i=0;i<d.size;i++)
    {
        printf("%d\t",d.p[i]); 
    } 
    
    free(d.p);
    d.p = NULL;
    return 0;
}
