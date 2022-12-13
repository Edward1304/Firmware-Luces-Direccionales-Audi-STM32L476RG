################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Source/hal_nucleo_l476.c \
../Core/Source/main.c \
../Core/Source/systick.c 

OBJS += \
./Core/Source/hal_nucleo_l476.o \
./Core/Source/main.o \
./Core/Source/systick.o 

C_DEPS += \
./Core/Source/hal_nucleo_l476.d \
./Core/Source/main.d \
./Core/Source/systick.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Source/%.o Core/Source/%.su: ../Core/Source/%.c Core/Source/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32L4 -DSTM32 -DNUCLEO_L476RG -DSTM32L476RGTx -c -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Application/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Core/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Drivers/CMSIS/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Drivers/STM32L4xx_LL_Drivers/Inc" -includestdint.h -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Source

clean-Core-2f-Source:
	-$(RM) ./Core/Source/hal_nucleo_l476.d ./Core/Source/hal_nucleo_l476.o ./Core/Source/hal_nucleo_l476.su ./Core/Source/main.d ./Core/Source/main.o ./Core/Source/main.su ./Core/Source/systick.d ./Core/Source/systick.o ./Core/Source/systick.su

.PHONY: clean-Core-2f-Source

