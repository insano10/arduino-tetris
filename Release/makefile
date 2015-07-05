################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include utils/subdir.mk
-include tetrominos/subdir.mk
-include screens/subdir.mk
-include lib/subdir.mk
-include layout/blocks/subdir.mk
-include layout/subdir.mk
-include data/subdir.mk
-include controls/keyboard/subdir.mk
-include controls/subdir.mk
-include controller/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Tetris.lss \

FLASH_IMAGE += \
Tetris.hex \

EEPROM_IMAGE += \
Tetris.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Tetris.elf secondary-outputs

# Tool invocations
Tetris.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C++ Linker'
	avr-g++ -Wl,-Map,Tetris.map,--cref -mmcu=atmega2560 -o "Tetris.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Tetris.lss: Tetris.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Tetris.elf  >"Tetris.lss"
	@echo 'Finished building: $@'
	@echo ' '

Tetris.hex: Tetris.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -O ihex Tetris.elf  "Tetris.hex"
	@echo 'Finished building: $@'
	@echo ' '

Tetris.eep: Tetris.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Tetris.elf  "Tetris.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Tetris.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega2560 Tetris.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EEPROM_IMAGE)$(ELFS)$(FLASH_IMAGE)$(LSS)$(S_DEPS)$(CXX_DEPS)$(S_UPPER_DEPS)$(C++_DEPS)$(ASM_DEPS)$(CC_DEPS)$(CPP_DEPS)$(C_UPPER_DEPS)$(SIZEDUMMY) Tetris.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
