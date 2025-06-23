################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/ap/ap_main.c 

OBJS += \
./Src/ap/ap_main.o 

C_DEPS += \
./Src/ap/ap_main.d 


# Each subdirectory must supply rules for building sources it contributes
Src/ap/%.o Src/ap/%.su Src/ap/%.cyclo: ../Src/ap/%.c Src/ap/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32F411xE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"D:/STM32/250620_upcounter/Src/driver/GPIO" -I"D:/STM32/250620_upcounter/Src/driver/Led_Bar" -I"D:/STM32/250620_upcounter/Src/driver/SystemClock" -I"D:/STM32/250620_upcounter/Src/driver/FND" -I"D:/STM32/250620_upcounter/Src/driver/Button" -I"D:/STM32/250620_upcounter/Src/driver" -I"D:/STM32/250620_upcounter/Src/ap" -I"D:/STM32/250620_upcounter/Src/driver/TIM" -I"D:/STM32/250620_upcounter/Src/driver/Systick" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-ap

clean-Src-2f-ap:
	-$(RM) ./Src/ap/ap_main.cyclo ./Src/ap/ap_main.d ./Src/ap/ap_main.o ./Src/ap/ap_main.su

.PHONY: clean-Src-2f-ap

