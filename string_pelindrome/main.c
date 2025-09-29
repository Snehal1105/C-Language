/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
    char str[]="mam mam ";
    char str1[20];
    int i,len;
    len=strlen(str);
    printf("length : %d\n",len);
    for(i=0; str[i]!='\0'; i++)
    {
        str1[i]=str[len-1-i];
    
    }
    for(i=0;str1[i]!='\0';i++)
    {
        printf("%c",str1[i]);
        
    }
    
    if(strcmp(str,str1)==0)
    {
      printf("\npelindrome");  
    }
    else{
        printf("\nNot Pelindrome");
    }

    return 0;
}
