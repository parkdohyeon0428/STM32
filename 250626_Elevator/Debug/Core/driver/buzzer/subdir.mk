################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/driver/buzzer/buzzer.c 

OBJS += \
./Core/driver/buzzer/buzzer.o 

C_DEPS += \
./Core/driver/buzzer/buzzer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/driver/buzzer/%.o Core/driver/buzzer/%.su Core/driver/buzzer/%.cyclo: ../Core/driver/buzzer/%.c Core/driver/buzzer/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32/250626_Elevator/Core/ap" -I"D:/STM32/250626_Elevator/Core/driver" -I"D:/STM32/250626_Elevator/Core/driver/Button" -I"D:/STM32/250626_Elevator/Core/driver/FND" -I"D:/STM32/250626_Elevator/Core/driver/LedBar" -I"D:/STM32/250626_Elevator/Core/ap/src" -I"D:/STM32/250626_Elevator/Core/driver/LCD" -I"D:/STM32/250626_Elevator/Core/Src" -I"D:/STM32/250626_Elevator/Core/Startup" -I"D:/STM32/250626_Elevator/Core/ap/inc" -I"D:/STM32/250626_Elevator/Core/driver/buzzer" -I"D:/STM32/250626_Elevator/Core/driver/motor" -I"D:/STM32/250626_Elevator/Core/driver/Ultrasonic" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-driver-2f-buzzer

clean-Core-2f-driver-2f-buzzer:
	-$(RM) ./Core/driver/buzzer/buzzer.cyclo ./Core/driver/buzzer/buzzer.d ./Core/driver/buzzer/buzzer.o ./Core/driver/buzzer/buzzer.su

.PHONY: clean-Core-2f-driver-2f-buzzer

