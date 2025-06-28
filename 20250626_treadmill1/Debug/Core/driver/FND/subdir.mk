################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/driver/FND/FND.c 

OBJS += \
./Core/driver/FND/FND.o 

C_DEPS += \
./Core/driver/FND/FND.d 


# Each subdirectory must supply rules for building sources it contributes
Core/driver/FND/%.o Core/driver/FND/%.su Core/driver/FND/%.cyclo: ../Core/driver/FND/%.c Core/driver/FND/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32/20250626_treadmill1/Core/ap" -I"D:/STM32/20250626_treadmill1/Core/driver/Button" -I"D:/STM32/20250626_treadmill1/Core/driver/FND" -I"D:/STM32/20250626_treadmill1/Core/driver/LedBar" -I"D:/STM32/20250626_treadmill1/Core/ap/inc" -I"D:/STM32/20250626_treadmill1/Core/ap/src" -I"D:/STM32/20250626_treadmill1/Core/driver" -I"D:/STM32/20250626_treadmill1/Core/driver/LCD" -I"D:/STM32/20250626_treadmill1/Core" -I"D:/STM32/20250626_treadmill1/Core/driver/Buzzer" -I"D:/STM32/20250626_treadmill1/Core/driver/DC_Motor" -I"D:/STM32/20250626_treadmill1/Core/driver/UltraSonic" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-driver-2f-FND

clean-Core-2f-driver-2f-FND:
	-$(RM) ./Core/driver/FND/FND.cyclo ./Core/driver/FND/FND.d ./Core/driver/FND/FND.o ./Core/driver/FND/FND.su

.PHONY: clean-Core-2f-driver-2f-FND

