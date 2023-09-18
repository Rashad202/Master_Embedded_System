################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KPAD/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
2-LCD_KPAD.lss \

FLASH_IMAGE += \
2-LCD_KPAD.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: 2-LCD_KPAD.elf secondary-outputs

# Tool invocations
2-LCD_KPAD.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,2-LCD_KPAD.map -mmcu=atmega32 -o "2-LCD_KPAD.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

2-LCD_KPAD.lss: 2-LCD_KPAD.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S 2-LCD_KPAD.elf  >"2-LCD_KPAD.lss"
	@echo 'Finished building: $@'
	@echo ' '

2-LCD_KPAD.hex: 2-LCD_KPAD.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex 2-LCD_KPAD.elf  "2-LCD_KPAD.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: 2-LCD_KPAD.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 2-LCD_KPAD.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) 2-LCD_KPAD.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
