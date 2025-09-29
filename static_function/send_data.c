#include<stdio.h>

void fun()
{
    int New_system_clock,system_clock=75000000;
   
    New_system_clock = change_system_clock(system_clock);   //we cant call this function in this file because this function has scope in main file only
    
printf("changes system clock is : %d\n",New_system_clock);
}