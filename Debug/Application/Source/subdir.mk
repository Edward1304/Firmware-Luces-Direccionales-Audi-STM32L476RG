################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Source/app_nucleo_l476.c 

OBJS += \
./Application/Source/app_nucleo_l476.o 

C_DEPS += \
./Application/Source/app_nucleo_l476.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Source/%.o Application/Source/%.su: ../Application/Source/%.c Application/Source/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32L4 -DSTM32 -DNUCLEO_L476RG -DSTM32L476RGTx -c -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Application/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Core/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Drivers/CMSIS/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Drivers/CMSIS/Device/ST/STM32L4xx/Include" -I"C:/Users/Juan Felipe/OneDrive - Universidad Nacional de Colombia/Escritorio/Workspace/Led_Direccionales_C/Drivers/STM32L4xx_LL_Drivers/Inc" -includestdint.h -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-Source

clean-Application-2f-Source:
	-$(RM) ./Application/Source/app_nucleo_l476.d ./Application/Source/app_nucleo_l476.o ./Application/Source/app_nucleo_l476.su

.PHONY: clean-Application-2f-Source

