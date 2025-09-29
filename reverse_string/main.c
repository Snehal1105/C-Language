/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
   int n;
  char str[]="Hello World";
  char temp;
  n=strlen(str);
  printf("%d\n",n);
  for(int i=0;i<n/2;i++)
  {
     temp=str[i];
     str[i]=str[n-i-1];
     str[n-i-1]=temp;
  }
printf("%s",str);
    return 0;
}