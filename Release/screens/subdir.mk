################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../screens/GameOverScreen.cpp \
../screens/LandingScreen.cpp \
../screens/NameEntryScreen.cpp \
../screens/PlayScreen.cpp \
../screens/Screen.cpp 

OBJS += \
./screens/GameOverScreen.o \
./screens/LandingScreen.o \
./screens/NameEntryScreen.o \
./screens/PlayScreen.o \
./screens/Screen.o 

CPP_DEPS += \
./screens/GameOverScreen.d \
./screens/LandingScreen.d \
./screens/NameEntryScreen.d \
./screens/PlayScreen.d \
./screens/Screen.d 


# Each subdirectory must supply rules for building sources it contributes
screens/%.o: ../screens/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -Os -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


