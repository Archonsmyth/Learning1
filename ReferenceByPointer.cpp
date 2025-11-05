#include <iostream>

void function(int*& ptr){
    *ptr += 2;
    ptr += 1;
    *ptr += 2;
}

int main () {

    int n = 500;
    int* ptr = &n;
    function(ptr);

    std::cout << ptr << '\n';

    return 0;
}