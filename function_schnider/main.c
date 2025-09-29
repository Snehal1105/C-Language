/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void solveq(int *x);
//#include <int.h>
// void calculate(void);
// int arr1[5]={1,2,3,4,5};
// int arr2[5]={6,7,8,9,1};
// int main()
// {
    
//     calculate();

//     return 0;
// }

// void calculate(void)
// {
//     int i,j=4;
//     for(i=0;i<5;i++)
//     {
//     arr2[j]=arr1[i]+arr2[j];
//     j--;
//     }
//     for(i=0;i<5;i++)
//     {
//       int temp =arr2[i]; 
//       arr2[i]=arr2[j];
//       arr2[j]=temp;
       
       
//     }
//     printf("%d\n",arr2[i]);
//     }
// }


//y = 1.5x^2 + 12x + 58
int main()
{
    int x=5;
    solveq(&x);
    return 0;
    
}
void solveq(int *x)
{
    int y;
    y=((3*(*x)^2/2) + 12*(*x) +58);
    printf("%d",y);
}