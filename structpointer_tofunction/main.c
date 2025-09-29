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
    
}emp;

float area(struct data *);
 
int main()
{
    float TotalArea;
    struct data *ptr;
    ptr=&emp;
    emp.length=5;
    emp.width=2;
    TotalArea=area(ptr);
    printf("%f",TotalArea);

    return 0;
}
float area(struct data *empdata)
{
  float areaofrect;
  
  areaofrect=empdata->length * empdata->width;
  return areaofrect;
  
}