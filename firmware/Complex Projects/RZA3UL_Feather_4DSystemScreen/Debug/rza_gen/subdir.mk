################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rza_gen/common_data.c \
../rza_gen/hal_data.c \
../rza_gen/main.c \
../rza_gen/pin_data.c \
../rza_gen/vector_data.c 

LST += \
common_data.lst \
hal_data.lst \
main.lst \
pin_data.lst \
vector_data.lst 

C_DEPS += \
./rza_gen/common_data.d \
./rza_gen/hal_data.d \
./rza_gen/main.d \
./rza_gen/pin_data.d \
./rza_gen/vector_data.d 

OBJS += \
./rza_gen/common_data.o \
./rza_gen/hal_data.o \
./rza_gen/main.o \
./rza_gen/pin_data.o \
./rza_gen/vector_data.o 

MAP += \
RZA3UL_Feather_4DSystemScreen.map 


# Each subdirectory must supply rules for building sources it contributes
rza_gen/%.o: ../rza_gen/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -gdwarf-4 -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_4DSystemScreen/generate" -I"C:/Users/nicul/e2_studio/workspace/fsp2/RZ_Feather/RZA3UL_Feather_4DSystemScreen/src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\src" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_4DSystemScreen\\rza_cfg\\fsp_cfg" -I"." -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"

