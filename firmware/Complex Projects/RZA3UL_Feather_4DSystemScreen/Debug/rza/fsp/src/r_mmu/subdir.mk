################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rza/fsp/src/r_mmu/r_mmu.c 

LST += \
r_mmu.lst 

C_DEPS += \
./rza/fsp/src/r_mmu/r_mmu.d 

OBJS += \
./rza/fsp/src/r_mmu/r_mmu.o 

MAP += \
RZA3UL_Feather_4DSystemScreen.map 


# Each subdirectory must supply rules for building sources it contributes
rza/fsp/src/r_mmu/%.o: ../rza/fsp/src/r_mmu/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -gdwarf-4 -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_4DSystemScreen/generate" -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_4DSystemScreen/src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg" -I"." -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"

