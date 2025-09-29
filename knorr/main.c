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
    // char str[]="snehalsjadhav11gmail.com";
    // int size;
    // size=strlen(str);
    
    // for(int i=0;str[i]!='\0';i++)
    // {
    //     if(str[i]>='0' && str[i]<='9')
    //     {
    //         continue;
    //     }
    //   printf("%c",str[i]);  
    // }
    
int num=0x12345678;
unsigned char *p;
p=(unsigned char *)&num;

printf("size in byte=%ld\n",sizeof(num));

if(*p==0x78)
{
    printf("Little endian");
}
else
{
    printf("big endian");
}

    return 0;
}
