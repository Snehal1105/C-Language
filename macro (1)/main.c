/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define add(a,b) (a+b)

int main()
{
    //printf("%d",add(2,3.5));  //warning : arg 2 is double, provides garbage output
    printf("%f",add(2,3.5)); // 5.500000 
    
    /* Note: Macro doesn't have datatype
    macro in C is just a text substitution, done by the preprocessor before compilation. 
    It doesn't have any type information or return type — it just replaces the name with code. */
    

    return 0;
}