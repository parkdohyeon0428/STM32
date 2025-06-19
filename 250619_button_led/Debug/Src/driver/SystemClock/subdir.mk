################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/driver/SystemClock/SystemClock.c 

OBJS += \
./Src/driver/SystemClock/SystemClock.o 

C_DEPS += \
./Src/driver/SystemClock/SystemClock.d 


# Each subdirectory must supply rules for building sources it contributes
Src/driver/SystemClock/%.o Src/driver/SystemClock/%.su Src/driver/SystemClock/%.cyclo: ../Src/driver/SystemClock/%.c Src/driver/SystemClock/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"D:/STM32/250619_button_led/Src/driver/GPIO" -I"D:/STM32/250619_button_led/Src/driver/Led_Bar" -I"D:/STM32/250619_button_led/Src/driver/SystemClock" -I"D:/STM32/250619_button_led/Src/ap" -I"D:/STM32/250619_button_led/Src/driver/Button" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-driver-2f-SystemClock

clean-Src-2f-driver-2f-SystemClock:
	-$(RM) ./Src/driver/SystemClock/SystemClock.cyclo ./Src/driver/SystemClock/SystemClock.d ./Src/driver/SystemClock/SystemClock.o ./Src/driver/SystemClock/SystemClock.su

.PHONY: clean-Src-2f-driver-2f-SystemClock

