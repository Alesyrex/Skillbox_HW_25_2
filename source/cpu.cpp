#include "cpu.h"
#include "ram.h"

int calculation () {
    int buffer;
    int sum = 0;

    for (int i=0;i < 8;++i) {
        buffer = read_ram(i);
        sum += buffer;
    }
    return sum;
}
