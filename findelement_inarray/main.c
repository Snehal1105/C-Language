/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[]={1,6,4,8,3};
    int n,size;
    
    printf("Enter a number to search:");
    scanf("%d",&n);
    
    size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
       if(arr[i]==n)
       {
           printf("Found");
           break;
       }
       else
       {
           printf("Not Found");
           break;
       }
    }
    

    return 0;
}
