################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f411retx.s 

OBJS += \
./Startup/startup_stm32f411retx.o 

S_DEPS += \
./Startup/startup_stm32f411retx.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -DSTM32F411xE -c -I"D:/STM32/250620_watch_stopwatch/Src/ap" -I"D:/STM32/250620_watch_stopwatch/Src/driver" -I"D:/STM32/250620_watch_stopwatch/Src/driver/Button" -I"D:/STM32/250620_watch_stopwatch/Src/driver/FND" -I"D:/STM32/250620_watch_stopwatch/Src/driver/GPIO" -I"D:/STM32/250620_watch_stopwatch/Src/driver/Led_Bar" -I"D:/STM32/250620_watch_stopwatch/Src/driver/SystemClock" -I"D:/STM32/250620_watch_stopwatch/Src/driver/Systick" -I"D:/STM32/250620_watch_stopwatch/Src/driver/TIM" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Startup

clean-Startup:
	-$(RM) ./Startup/startup_stm32f411retx.d ./Startup/startup_stm32f411retx.o

.PHONY: clean-Startup

