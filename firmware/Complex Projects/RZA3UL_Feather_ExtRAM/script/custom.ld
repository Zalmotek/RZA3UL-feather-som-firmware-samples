/*
                  Linker File for Renesas FSP
*/

/* Memory allocation example using xip. */
INCLUDE memory_regions.ld

SRAM_RESERVED_LENGTH = 0xE000;
SRAM_MMU_START = SRAM_START + SRAM_RESERVED_LENGTH;
SRAM_MMU_LENGTH = 0x5000;
SRAM_CODE_START = SRAM_MMU_START + SRAM_MMU_LENGTH;
SRAM_CODE_LENGTH = (SRAM_START + SRAM_LENGTH) - SRAM_CODE_START;

FLASH_IPL_LENGTH = 0x20000;
FSP_HEADER_START = OCTA_FLASH_START + FLASH_IPL_LENGTH;
FSP_HEADER_LENGTH = 0x200;

ENTRY_S_START = FSP_HEADER_START + FSP_HEADER_LENGTH;
ENTRY_S_LENGTH = 0xE00;
CODE_S_START = ENTRY_S_START + ENTRY_S_LENGTH;
CODE_S_LENGTH = 0x1FF000;

FSP_RAM_OFFSET = 0x001FFFC0;

CACHEDRAM_S_START = OCTA_RAM_START + FSP_RAM_OFFSET;
CACHEDRAM_S_LENGTH = OCTA_RAM_LENGTH - (CACHEDRAM_S_START - OCTA_RAM_START);

UNCACHED_OFFSET = 0x10000000;
UNCACHEDRAM_S_START = UNCACHED_OFFSET + OCTA_RAM_START;
UNCACHEDRAM_S_LENGTH = OCTA_RAM_LENGTH;

/* Define memory regions. */
MEMORY {
    SRAM_MMU          (rw)  : ORIGIN = SRAM_MMU_START,      LENGTH = SRAM_MMU_LENGTH
    SRAM              (rwx) : ORIGIN = SRAM_CODE_START,     LENGTH = SRAM_CODE_LENGTH
    HEADER_REGION     (rx)  : ORIGIN = FSP_HEADER_START,    LENGTH = FSP_HEADER_LENGTH
    ENTRY_S           (rx)  : ORIGIN = ENTRY_S_START,       LENGTH = ENTRY_S_LENGTH
    CODE_S            (rx)  : ORIGIN = CODE_S_START,        LENGTH = CODE_S_LENGTH
    CACHED_RAM_S      (rwx) : ORIGIN = CACHEDRAM_S_START,   LENGTH = CACHEDRAM_S_LENGTH
    UNCACHED_RAM_S    (rwx) : ORIGIN = UNCACHEDRAM_S_START, LENGTH = UNCACHEDRAM_S_LENGTH
}

ENTRY(Start)
SECTIONS
{
    .data.sram_mmu : {
        __ttbr0_base = .;
        . += 0x00000020;
        . = ALIGN( 0x1000 );
        __level2_table_1_base = .;
        . += 0x00001000;
        __level2_table_2_base = .;
        . += 0x00001000;
        __level2_table_3_base = .;
        . += 0x00001000;
        __level2_table_4_base = .;
        . += 0x00001000;
    } > SRAM_MMU

    .text.sram : {
        __sram_exec_start = .;
        __sram_load_start = LOADADDR(.text.sram) + ( . - ADDR(.text.sram) );

        KEEP(* (VECTOR_TABLE))          /*asm*/
        KEEP(* (VECTOR_TABLE_FREERTOS)) /*asm*/

        . = ALIGN( 0x8 );

        KEEP(* (IRQ_FIQ_HANDLER))       /*asm*/

        * (FASTCODE)

        . = ALIGN( 0x8 );
        __sram_load_end = LOADADDR(.text.sram) + ( . - ADDR(.text.sram) );
    } > SRAM AT > CODE_S

    .rodata.header : {
        QUAD(Start)
        QUAD(0xFFFFFFFFFFFFFFFF-Start)
        QUAD(0x20020200)
        QUAD(0xFFFFFFFFFFFFFFFF-0x20020200)
        QUAD(0)
        QUAD(0xFFFFFFFFFFFFFFFF-0)
        FILL(0x00)
        . += 0x1B0;
        QUAD(0x4120505346205a52)
        QUAD(0x69746163696c7070)
        QUAD(0x0000000000006e6f)
        QUAD(0x0000000000000000)
    } > HEADER_REGION

    .text.secure_program_entry : {
        _prog_start = .;
        KEEP(* (PROGRAM_ENTRY))     /*asm*/
    } > ENTRY_S

    .text : ALIGN( 0x8 ) {
        KEEP(* (RESET_HANDLER))     /*asm*/
        . = ALIGN( 0x80 );
        * (INIT_SECTION)            /*asm*/
        "*/sections.o"       (.rodata .rodata.*)

        . = ALIGN( 0x8 );

        * (.text .text.*)
        * (.rodata .rodata.*)

        . = ALIGN( 0x8 );
        /* preinit data */
        PROVIDE_HIDDEN(__preinit_array_start = .);
        KEEP(*(.preinit_array))
        PROVIDE_HIDDEN(__preinit_array_end = .);
        . = ALIGN( 0x8 );
        /* init data */
        PROVIDE_HIDDEN(__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array))
        PROVIDE_HIDDEN(__init_array_end = .);
        . = ALIGN( 0x8 );
        /* finit data */
        PROVIDE_HIDDEN(__fini_array_start = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array))
        PROVIDE_HIDDEN(__fini_array_end = .);

    } > CODE_S

    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > CODE_S

    .ARM.exidx :
    {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
    } > CODE_S

    .data : ALIGN( 0x20 ) {
        __data_exec_start = .;
        __data_load_start = LOADADDR(.data) + ( . - ADDR(.data) );

        * (.data .data.*)
        * (.application_vectors)

        . = ALIGN( 0x8 );
        __data_load_end = LOADADDR(.data) + ( . - ADDR(.data) );
    } > CACHED_RAM_S AT > CODE_S

    .bss (NOLOAD) : ALIGN( 0x20 ) {
        __bss_start = .;
        . = ALIGN( 0x8 );
        __bss_end = .;

    } > CACHED_RAM_S

    .stack (NOLOAD) : ALIGN( 0x10 ) {
        __stack_start = .;
        . += 0x00002000;
        . = ALIGN( 0x10 );
        __stack_end = .;

    } > CACHED_RAM_S

    .bss2 (NOLOAD) : ALIGN( 0x20 ) {
        __bss2_start = .;

        * (.bss .bss.*)
        * (COMMON)

        . = ALIGN( 0x8 );
        __bss2_end = .;
    } > CACHED_RAM_S

    .heap (NOLOAD) : ALIGN( 0x10 ) {
        end = .;
        __HeapBase = .;
        . = . + 0x00002000;
        __HeapLimit = .;
        /* heap end */

        _cached_end = .;
    } > CACHED_RAM_S

    .bss.uncached_RAM (NOLOAD) : ALIGN( 0x20 ) {
        /* Skip used size in cached area */
        . = UNCACHEDRAM_S_START + (_cached_end - OCTA_RAM_START);

        __uncached_RAM_start = .;

        * (UNCACHED_BSS)

        . = ALIGN( 0x8 );
        __uncached_RAM_end = .;
    } > UNCACHED_RAM_S

    .uncached_RAM_USB (NOLOAD) : ALIGN( 0x8 ) {
        __uncached_RAM_USB_start = .;
        KEEP(*(.uncached_RAM_USB*))
        __uncached_RAM_USB_end = .;
    } > UNCACHED_RAM_S

    /*
     * The startup code uses the end of this region to calculate
     * the top of memory - don't place any RAM regions after it
     */
    __top_of_ram = .;
}
/*EOF*/
