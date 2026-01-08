#include "../../../headers/filemanager.h"
#include "../../../headers/PMM.h"

/*
file management goals
1. need to be able to track where a file is
2. need to be able to write to a file **done**
3. need to be able to describe contents of a file 
4. need to know where to write from (this should probably be done later in the terminal) 
*/


void mem_cpy(uint8_t* src, uint8_t* dest, uint32_t size) { //dunno if this is the correct file to have mem_cpy in
    for(uint32_t i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

