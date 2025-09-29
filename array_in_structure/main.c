/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

struct Data {
    int arr[10];
};

int main() {
    struct Data d = {
        .arr = {1, 2, 3, 4, 5, 6}
    };

    // Access and print the array elements
    for (int i = 0; i < 6; i++) {
        printf("d.arr[%d] = %d\n", i, d.arr[i]);
    }

    return 0;
}

// #include <stdio.h>

// struct Data {
//     int arr[10];
// };

// int main() {
//     struct Data d;
//     struct Data *ptr = &d;

//     (*ptr).arr[0] = 10;
//     ptr->arr[1] = 20;

//     printf("d.arr[0] = %d\n", (*ptr).arr[0]);
//     printf("d.arr[1] = %d\n", ptr->arr[1]);

//     return 0;
// }
