/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//(x+Y)^n

#include <stdio.h>

int main()
{
    int TotalNoRows,c=0;
    scanf("%d",&TotalNoRows);
    
    for(int rows=0;rows<TotalNoRows;rows++)
    {
        for(int space=1;space<(TotalNoRows-rows);space++)
        {
            printf(" ");
        }
         for(int col=0;col<=rows;col++)
        {
            if(rows==0 || col==0)
            {
                c=1;
            }
            else{
                c=(c*(rows-col+1))/col;
            }
                printf("%d ",c);
            
        }
        printf("\n");
    }
    

    return 0;
}
