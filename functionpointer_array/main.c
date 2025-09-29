/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

// Simulated tasks
void Task_LED(void) {
    printf("Running LED Task\n");
}

void Task_UART(void) {
    printf("Running UART Task\n");
}

void Task_Sensor(void) {
    printf("Running Sensor Task\n");
}

void (*SelectFun[3])(void)={Task_LED,Task_UART,Task_Sensor};
int main()
{
    int choice;

    while (1) 
    {
        printf("\nChoose Task to Run (0=LED, 1=UART, 2=Sensor, 9=Exit): ");
        scanf("%d", &choice);
    
    if(choice==9)
    {
        break;
    }
    else if(choice>=0 && choice <=2)
    {
        (*SelectFun[choice])();  
    }
    else
    {
        printf("Invalid Choice");
    }
}
    return 0;
}
