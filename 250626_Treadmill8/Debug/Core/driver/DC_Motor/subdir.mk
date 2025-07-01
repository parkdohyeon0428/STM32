################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/driver/DC_Motor/DC_Motor.c 

OBJS += \
./Core/driver/DC_Motor/DC_Motor.o 

C_DEPS += \
./Core/driver/DC_Motor/DC_Motor.d 


# Each subdirectory must supply rules for building sources it contributes
Core/driver/DC_Motor/%.o Core/driver/DC_Motor/%.su Core/driver/DC_Motor/%.cyclo: ../Core/driver/DC_Motor/%.c Core/driver/DC_Motor/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32/250626_Treadmill8/Core/ap" -I"D:/STM32/250626_Treadmill8/Core/driver" -I"D:/STM32/250626_Treadmill8/Core/driver/Button" -I"D:/STM32/250626_Treadmill8/Core/driver/FND" -I"D:/STM32/250626_Treadmill8/Core/driver/LedBar" -I"D:/STM32/250626_Treadmill8/Core/ap/src" -I"D:/STM32/250626_Treadmill8/Core/driver/LCD" -I"D:/STM32/250626_Treadmill8/Core/Src" -I"D:/STM32/250626_Treadmill8/Core/Startup" -I"D:/STM32/250626_Treadmill8/Core/ap/inc" -I"D:/STM32/250626_Treadmill8/Core/driver/Buzzer" -I"D:/STM32/250626_Treadmill8/Core/driver/DC_Motor" -I"D:/STM32/250626_Treadmill8/Core/driver/UltraSonic" -I"D:/STM32/250626_Treadmill8/Core/driver/DHT11" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-driver-2f-DC_Motor

clean-Core-2f-driver-2f-DC_Motor:
	-$(RM) ./Core/driver/DC_Motor/DC_Motor.cyclo ./Core/driver/DC_Motor/DC_Motor.d ./Core/driver/DC_Motor/DC_Motor.o ./Core/driver/DC_Motor/DC_Motor.su

.PHONY: clean-Core-2f-driver-2f-DC_Motor

