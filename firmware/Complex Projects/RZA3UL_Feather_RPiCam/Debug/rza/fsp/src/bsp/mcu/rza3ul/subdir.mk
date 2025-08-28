################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rza/fsp/src/bsp/mcu/rza3ul/bsp_clocks_setup.c \
../rza/fsp/src/bsp/mcu/rza3ul/bsp_irq_sense.c 

LST += \
bsp_clocks_setup.lst \
bsp_irq_sense.lst 

C_DEPS += \
./rza/fsp/src/bsp/mcu/rza3ul/bsp_clocks_setup.d \
./rza/fsp/src/bsp/mcu/rza3ul/bsp_irq_sense.d 

OBJS += \
./rza/fsp/src/bsp/mcu/rza3ul/bsp_clocks_setup.o \
./rza/fsp/src/bsp/mcu/rza3ul/bsp_irq_sense.o 

MAP += \
RZA3UL_Feather_RPiCam_new.map 


# Each subdirectory must supply rules for building sources it contributes
rza/fsp/src/bsp/mcu/rza3ul/%.o: ../rza/fsp/src/bsp/mcu/rza3ul/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=generic+simd -mcmodel=small -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\src" -I"." -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_cfg\\fsp_cfg" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"

