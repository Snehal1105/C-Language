/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10];
    int i,n,temp;
    
    printf("How many array elements you want to:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
        
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
