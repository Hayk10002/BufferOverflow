#include <iostream>
#include <string>

int main(int argc, char* argv[]) {


    int arr_before[4];
    volatile int x = 4321;
    int arr_after[4];

    int* arr;
    if ((void*)&x > (void*)&arr_before) arr = arr_before;
    else                                arr = arr_after; 

    int i;
    for (i = 0; x == 4321; i++) arr[i] = i;
    std::cout << i << std::endl;

    return 0;
}
