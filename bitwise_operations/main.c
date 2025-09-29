/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
int main()
{
    int8_t data=0x25;
    int8_t BitSet =0x01;
    int8_t ExtractData;
    //Set the 4th and 7th bit
    int8_t NewData = ((data | (BitSet<<4)) | (data | (BitSet<<7))); //OR  (follow this)
    //int8_t NewData= ((data | 0x10) | (data| 0x80));
    printf("updated data = %x\n",NewData);
    
   //clear the 4th and 7th bit
   NewData = ((NewData & (~(BitSet<<4))) & (NewData & (~(BitSet<<7))));
   printf("updated data = %x\n",NewData);
   
   //Extract the data from bit 3 to bit 6
   ExtractData = ((NewData>>3) & 0x0F);  //shifted the data by 4 masked the bits those are needed
   printf("Extracted data = %x\n",ExtractData);
    return 0;
}

