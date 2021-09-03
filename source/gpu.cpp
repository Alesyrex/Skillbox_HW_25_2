#include <iostream>
#include "gpu.h"
#include "ram.h"

void print_on_screen () {
    int buffer;

    std::cout << "Data from RAM:" << std::endl;
    for (int i=0;i < 8;++i) {
        buffer = read_ram(i);
        std::cout << buffer << " ";
    }
    std::cout << std::endl;
}