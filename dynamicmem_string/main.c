/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *str="Hello";
    int length=0;
    
    for(int j=0;str[j]!='\0';j++)
    {
        length++;
    }
   str = (char*)malloc(length*sizeof(char));
    scanf("%s",str);
    printf(" string = %s\n",str);
    free(str);
    
    return 0;
}