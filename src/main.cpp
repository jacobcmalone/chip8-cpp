/* C++ Chip-8 Interpreter
 * Jacob Malone
 * 2021
 */

#include "../include/chip8.h"

#define MEMDUMP false
#define DEBUG true

Chip8 chip8(MEMDUMP);

int main(int argc, char* argv[]) {
    char loop;
    std::string romFile = "testrom/BC_test.ch8";
    chip8.init();
    chip8.loadRom(romFile);
    while(true) {
        chip8.emulateCycle();
        if(DEBUG) {
            chip8.displayStatus();
        }
        std::cin >> loop;
    }
    return 0;
}
