//env error counter = 1
//Need to figure out the whole IDT ptr and PIC thing

#include "../headers/terminal.h"
#include "../headers/keyboard.h"
#include "../headers/pic.h"
#include "../headers/idt.h"
#include "../headers/io.h"
#include "../headers/PMM.h"

void kernel_main(uint32_t mbptr) {
    terminal_initialize();
	init_IDT();
	pic_init();
	PMM_init(mbptr);

	// terminal_writestring("Number of pages: ");
	// terminal_writenumber(num_pages);
	// terminal_enter();

	asm volatile ("sti");

    while(1) {
		asm("hlt");
	}
	
}