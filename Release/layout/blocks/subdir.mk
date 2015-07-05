################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../layout/blocks/BlockDrawingFunctions.cpp \
../layout/blocks/GridBlock.cpp 

OBJS += \
./layout/blocks/BlockDrawingFunctions.o \
./layout/blocks/GridBlock.o 

CPP_DEPS += \
./layout/blocks/BlockDrawingFunctions.d \
./layout/blocks/GridBlock.d 


# Each subdirectory must supply rules for building sources it contributes
layout/blocks/%.o: ../layout/blocks/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


