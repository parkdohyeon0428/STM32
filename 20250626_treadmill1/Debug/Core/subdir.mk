################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Controller.c 

OBJS += \
./Core/Controller.o 

C_DEPS += \
./Core/Controller.d 


# Each subdirectory must supply rules for building sources it contributes
Core/%.o Core/%.su Core/%.cyclo: ../Core/%.c Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32/20250626_treadmill1/Core/ap" -I"D:/STM32/20250626_treadmill1/Core/driver/Button" -I"D:/STM32/20250626_treadmill1/Core/driver/FND" -I"D:/STM32/20250626_treadmill1/Core/driver/LedBar" -I"D:/STM32/20250626_treadmill1/Core/ap/inc" -I"D:/STM32/20250626_treadmill1/Core/ap/src" -I"D:/STM32/20250626_treadmill1/Core/driver" -I"D:/STM32/20250626_treadmill1/Core/driver/LCD" -I"D:/STM32/20250626_treadmill1/Core" -I"D:/STM32/20250626_treadmill1/Core/driver/Buzzer" -I"D:/STM32/20250626_treadmill1/Core/driver/DC_Motor" -I"D:/STM32/20250626_treadmill1/Core/driver/UltraSonic" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core

clean-Core:
	-$(RM) ./Core/Controller.cyclo ./Core/Controller.d ./Core/Controller.o ./Core/Controller.su

.PHONY: clean-Core

