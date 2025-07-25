#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

    volatile int x = 4321;
    int arr[4];

    int i;
    for (i = 0; x == 4321; i++) arr[i] = i;
    std::cout << i << std::endl;

    return 0;
}
