################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include script/subdir.mk
-include rza_gen/subdir.mk
-include rza/fsp/src/r_scif_uart/subdir.mk
-include rza/fsp/src/r_mmu/subdir.mk
-include rza/fsp/src/r_ioport/subdir.mk
-include rza/fsp/src/bsp/mcu/rza3ul/subdir.mk
-include rza/fsp/src/bsp/mcu/all/subdir.mk
-include rza/fsp/src/bsp/cmsis/Device/RENESAS/Source/subdir.mk
-include rza/board/rza3ul_feather/subdir.mk
-include ipl/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_UPPER_DEPS)),)
-include $(CC_UPPER_DEPS)
endif
ifneq ($(strip $(C++M_UPPER_DEPS)),)
-include $(C++M_UPPER_DEPS)
endif
ifneq ($(strip $(C++_UPPER_DEPS)),)
-include $(C++_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_UPPER_DEPS)),)
-include $(CPP_UPPER_DEPS)
endif
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_UPPER_DEPS)),)
-include $(SRC_UPPER_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(PP_UPPER_DEPS)),)
-include $(PP_UPPER_DEPS)
endif
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif
ifneq ($(strip $(CXXM_DEPS)),)
-include $(CXXM_DEPS)
endif
ifneq ($(strip $(JMP_UPPER_DEPS)),)
-include $(JMP_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif
ifneq ($(strip $(CXX_UPPER_DEPS)),)
-include $(CXX_UPPER_DEPS)
endif
ifneq ($(strip $(CCM_DEPS)),)
-include $(CCM_DEPS)
endif
ifneq ($(strip $(P_UPPER_DEPS)),)
-include $(P_UPPER_DEPS)
endif
ifneq ($(strip $(CXXM_UPPER_DEPS)),)
-include $(CXXM_UPPER_DEPS)
endif
ifneq ($(strip $(FSY_UPPER_DEPS)),)
-include $(FSY_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CCM_UPPER_DEPS)),)
-include $(CCM_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C++M_DEPS)),)
-include $(C++M_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
RZA3UL_Feather_ExtRAM.srec \

SECONDARY_SIZE += \
RZA3UL_Feather_ExtRAM.siz \


# All Target
all: RZA3UL_Feather_ExtRAM.elf secondary-outputs

# Tool invocations
RZA3UL_Feather_ExtRAM.elf: $(OBJS) $(USER_OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(LINKER_SCRIPT)
	$(file > RZA3UL_Feather_ExtRAM.elf.in,-mcpu=cortex-a55 -mcmodel=large -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -g -o "RZA3UL_Feather_ExtRAM.elf" $(OBJS) $(USER_OBJS) -T "C:\\Users\\nicul\\e2_studio\\workspace\\fsp2\\RZ_Feather\\RZA3UL_Feather_ExtRAM\\script\\custom.ld"  -Wl,--start-group -Wl,--end-group -nostartfiles -Xlinker --gc-sections -Wl,-Map,"RZA3UL_Feather_ExtRAM.map")
	@echo Building target: $@ && aarch64-none-elf-g++ @"RZA3UL_Feather_ExtRAM.elf.in"
RZA3UL_Feather_ExtRAM.srec: RZA3UL_Feather_ExtRAM.elf
	aarch64-none-elf-objcopy -O srec "RZA3UL_Feather_ExtRAM.elf"  "RZA3UL_Feather_ExtRAM.srec"
RZA3UL_Feather_ExtRAM.siz: RZA3UL_Feather_ExtRAM.elf
	aarch64-none-elf-size --format=berkeley "RZA3UL_Feather_ExtRAM.elf"
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(CC_UPPER_DEPS)  $(C++M_UPPER_DEPS)  $(C++_UPPER_DEPS)  $(CPP_UPPER_DEPS)  $(FSY_DEPS)  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(SRC_UPPER_DEPS)  $(S_DEPS)  $(PP_UPPER_DEPS)  $(P_DEPS)  $(CXXM_DEPS)  $(JMP_UPPER_DEPS)  $(ASM_UPPER_DEPS)  $(SX_UPPER_DEPS)  $(CXX_DEPS)  $(JMP_DEPS)  $(CXX_UPPER_DEPS)  $(CCM_DEPS)  $(P_UPPER_DEPS)  $(LST)  $(CXXM_UPPER_DEPS)  $(FSY_UPPER_DEPS)  $(C_DEPS)  $(CCM_UPPER_DEPS)  $(SRC_DEPS)  $(PP_DEPS)  $(CC_DEPS)  $(SX_DEPS)  $(C++_DEPS)  $(OBJS)  $(SECONDARY_FLASH)  $(ASM_DEPS)  $(S_UPPER_DEPS)  $(MAP)  $(C++M_DEPS)  $(CPP_DEPS) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  RZA3UL_Feather_ExtRAM.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents 

-include ../makefile.targets
