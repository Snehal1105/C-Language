    /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 int change_system_clock(int system_clock);
void fun(void);
int system_clock=48000000;
int main()
{
 int New_system_clock;
printf("changed system clock is : %d\n",system_clock);

//New_system_clock = change_system_clock(system_clock);
printf("changes system clock is : %d",New_system_clock); //6MHZ

fun();
    return 0;
}

 int change_system_clock(int system_clock)

{
    system_clock=60000000;
    return system_clock;
}