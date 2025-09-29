/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define BIT 16
int main()
{
    // int num=0xFFFF;
    // int CheckBit=0x01;
    // int count=0;
    // int temp;
    // temp=num;
    
    // char Prime=1;
    // for(int i=2;i<num;i++)
    // {
    //     if(num%i==0)
    //     {
    //         printf("Number is not prime number");
    //         break;
    //     }
    //     else
    //     {
    //       printf("Number is prime number"); 
    //     }
    // }
    // for(int i=0;i<16;i++)
    // {
    // if(temp&CheckBit==0x01)
    // {
    //     count++;
       
        
    // }
    //  temp=temp>>1;
    // }
    // printf("count=%d",count);
    
    char str[10]="Hello";
    int i=0,j=0;
    int StringLength=0;
    char temp;
    for(StringLength=0;str[StringLength]!='\0';StringLength++);
    printf("StringLength =%d\n",StringLength);
    
    for(i=0;i<StringLength/2;i++)
    {
       for(j=0;j<StringLength;j++)
       {
         temp=str[j];
         str[j]=str[j+StringLength-i];
         str[j+StringLength-i]=temp;
       }
    }
    
//printf("reverse string =%s",str);    
    return 0;
}
