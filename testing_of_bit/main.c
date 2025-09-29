/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define SET_BIT(p,n) ((p) |= (1 << (n)))
int main()
{
    int n=3;
    int p=0x54;
    SET_BIT(p,n);
    printf("data(p)=%x\nnth bit set(n)=%x",p,n);
    return 0;
}
