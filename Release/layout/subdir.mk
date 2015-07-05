################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../layout/BackgroundDrawingFunctions.cpp \
../layout/Grid.cpp 

OBJS += \
./layout/BackgroundDrawingFunctions.o \
./layout/Grid.o 

CPP_DEPS += \
./layout/BackgroundDrawingFunctions.d \
./layout/Grid.d 


# Each subdirectory must supply rules for building sources it contributes
layout/%.o: ../layout/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


