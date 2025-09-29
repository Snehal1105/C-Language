/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

enum ErrorCodes{
    DataGoodData=0,
    Hardfault,
    stackOverflow,
    MemoryLeak
}ErrorCodes;
  
enum Gears{
    Neutral=0,
    Forward,
    Reverse,
    Park
}Gear;

struct CAN_Frame{
    int CAN_id;
    int DLC;
    int Data[8];
}CAN;

void CAN_Receive(struct CAN_Frame *);

int main()
{
    printf("Choose a gear:\n");
    scanf("%d",&CAN.Data[0]);
    
    CAN_Receive(&CAN);
    return 0;
}
void CAN_Receive(struct CAN_Frame *CAN)
{
    switch(CAN->Data[0])
    {
        case 0: 
            printf("Gear: Neutral\n");
            break;
        case 1: 
            printf("Gear: Forward\n");
            break;
        case 2: 
            printf("Gear: Reverse\n");
            break;
        case 3: 
            printf("Gear: Park\n");
            break;
        default: 
            printf("Invalid gear selection!\n");
            break;
    }
   
}