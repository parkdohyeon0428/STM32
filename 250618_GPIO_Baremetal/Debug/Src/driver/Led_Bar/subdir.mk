################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/driver/Led_Bar/LED_Bar.c 

OBJS += \
./Src/driver/Led_Bar/LED_Bar.o 

C_DEPS += \
./Src/driver/Led_Bar/LED_Bar.d 


# Each subdirectory must supply rules for building sources it contributes
Src/driver/Led_Bar/%.o Src/driver/Led_Bar/%.su Src/driver/Led_Bar/%.cyclo: ../Src/driver/Led_Bar/%.c Src/driver/Led_Bar/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I../Inc -I"C:/Users/user/Desktop/stm32/STM32/250618_GPIO_Baremetal/Src/driver/Led_Bar" -I"C:/Users/user/Desktop/stm32/STM32/250618_GPIO_Baremetal/Src/driver/GPIO" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Src-2f-driver-2f-Led_Bar

clean-Src-2f-driver-2f-Led_Bar:
	-$(RM) ./Src/driver/Led_Bar/LED_Bar.cyclo ./Src/driver/Led_Bar/LED_Bar.d ./Src/driver/Led_Bar/LED_Bar.o ./Src/driver/Led_Bar/LED_Bar.su

.PHONY: clean-Src-2f-driver-2f-Led_Bar

