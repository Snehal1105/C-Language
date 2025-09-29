/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int powerofnum(int,int);
int main()
{
    int num,n,power;
    printf("Enter number and nth power:\n");
    scanf("%d%d",&num,&n);
    power=powerofnum(num,n);
    printf("%d to the Power of %d is :%d",num,n,power);

    return 0;
}

int powerofnum(int num,int n)
{
    if (n == 0) {
        // base case
        return 1;
    }  
    else{
        return num * powerofnum(num, n - 1);
    }
}