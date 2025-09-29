/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a = 2;
   int arr[5]={5,4,7,9,3};
   int *p=arr;
  // p=arr;
   int *ptr;
   ptr=&a;
   
   //  increment in value
    ++*ptr;
    ++*p;
   printf("%d\n",*ptr);//3
   printf("%d\n",*p); //6
   *p++;
   printf("%d\n",*p); //4
   *ptr++; // garbage
   printf("%d\n",*ptr);//garbage
   
   
   p++;
   printf("%d\n",*p);
   ++p;
   printf("%d\n",*p);
    return 0;
}


