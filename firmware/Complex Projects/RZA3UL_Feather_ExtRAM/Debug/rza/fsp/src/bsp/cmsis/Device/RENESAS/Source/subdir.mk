################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/cache.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/initsect.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/irq.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/irqfiq_handler.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/mmu.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/program_entry.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/startup.asm \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/vector_table.asm 

C_SRCS += \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/default_handler.c \
../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/system.c 

LST += \
cache.lst \
default_handler.lst \
initsect.lst \
irq.lst \
irqfiq_handler.lst \
mmu.lst \
program_entry.lst \
startup.lst \
system.lst \
vector_table.lst 

C_DEPS += \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/default_handler.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/system.d 

OBJS += \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/cache.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/default_handler.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/initsect.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/irq.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/irqfiq_handler.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/mmu.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/program_entry.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/startup.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/system.o \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/vector_table.o 

ASM_DEPS += \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/cache.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/initsect.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/irq.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/irqfiq_handler.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/mmu.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/program_entry.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/startup.d \
./rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/vector_table.d 

MAP += \
RZA3UL_Feather_ExtRAM.map 


# Each subdirectory must supply rules for building sources it contributes
rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/%.o: ../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/%.asm
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -x assembler-with-cpp -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\src" -I"." -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza_cfg\\fsp_cfg" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"
rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/%.o: ../rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_ExtRAM/generate" -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_ExtRAM/src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\src" -I"." -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\rza_cfg\\fsp_cfg" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"

