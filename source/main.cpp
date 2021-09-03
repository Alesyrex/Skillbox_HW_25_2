#include <iostream>
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kdb.h"

bool is_correct_answer (std::string answer, std::string *actions) {
    for (int i=0;i < 6;++i) {
        if (answer == actions[i]) return true;
    }
    return false;
}

int main() {

    std::string actions[] = {"sum","save","load","input","display","exit"};
    std::string answer;

    do {
        std::cout << "Input one from the list of commands:" << std::endl;
        for (int i=0;i < 6;++i) {
            std::cout << "-" << actions[i] << std::endl;
        }
        std::cout << ">";

        do {
            std::cin >> answer;
            if (!(is_correct_answer(answer,actions))) std::cout << "Incorrect!Repeat.\n>";
        } while (!(is_correct_answer(answer,actions)));

        if (answer == actions[0]) {
            std::cout << "Sum: " << calculation() << std::endl;
        }
        else if (answer == actions[1]) {
            save_to_disk();
        }
        else if (answer == actions[2]) {
            load_from_disk();
        }
        else if (answer == actions[3]) {
            input_numbers();
        }
        else if (answer == actions[4]) {
            print_on_screen();
        }
    } while (answer != "exit");

    return 0;
}
