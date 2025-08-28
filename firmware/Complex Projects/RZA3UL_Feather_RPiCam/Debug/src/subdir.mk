################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/cru_ep.cpp \
../src/hal_entry.cpp \
../src/ov5647.cpp 

C_SRCS += \
../src/mmu_page_table.c \
../src/sections.c \
../src/syscalls.c 

LST += \
cru_ep.lst \
hal_entry.lst \
mmu_page_table.lst \
ov5647.lst \
sections.lst \
syscalls.lst 

C_DEPS += \
./src/mmu_page_table.d \
./src/sections.d \
./src/syscalls.d 

OBJS += \
./src/cru_ep.o \
./src/hal_entry.o \
./src/mmu_page_table.o \
./src/ov5647.o \
./src/sections.o \
./src/syscalls.o 

MAP += \
RZA3UL_Feather_RPiCam_new.map 

CPP_DEPS += \
./src/cru_ep.d \
./src/hal_entry.d \
./src/ov5647.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=generic+simd -mcmodel=small -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\src" -I"." -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_cfg\\fsp_cfg" -std=c++11 -fabi-version=0 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=generic+simd -mcmodel=small -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -D_RENESAS_RZA_ -D_RZA_CORE=CA55_0 -D_RZA_ORDINAL=1 -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\src" -I"." -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc\\api" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\inc\\instances" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza\\fsp\\src\\bsp\\mcu\\rza3ul" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_gen" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_cfg\\fsp_cfg\\bsp" -I"C:\\Users\\nicul\\e2_studio\\workspace\\RZ_Feather\\RZA3UL_Feather_RPiCam_new\\rza_cfg\\fsp_cfg" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@aarch64-none-elf-gcc @"$@.in"

