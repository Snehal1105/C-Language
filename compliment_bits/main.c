/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    int n=102301;  //0001 0010 0011 0100
    int ans=0,i=0;
    
    while(n!=0)
    {
        if(n%10==0)
        {
         ans = ans+1*pow(10,i);
       
        }
        else
        {
            ans=(ans+(n%10)*pow(10,i));
           
        }
        n=n/10;
        i++;
    }
    

printf("%d",ans);
    return 0;
}