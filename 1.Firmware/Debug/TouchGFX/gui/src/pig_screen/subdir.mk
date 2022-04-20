################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/pig_screen/PigPresenter.cpp \
../TouchGFX/gui/src/pig_screen/PigView.cpp 

OBJS += \
./TouchGFX/gui/src/pig_screen/PigPresenter.o \
./TouchGFX/gui/src/pig_screen/PigView.o 

CPP_DEPS += \
./TouchGFX/gui/src/pig_screen/PigPresenter.d \
./TouchGFX/gui/src/pig_screen/PigView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/pig_screen/%.o TouchGFX/gui/src/pig_screen/%.su: ../TouchGFX/gui/src/pig_screen/%.cpp TouchGFX/gui/src/pig_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../FATFS/App -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Include -I../Core/Inc -I../FATFS/Target -I../TouchGFX/App -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-pig_screen

clean-TouchGFX-2f-gui-2f-src-2f-pig_screen:
	-$(RM) ./TouchGFX/gui/src/pig_screen/PigPresenter.d ./TouchGFX/gui/src/pig_screen/PigPresenter.o ./TouchGFX/gui/src/pig_screen/PigPresenter.su ./TouchGFX/gui/src/pig_screen/PigView.d ./TouchGFX/gui/src/pig_screen/PigView.o ./TouchGFX/gui/src/pig_screen/PigView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-pig_screen

