/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//we can solve this by linked list to avoid time and space complexity

#include <stdio.h>
void RepeatElement(int arr[],int n);
void sort(int arr[],int n);

int main()
{
    int arr[]={1,4,3,4,1,1};  //{1,2,1,2,1}
    int n;
    
    // printf("How many array elements you want to:\n");
    // scanf("%d",&n);
    //printf("enter the array elements:\n");
    
    n=sizeof(arr)/sizeof(arr[0]); //total array elements
    printf("Total array elements : %d\n",n);
   
   sort(arr,n);
   //RepeatElement(arr,n);
   
   return 0;
}

void sort(int arr[],int n)
{
    int i,j,count=0,temp;
     
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
       {
         if(arr[i]>arr[j])
         {
            temp= arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
         }
       }
    }
     for(i=0;i<n;i++)
    {
    printf("%d\t",arr[i]);
    }
}
// void RepeatElement(int arr[],int n)
//   {
//      int i,j,count=0,printed=0;
     
//      for(i=0;i<n;i++)
//     {
        
//         for(j=0;j<n;j++)
//       {
//          if(arr[i]==arr[j])
//          {
            
//             count++;
//          }
//       }
//       if(count>1 && printed==0)
//       {
           
//           //printf("Count:%d\t",count);
//       printf("%d\t",arr[i]);
//       printed=1;
//       }
//       printed=0; 
//       count=0;
       
       
//     }  
//   }
    
    
    
    
    
    
