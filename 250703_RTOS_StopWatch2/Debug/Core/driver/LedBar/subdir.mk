################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/driver/LedBar/LedBar.c 

OBJS += \
./Core/driver/LedBar/LedBar.o 

C_DEPS += \
./Core/driver/LedBar/LedBar.d 


# Each subdirectory must supply rules for building sources it contributes
Core/driver/LedBar/%.o Core/driver/LedBar/%.su Core/driver/LedBar/%.cyclo: ../Core/driver/LedBar/%.c Core/driver/LedBar/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"D:/STM32/250703_RTOS_StopWatch2/Core/driver/Button" -I"D:/STM32/250703_RTOS_StopWatch2/Core/driver/LedBar" -I"D:/STM32/250703_RTOS_StopWatch2/Core/driver" -I"D:/STM32/250703_RTOS_StopWatch2/Core/driver/LCD" -I"D:/STM32/250703_RTOS_StopWatch2/Core/driver/FND" -I"D:/STM32/250703_RTOS_StopWatch2/Core/ap/Controller" -I"D:/STM32/250703_RTOS_StopWatch2/Core/ap/Listener" -I"D:/STM32/250703_RTOS_StopWatch2/Core/ap/Model" -I"D:/STM32/250703_RTOS_StopWatch2/Core/ap/Presenter" -I"D:/STM32/250703_RTOS_StopWatch2/Core/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-driver-2f-LedBar

clean-Core-2f-driver-2f-LedBar:
	-$(RM) ./Core/driver/LedBar/LedBar.cyclo ./Core/driver/LedBar/LedBar.d ./Core/driver/LedBar/LedBar.o ./Core/driver/LedBar/LedBar.su

.PHONY: clean-Core-2f-driver-2f-LedBar

