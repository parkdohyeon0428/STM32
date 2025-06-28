################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32f411retx.s 

OBJS += \
./Core/Startup/startup_stm32f411retx.o 

S_DEPS += \
./Core/Startup/startup_stm32f411retx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"D:/STM32/250626_Treadmill4/Core/ap" -I"D:/STM32/250626_Treadmill4/Core/driver" -I"D:/STM32/250626_Treadmill4/Core/driver/Button" -I"D:/STM32/250626_Treadmill4/Core/driver/FND" -I"D:/STM32/250626_Treadmill4/Core/driver/LedBar" -I"D:/STM32/250626_Treadmill4/Core/ap/src" -I"D:/STM32/250626_Treadmill4/Core/driver/LCD" -I"D:/STM32/250626_Treadmill4/Core/Src" -I"D:/STM32/250626_Treadmill4/Core/Inc" -I"D:/STM32/250626_Treadmill4/Core/Startup" -I"D:/STM32/250626_Treadmill4/Core/ap/inc" -I"D:/STM32/250626_Treadmill4/Core/driver/Buzzer" -I"D:/STM32/250626_Treadmill4/Core/driver/DC_Motor" -I"D:/STM32/250626_Treadmill4/Core/driver/UltraSonic" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32f411retx.d ./Core/Startup/startup_stm32f411retx.o

.PHONY: clean-Core-2f-Startup

