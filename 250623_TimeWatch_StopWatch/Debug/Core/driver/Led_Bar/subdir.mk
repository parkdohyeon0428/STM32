################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/driver/Led_Bar/LED_Bar.c 

OBJS += \
./Core/driver/Led_Bar/LED_Bar.o 

C_DEPS += \
./Core/driver/Led_Bar/LED_Bar.d 


# Each subdirectory must supply rules for building sources it contributes
Core/driver/Led_Bar/%.o Core/driver/Led_Bar/%.su Core/driver/Led_Bar/%.cyclo: ../Core/driver/Led_Bar/%.c Core/driver/Led_Bar/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32/250623_TimeWatch_StopWatch/Core/ap" -I"D:/STM32/250623_TimeWatch_StopWatch/Core/driver" -I"D:/STM32/250623_TimeWatch_StopWatch/Core/driver/Button" -I"D:/STM32/250623_TimeWatch_StopWatch/Core/driver/FND" -I"D:/STM32/250623_TimeWatch_StopWatch/Core/driver/Led_Bar" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-driver-2f-Led_Bar

clean-Core-2f-driver-2f-Led_Bar:
	-$(RM) ./Core/driver/Led_Bar/LED_Bar.cyclo ./Core/driver/Led_Bar/LED_Bar.d ./Core/driver/Led_Bar/LED_Bar.o ./Core/driver/Led_Bar/LED_Bar.su

.PHONY: clean-Core-2f-driver-2f-Led_Bar

