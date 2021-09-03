#include "ram.h"

int ram[8];

void write_ram (int buffer, int i) {
        ram[i] = buffer;
}

int read_ram (int i) {
    return ram[i];
}