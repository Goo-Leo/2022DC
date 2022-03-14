################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/gui/src/details_screen/DetailsPresenter.cpp \
../TouchGFX/gui/src/details_screen/DetailsView.cpp 

OBJS += \
./TouchGFX/gui/src/details_screen/DetailsPresenter.o \
./TouchGFX/gui/src/details_screen/DetailsView.o 

CPP_DEPS += \
./TouchGFX/gui/src/details_screen/DetailsPresenter.d \
./TouchGFX/gui/src/details_screen/DetailsView.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/gui/src/details_screen/%.o TouchGFX/gui/src/details_screen/%.su: ../TouchGFX/gui/src/details_screen/%.cpp TouchGFX/gui/src/details_screen/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/ARM/DSP/Inc -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-gui-2f-src-2f-details_screen

clean-TouchGFX-2f-gui-2f-src-2f-details_screen:
	-$(RM) ./TouchGFX/gui/src/details_screen/DetailsPresenter.d ./TouchGFX/gui/src/details_screen/DetailsPresenter.o ./TouchGFX/gui/src/details_screen/DetailsPresenter.su ./TouchGFX/gui/src/details_screen/DetailsView.d ./TouchGFX/gui/src/details_screen/DetailsView.o ./TouchGFX/gui/src/details_screen/DetailsView.su

.PHONY: clean-TouchGFX-2f-gui-2f-src-2f-details_screen

