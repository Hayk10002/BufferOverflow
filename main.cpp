#include <iostream>
#include <string>


int main(int argc, char* argv[]) {


    int __attribute__((no_reoder)) arr_before[4];
    asm volatile("" ::: "memory");
    int __attribute__((no_reoder)) x = 4321;
    asm volatile("" ::: "memory");
    int __attribute__((no_reoder)) arr_after[4];

    int* arr;
    if ((size_t)&x > (size_t)&arr_before) 
    {
        std::cout << &x << " > " << &arr_before << std::endl;
        arr = arr_before;
    }
    else                                
    {
        std::cout << &x << " < " << &arr_before << std::endl;
        arr = arr_after;
    } 
    
    std::cout << "&x     : " << &x << std::endl;
    std::cout << "&arr   : " << &arr << std::endl;
    
    int i;
    for (i = 0; x == 4321; i++) 
    {
        arr[i] = i;
        std::cout << "&arr[i]: " << &(arr[i]) << " i=" << i << std::endl;
    }
    std::cout << i << std::endl;

    return 0;
}
