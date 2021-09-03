#include <iostream>
#include "kdb.h"
#include "ram.h"


void input_numbers () {
    int buffer;
    std::cout << "Input eight numbers:";
    for (int i=0;i < 8;++i) {
        std::cin >> buffer;
        write_ram(buffer,i);
    }
}