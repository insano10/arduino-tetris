################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../controls/keyboard/NameEntryBox.cpp \
../controls/keyboard/OnScreenKey.cpp \
../controls/keyboard/OnScreenKeyboard.cpp 

OBJS += \
./controls/keyboard/NameEntryBox.o \
./controls/keyboard/OnScreenKey.o \
./controls/keyboard/OnScreenKeyboard.o 

CPP_DEPS += \
./controls/keyboard/NameEntryBox.d \
./controls/keyboard/OnScreenKey.d \
./controls/keyboard/OnScreenKeyboard.d 


# Each subdirectory must supply rules for building sources it contributes
controls/keyboard/%.o: ../controls/keyboard/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


