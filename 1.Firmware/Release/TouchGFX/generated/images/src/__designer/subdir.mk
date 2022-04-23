################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small_pressed.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large_pressed.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Icons_Down_arrow_32.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Icons_Up_arrow_32.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_OFF.cpp \
../TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_ON.cpp 

OBJS += \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small_pressed.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large_pressed.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Down_arrow_32.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Up_arrow_32.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_OFF.o \
./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_ON.o 

CPP_DEPS += \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small_pressed.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large_pressed.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Down_arrow_32.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Up_arrow_32.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_OFF.d \
./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_ON.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/images/src/__designer/%.o TouchGFX/generated/images/src/__designer/%.su: ../TouchGFX/generated/images/src/__designer/%.cpp TouchGFX/generated/images/src/__designer/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../TouchGFX/App -I../TouchGFX/target/generated -I../TouchGFX/target -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../FATFS/Target -I../FATFS/App -I../Middlewares/Third_Party/FatFs/src -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__designer

clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__designer:
	-$(RM) ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small.d ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small.o ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small.su ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small_pressed.d ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small_pressed.o ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_Edge_small_pressed.su ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large.d ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large.o ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large.su ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large_pressed.d ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large_pressed.o ./TouchGFX/generated/images/src/__designer/image_Blue_Buttons_Round_large_pressed.su ./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Down_arrow_32.d ./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Down_arrow_32.o ./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Down_arrow_32.su ./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Up_arrow_32.d ./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Up_arrow_32.o ./TouchGFX/generated/images/src/__designer/image_Blue_Icons_Up_arrow_32.su ./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_OFF.d ./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_OFF.o ./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_OFF.su ./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_ON.d ./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_ON.o ./TouchGFX/generated/images/src/__designer/image_Blue_Togglebars_Toggle_round_small_button_ON.su

.PHONY: clean-TouchGFX-2f-generated-2f-images-2f-src-2f-__designer

