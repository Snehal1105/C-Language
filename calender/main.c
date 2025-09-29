/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
char GetDay(void);
int GetDate(void);
char GetMonth(void);

struct Calender 
{
    char day[7];
    int date;
    char month;
    int year;
}Cal;

int main()
{
    //struct Calender Cal;
    char today;
    int date;
    char month;
    
    
    printf("Please tell the current Year:\n");
    scanf("%d",&Cal.year);
    
    today = GetDay();
   // printf("Day:%s\n",today);
    //date = GetDate();
    //month = GetMonth();
    
    //printf("Day: %s\n %d/%d/%d",date,month,year);
  return 0;
}  
char GetDay(void)
{
    switch(Cal.day)
    
    Cal.day[]={"Mon","Tue","Wed","Thur","Fri","Sat","Sun"};
    
    
    return (day);
   
}
    