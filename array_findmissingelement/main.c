/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Q. Find the missing number in a given integer array of 1 to 500. 
#include <stdio.h>
#define SIZE 500
int main()
{
    int arr[SIZE];
    int i=0;
    int j=0;
    while(j<SIZE)
    {
    for(i=1;i<=SIZE;i=i+2)
    {
        arr[j]=i;
        //printf("%d,",arr[j]);
        j++;
    }
    }
    j=0;
    while(j<SIZE)
    {
     for(i=1;i<=SIZE;i++)
     {
        if(arr[j]==i)
        {
          continue;
        }
        else
        {
          if(j<SIZE-1) 
          { 
           printf("%d,",i);
          } 
          else
          { 
           printf("%d",i);
          }
        } 
        j++;
     }
    }

    return 0;
}

