/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct data
{
    float length;
    float width;
    int arr[3];
    
}emp;

float area(struct data *);
 
int main()
{
    struct data emp={2,3,{1,2,3}};
    float TotalArea;
    struct data *ptr;
    ptr=&emp;
    
    TotalArea=area(ptr);
    printf("%f",TotalArea);

    return 0;
}
float area(struct data *empdata)
{
  float areaofrect;
  
  areaofrect=empdata->length * empdata->width;
  
  //printf("%d",emp->arr[i]);
  return areaofrect;
  
}