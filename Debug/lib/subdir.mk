################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../lib/FlashFileSystem.cpp \
../lib/HardwareSerial.cpp \
../lib/HersheyCyrillic.cpp \
../lib/HersheyFonts.cpp \
../lib/HersheyGothic.cpp \
../lib/HersheyGreek.cpp \
../lib/HersheyRowman.cpp \
../lib/HersheyScript.cpp \
../lib/HersheySymbols.cpp \
../lib/HersheyTimes.cpp \
../lib/Keyboard.cpp \
../lib/Print.cpp \
../lib/SubPGraphics.cpp \
../lib/WRandom.cpp \
../lib/bmp.cpp \
../lib/startup.cpp 

C_SRCS += \
../lib/calibrate.c \
../lib/dataflash.c \
../lib/font.c \
../lib/graphics.c \
../lib/image_interface.c \
../lib/oled_slide.c \
../lib/oled_stealth.c \
../lib/touchscreen.c \
../lib/usart.c \
../lib/wiring.c \
../lib/wiring_analog.c \
../lib/wiring_digital.c \
../lib/wiring_serial.c 

OBJS += \
./lib/FlashFileSystem.o \
./lib/HardwareSerial.o \
./lib/HersheyCyrillic.o \
./lib/HersheyFonts.o \
./lib/HersheyGothic.o \
./lib/HersheyGreek.o \
./lib/HersheyRowman.o \
./lib/HersheyScript.o \
./lib/HersheySymbols.o \
./lib/HersheyTimes.o \
./lib/Keyboard.o \
./lib/Print.o \
./lib/SubPGraphics.o \
./lib/WRandom.o \
./lib/bmp.o \
./lib/calibrate.o \
./lib/dataflash.o \
./lib/font.o \
./lib/graphics.o \
./lib/image_interface.o \
./lib/oled_slide.o \
./lib/oled_stealth.o \
./lib/startup.o \
./lib/touchscreen.o \
./lib/usart.o \
./lib/wiring.o \
./lib/wiring_analog.o \
./lib/wiring_digital.o \
./lib/wiring_serial.o 

C_DEPS += \
./lib/calibrate.d \
./lib/dataflash.d \
./lib/font.d \
./lib/graphics.d \
./lib/image_interface.d \
./lib/oled_slide.d \
./lib/oled_stealth.d \
./lib/touchscreen.d \
./lib/usart.d \
./lib/wiring.d \
./lib/wiring_analog.d \
./lib/wiring_digital.d \
./lib/wiring_serial.d 

CPP_DEPS += \
./lib/FlashFileSystem.d \
./lib/HardwareSerial.d \
./lib/HersheyCyrillic.d \
./lib/HersheyFonts.d \
./lib/HersheyGothic.d \
./lib/HersheyGreek.d \
./lib/HersheyRowman.d \
./lib/HersheyScript.d \
./lib/HersheySymbols.d \
./lib/HersheyTimes.d \
./lib/Keyboard.d \
./lib/Print.d \
./lib/SubPGraphics.d \
./lib/WRandom.d \
./lib/bmp.d \
./lib/startup.d 


# Each subdirectory must supply rules for building sources it contributes
lib/%.o: ../lib/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: AVR C++ Compiler'
	avr-g++ -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -funsigned-char -funsigned-bitfields -fno-exceptions -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

lib/%.o: ../lib/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega2560 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


