#include <stdint.h>

struct inode {
    uint32_t size;
    uint32_t type;
    uint32_t blocks[12];
    uint32_t permissions;
};

struct superblock {
    uint32_t total_blocks;
    uint32_t free_blocks_left;
    uint32_t inode_bitmap_addr;
    uint32_t data_bitmap_addr;
    uint32_t inode_table_addr;
    uint32_t data_blocks_addr;
};

void mem_cpy(uint8_t* src, uint8_t* dest, uint32_t size);