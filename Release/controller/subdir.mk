################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../controller/GridMaster.cpp \
../controller/StatsMaster.cpp \
../controller/TetrominoGenerator.cpp 

OBJS += \
./controller/GridMaster.o \
./controller/StatsMaster.o \
./controller/TetrominoGenerator.o 

CPP_DEPS += \
./controller/GridMaster.d \
./controller/StatsMaster.d \
./controller/TetrominoGenerator.d 


# Each subdirectory must supply rules for building sources it contributes
controller/%.o: ../controller/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


