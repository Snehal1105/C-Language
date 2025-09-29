/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int TotalRow;
    scanf("%d",&TotalRow);
    
    for(int RowNo=0;RowNo<TotalRow;RowNo++)
    {
        for(int Space=0;Space<(TotalRow-RowNo);Space++)
        {
            printf(" ");
        }
        for(int j=0;j<(2*RowNo-1);j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    

    return 0;
}