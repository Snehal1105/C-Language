/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/*
///////error in below case////////
struct data {
    data[5]:10;
}d;   
*/

int main()
{
    int arr[5]={6,2,3,4,5};
    int *ptr;
    ptr = arr;  //allowed
    //ptr = &arr[0];
    printf("%d\n",*(ptr+1));

    return 0;
}

