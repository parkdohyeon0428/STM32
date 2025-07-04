################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/driver/DHT11/DHT11.c 

OBJS += \
./Core/driver/DHT11/DHT11.o 

C_DEPS += \
./Core/driver/DHT11/DHT11.d 


# Each subdirectory must supply rules for building sources it contributes
Core/driver/DHT11/%.o Core/driver/DHT11/%.su Core/driver/DHT11/%.cyclo: ../Core/driver/DHT11/%.c Core/driver/DHT11/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"D:/STM32/250704_RTOS_Total_Module/Core/driver/Button" -I"D:/STM32/250704_RTOS_Total_Module/Core/driver/LedBar" -I"D:/STM32/250704_RTOS_Total_Module/Core/driver/LCD" -I"D:/STM32/250704_RTOS_Total_Module/Core/driver/FND" -I"D:/STM32/250704_RTOS_Total_Module/Core/ap/Controller" -I"D:/STM32/250704_RTOS_Total_Module/Core/ap/Listener" -I"D:/STM32/250704_RTOS_Total_Module/Core/ap/Model" -I"D:/STM32/250704_RTOS_Total_Module/Core/ap/Presenter" -I"D:/STM32/250704_RTOS_Total_Module/Core/driver/DHT11" -I"D:/STM32/250704_RTOS_Total_Module/Core/driver/UltraSonic" -I"D:/STM32/250704_RTOS_Total_Module/Core/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-driver-2f-DHT11

clean-Core-2f-driver-2f-DHT11:
	-$(RM) ./Core/driver/DHT11/DHT11.cyclo ./Core/driver/DHT11/DHT11.d ./Core/driver/DHT11/DHT11.o ./Core/driver/DHT11/DHT11.su

.PHONY: clean-Core-2f-driver-2f-DHT11

