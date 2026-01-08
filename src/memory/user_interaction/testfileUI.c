#include "../../../headers/filemanager.h"
#include <stdint.h>
#include <stdio.h>


void test_mem_write() {
    uint8_t RAM[1024*1024];

    //fill location src
    for(uint32_t i = 24; i < 1024; i++) {
        RAM[i] = 0xFF; //sets entries 24-1048 to 0xFF
    }

    //mem_cpy
    uint8_t* src = &RAM[0x18];
    uint8_t* dest = &RAM[0x800];
    uint32_t size = 0x400;
    mem_cpy(src, dest, size);

    //validate
    for(uint32_t i = 0; i < 1024; i++) {
        if(RAM[i+24] != RAM[i+2048]) printf("problem");
    }
}

int main() {
    test_mem_write();
}