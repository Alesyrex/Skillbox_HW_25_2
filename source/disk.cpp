#include <iostream>
#include <fstream>
#include "disk.h"
#include "ram.h"

void save_to_disk () {
    int buffer;
    std::ofstream file ("disk.txt");
    for (int i=0;i < 8;++i) {
        buffer = read_ram(i);
        file << buffer << " ";
    }
    file.close();
    std::cout << "RAM saved to disk." << std::endl;
}

void load_from_disk () {
    int buffer;
    std::ifstream file ("disk.txt");
    if (file.is_open()) {
        for (int i=0;i < 8;++i) {
            file >> buffer;
            write_ram(buffer,i);
        }
        std::cout << "Data load on RAM." << std::endl;
    }
    else std::cout << "File not found." << std::endl;
}

