################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/driver/Systick/Systick.c 

OBJS += \
./Src/driver/Systick/Systick.o 

C_DEPS += \
./Src/driver/Systick/Systick.d 


# Each subdirectory must supply rules for building sources it contributes
Src/driver/Systick/%.o Src/driver/Systick/%.su Src/driver/Systick/%.cyclo: ../Src/driver/Systick/%.c Src/driver/Systick/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411xE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/GPIO" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/Led_Bar" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/SystemClock" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/FND" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/Button" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/ap" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/TIM" -I"C:/Users/user/Desktop/stm32/STM32/250620_upcounter/Src/driver/Systick" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-driver-2f-Systick

clean-Src-2f-driver-2f-Systick:
	-$(RM) ./Src/driver/Systick/Systick.cyclo ./Src/driver/Systick/Systick.d ./Src/driver/Systick/Systick.o ./Src/driver/Systick/Systick.su

.PHONY: clean-Src-2f-driver-2f-Systick

