#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

    volatile int x = 4321;
    int arr[4];

    std::cout << "&x    : " << &x << std::endl;
    std::cout << "&arr  : " << &arr << std::endl;

    int i;
    for (i = 0; x == 4321; i++) 
    {
        arr[i] = i;
        std::cout << "&arr[i]: " << &(arr[i]) << " i=" << i << std::endl;
    }
    std::cout << i << std::endl;

    return 0;
}
