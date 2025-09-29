/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>
//Create a structure in header file
struct __attribute__((__packed__)) CarModelData{
    uint16_t CarNumber;
    float CarWeight;
    uint32_t CarPrice;
};
struct CarModelData HeroCar = {7349,55.6,34000};
struct CarModelData const BajajCar = {5478,45.5,32000};
int main()
{
    //create structure variables either globally or locally
    
    //struct CarModelData FordGTCar={1234,60.5,3200000}; //memory will consume when variable is created
    struct CarModelData mercedesBenzCar={6789,66.5,4500000}; //structure array/C89 method(order is important)
    
    struct CarModelData FordGTCar={.CarPrice=3200000,
                                   .CarNumber=1234,
                                   .CarWeight=60.5
                                  };                  //C99 method(order is not important)
    // FordGTCar.CarNumber=1234;
    // FordGTCar.CarWeight=60.5;
    // FordGTCar.CarPrice=3200000;
    
    // mercedesBenzCar.CarNumber=6789;
    // mercedesBenzCar.CarWeight=66.5;
    // mercedesBenzCar.CarPrice=4500000;
    
    printf("size of structure :%ld\n",sizeof(struct CarModelData));
    
    printf("\nFord Car Details :\n");
    FordGTCar.CarNumber=5432;   //I can change the value of structure element
    printf("FordGT Car Number : %d\n",FordGTCar.CarNumber);
    printf("FordGT Car Weight : %f\n",FordGTCar.CarWeight);
    printf("FordGT Car Price  : %d\n",FordGTCar.CarPrice);
    printf("\nmercedesBenz Car Details :\n");
    printf("mercedesBenz Car Number : %d\n",mercedesBenzCar.CarNumber);
    printf("mercedesBenz Car Weight : %f\n",mercedesBenzCar.CarWeight);
    printf("mercedesBenz Car Price  : %d\n",mercedesBenzCar.CarPrice);

    printf("\nHero Car Details :\n");
    printf("Hero Car Number : %d\n",HeroCar.CarNumber);
    
   // BajajCar.CarNumber=8787;  read only data
    printf("\nBajaj Car Details :\n");
    printf("Bajaj  Car Number : %d\n",BajajCar.CarNumber);
    return 0;
}

