################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/ap/Listener/Listener.c \
../Core/ap/Listener/Listener_StopWatch.c \
../Core/ap/Listener/Listener_TimeWatch.c 

OBJS += \
./Core/ap/Listener/Listener.o \
./Core/ap/Listener/Listener_StopWatch.o \
./Core/ap/Listener/Listener_TimeWatch.o 

C_DEPS += \
./Core/ap/Listener/Listener.d \
./Core/ap/Listener/Listener_StopWatch.d \
./Core/ap/Listener/Listener_TimeWatch.d 


# Each subdirectory must supply rules for building sources it contributes
Core/ap/Listener/%.o Core/ap/Listener/%.su Core/ap/Listener/%.cyclo: ../Core/ap/Listener/%.c Core/ap/Listener/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"D:/STM32/250704_RTOS_StopWatch3/Core/driver/Button" -I"D:/STM32/250704_RTOS_StopWatch3/Core/driver/LedBar" -I"D:/STM32/250704_RTOS_StopWatch3/Core/driver" -I"D:/STM32/250704_RTOS_StopWatch3/Core/driver/LCD" -I"D:/STM32/250704_RTOS_StopWatch3/Core/driver/FND" -I"D:/STM32/250704_RTOS_StopWatch3/Core/ap/Controller" -I"D:/STM32/250704_RTOS_StopWatch3/Core/ap/Listener" -I"D:/STM32/250704_RTOS_StopWatch3/Core/ap/Model" -I"D:/STM32/250704_RTOS_StopWatch3/Core/ap/Presenter" -I"D:/STM32/250704_RTOS_StopWatch3/Core/Src" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-ap-2f-Listener

clean-Core-2f-ap-2f-Listener:
	-$(RM) ./Core/ap/Listener/Listener.cyclo ./Core/ap/Listener/Listener.d ./Core/ap/Listener/Listener.o ./Core/ap/Listener/Listener.su ./Core/ap/Listener/Listener_StopWatch.cyclo ./Core/ap/Listener/Listener_StopWatch.d ./Core/ap/Listener/Listener_StopWatch.o ./Core/ap/Listener/Listener_StopWatch.su ./Core/ap/Listener/Listener_TimeWatch.cyclo ./Core/ap/Listener/Listener_TimeWatch.d ./Core/ap/Listener/Listener_TimeWatch.o ./Core/ap/Listener/Listener_TimeWatch.su

.PHONY: clean-Core-2f-ap-2f-Listener

