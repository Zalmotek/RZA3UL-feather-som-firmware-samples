################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../rza/fsp/src/bsp/mcu/all/bsp_delay_asm.asm 

C_SRCS += \
../rza/fsp/src/bsp/mcu/all/bsp_clocks.c \
../rza/fsp/src/bsp/mcu/all/bsp_common.c \
../rza/fsp/src/bsp/mcu/all/bsp_delay.c \
../rza/fsp/src/bsp/mcu/all/bsp_gicv3.c \
../rza/fsp/src/bsp/mcu/all/bsp_group_irq.c \
../rza/fsp/src/bsp/mcu/all/bsp_guard.c \
../rza/fsp/src/bsp/mcu/all/bsp_io.c \
../rza/fsp/src/bsp/mcu/all/bsp_irq.c \
../rza/fsp/src/bsp/mcu/all/bsp_rom_registers.c \
../rza/fsp/src/bsp/mcu/all/bsp_sbrk.c \
../rza/fsp/src/bsp/mcu/all/bsp_security.c 

LST += \
bsp_clocks.lst \
bsp_common.lst \
bsp_delay.lst \
bsp_delay_asm.lst \
bsp_gicv3.lst \
bsp_group_irq.lst \
bsp_guard.lst \
bsp_io.lst \
bsp_irq.lst \
bsp_rom_registers.lst \
bsp_sbrk.lst \
bsp_security.lst 

C_DEPS += \
./rza/fsp/src/bsp/mcu/all/bsp_clocks.d \
./rza/fsp/src/bsp/mcu/all/bsp_common.d \
./rza/fsp/src/bsp/mcu/all/bsp_delay.d \
./rza/fsp/src/bsp/mcu/all/bsp_gicv3.d \
./rza/fsp/src/bsp/mcu/all/bsp_group_irq.d \
./rza/fsp/src/bsp/mcu/all/bsp_guard.d \
./rza/fsp/src/bsp/mcu/all/bsp_io.d \
./rza/fsp/src/bsp/mcu/all/bsp_irq.d \
./rza/fsp/src/bsp/mcu/all/bsp_rom_registers.d \
./rza/fsp/src/bsp/mcu/all/bsp_sbrk.d \
./rza/fsp/src/bsp/mcu/all/bsp_security.d 

OBJS += \
./rza/fsp/src/bsp/mcu/all/bsp_clocks.o \
./rza/fsp/src/bsp/mcu/all/bsp_common.o \
./rza/fsp/src/bsp/mcu/all/bsp_delay.o \
./rza/fsp/src/bsp/mcu/all/bsp_delay_asm.o \
./rza/fsp/src/bsp/mcu/all/bsp_gicv3.o \
./rza/fsp/src/bsp/mcu/all/bsp_group_irq.o \
./rza/fsp/src/bsp/mcu/all/bsp_guard.o \
./rza/fsp/src/bsp/mcu/all/bsp_io.o \
./rza/fsp/src/bsp/mcu/all/bsp_irq.o \
./rza/fsp/src/bsp/mcu/all/bsp_rom_registers.o \
./rza/fsp/src/bsp/mcu/all/bsp_sbrk.o \
./rza/fsp/src/bsp/mcu/all/bsp_security.o 

ASM_DEPS += \
./rza/fsp/src/bsp/mcu/all/bsp_delay_asm.d 

MAP += \
RZA3UL_Feather_4DSystemScreen.map 


# Each subdirectory must supply rules for building sources it contributes
rza/fsp/src/bsp/mcu/all/%.o: ../rza/fsp/src/bsp/mcu/all/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -gdwarf-4 -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_4DSystemScreen/generate" -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_4DSystemScreen/src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg" -I"." -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"
rza/fsp/src/bsp/mcu/all/%.o: ../rza/fsp/src/bsp/mcu/all/%.asm
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -gdwarf-4 -x assembler-with-cpp -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg" -I"." -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"

