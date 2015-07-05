################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../tetrominos/LBlock.cpp \
../tetrominos/LineBlock.cpp \
../tetrominos/ReverseLBlock.cpp \
../tetrominos/ReverseSBlock.cpp \
../tetrominos/SBlock.cpp \
../tetrominos/Square.cpp \
../tetrominos/TBlock.cpp \
../tetrominos/Tetromino.cpp 

OBJS += \
./tetrominos/LBlock.o \
./tetrominos/LineBlock.o \
./tetrominos/ReverseLBlock.o \
./tetrominos/ReverseSBlock.o \
./tetrominos/SBlock.o \
./tetrominos/Square.o \
./tetrominos/TBlock.o \
./tetrominos/Tetromino.o 

CPP_DEPS += \
./tetrominos/LBlock.d \
./tetrominos/LineBlock.d \
./tetrominos/ReverseLBlock.d \
./tetrominos/ReverseSBlock.d \
./tetrominos/SBlock.d \
./tetrominos/Square.d \
./tetrominos/TBlock.d \
./tetrominos/Tetromino.d 


# Each subdirectory must supply rules for building sources it contributes
tetrominos/%.o: ../tetrominos/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


