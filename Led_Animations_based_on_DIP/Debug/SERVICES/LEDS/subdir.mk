################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SERVICES/LEDS/LEDS_Services.c 

OBJS += \
./SERVICES/LEDS/LEDS_Services.o 

C_DEPS += \
./SERVICES/LEDS/LEDS_Services.d 


# Each subdirectory must supply rules for building sources it contributes
SERVICES/LEDS/%.o: ../SERVICES/LEDS/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


