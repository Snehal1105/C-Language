/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
struct data{
   uint16_t CarNumber;
   uint32_t CarPrice;
}Car;

struct People{
  uint16_t id;
  uint32_t salary;  
}employee,Servant;

typedef struct{
   uint16_t SensorValue;
  uint8_t SensorLimit; 
}Sensor_t;

int main()
{
   //data car; //Error : unknown type name ‘data’;
   employee.id=10;  //allow
   printf("Employee Id= %d\n",employee.id);
   
   Sensor_t TempSensor,PressureSensor;
   TempSensor.SensorValue=23;
   printf("Temperature sensor value = %d deg\n",TempSensor.SensorValue);
    return 0;
}
