/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int fact=1;
int number;
scanf("%d",&number);

for(int i=number;i>=1;i--)
{
if(number==0)
{
fact=1;
}
else
{
fact= fact*i;

}
}
printf("factorial of number= %d",fact);

    return 0;
}