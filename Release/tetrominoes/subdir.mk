################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tetrominoes/Square.cpp \
../tetrominoes/Tetromino.cpp 

OBJS += \
./tetrominoes/Square.o \
./tetrominoes/Tetromino.o 

CPP_DEPS += \
./tetrominoes/Square.d \
./tetrominoes/Tetromino.d 


# Each subdirectory must supply rules for building sources it contributes
tetrominoes/%.o: ../tetrominoes/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


