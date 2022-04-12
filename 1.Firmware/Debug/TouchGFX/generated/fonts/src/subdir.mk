################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/fonts/src/ApplicationFontProvider.cpp \
../TouchGFX/generated/fonts/src/CachedFont.cpp \
../TouchGFX/generated/fonts/src/FontCache.cpp \
../TouchGFX/generated/fonts/src/Font_verdana_10_4bpp_0.cpp \
../TouchGFX/generated/fonts/src/Font_verdanab_16_4bpp_0.cpp \
../TouchGFX/generated/fonts/src/Font_verdanab_25_4bpp_0.cpp \
../TouchGFX/generated/fonts/src/Font_verdanab_35_4bpp_0.cpp \
../TouchGFX/generated/fonts/src/GeneratedFont.cpp \
../TouchGFX/generated/fonts/src/Kerning_verdana_10_4bpp.cpp \
../TouchGFX/generated/fonts/src/Kerning_verdanab_16_4bpp.cpp \
../TouchGFX/generated/fonts/src/Kerning_verdanab_25_4bpp.cpp \
../TouchGFX/generated/fonts/src/Kerning_verdanab_35_4bpp.cpp \
../TouchGFX/generated/fonts/src/Table_verdana_10_4bpp.cpp \
../TouchGFX/generated/fonts/src/Table_verdanab_16_4bpp.cpp \
../TouchGFX/generated/fonts/src/Table_verdanab_25_4bpp.cpp \
../TouchGFX/generated/fonts/src/Table_verdanab_35_4bpp.cpp \
../TouchGFX/generated/fonts/src/UnmappedDataFont.cpp 

OBJS += \
./TouchGFX/generated/fonts/src/ApplicationFontProvider.o \
./TouchGFX/generated/fonts/src/CachedFont.o \
./TouchGFX/generated/fonts/src/FontCache.o \
./TouchGFX/generated/fonts/src/Font_verdana_10_4bpp_0.o \
./TouchGFX/generated/fonts/src/Font_verdanab_16_4bpp_0.o \
./TouchGFX/generated/fonts/src/Font_verdanab_25_4bpp_0.o \
./TouchGFX/generated/fonts/src/Font_verdanab_35_4bpp_0.o \
./TouchGFX/generated/fonts/src/GeneratedFont.o \
./TouchGFX/generated/fonts/src/Kerning_verdana_10_4bpp.o \
./TouchGFX/generated/fonts/src/Kerning_verdanab_16_4bpp.o \
./TouchGFX/generated/fonts/src/Kerning_verdanab_25_4bpp.o \
./TouchGFX/generated/fonts/src/Kerning_verdanab_35_4bpp.o \
./TouchGFX/generated/fonts/src/Table_verdana_10_4bpp.o \
./TouchGFX/generated/fonts/src/Table_verdanab_16_4bpp.o \
./TouchGFX/generated/fonts/src/Table_verdanab_25_4bpp.o \
./TouchGFX/generated/fonts/src/Table_verdanab_35_4bpp.o \
./TouchGFX/generated/fonts/src/UnmappedDataFont.o 

CPP_DEPS += \
./TouchGFX/generated/fonts/src/ApplicationFontProvider.d \
./TouchGFX/generated/fonts/src/CachedFont.d \
./TouchGFX/generated/fonts/src/FontCache.d \
./TouchGFX/generated/fonts/src/Font_verdana_10_4bpp_0.d \
./TouchGFX/generated/fonts/src/Font_verdanab_16_4bpp_0.d \
./TouchGFX/generated/fonts/src/Font_verdanab_25_4bpp_0.d \
./TouchGFX/generated/fonts/src/Font_verdanab_35_4bpp_0.d \
./TouchGFX/generated/fonts/src/GeneratedFont.d \
./TouchGFX/generated/fonts/src/Kerning_verdana_10_4bpp.d \
./TouchGFX/generated/fonts/src/Kerning_verdanab_16_4bpp.d \
./TouchGFX/generated/fonts/src/Kerning_verdanab_25_4bpp.d \
./TouchGFX/generated/fonts/src/Kerning_verdanab_35_4bpp.d \
./TouchGFX/generated/fonts/src/Table_verdana_10_4bpp.d \
./TouchGFX/generated/fonts/src/Table_verdanab_16_4bpp.d \
./TouchGFX/generated/fonts/src/Table_verdanab_25_4bpp.d \
./TouchGFX/generated/fonts/src/Table_verdanab_35_4bpp.d \
./TouchGFX/generated/fonts/src/UnmappedDataFont.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/fonts/src/%.o TouchGFX/generated/fonts/src/%.su: ../TouchGFX/generated/fonts/src/%.cpp TouchGFX/generated/fonts/src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../FATFS/App -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../TouchGFX/target/generated -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../Drivers/CMSIS/Include -I../Core/Inc -I../FATFS/Target -I../TouchGFX/App -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/target -I../Middlewares/Third_Party/FatFs/src -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/generated/fonts/include -I../TouchGFX/generated/gui_generated/include -I../TouchGFX/generated/images/include -I../TouchGFX/generated/texts/include -I../TouchGFX/generated/videos/include -I../TouchGFX/gui/include -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-fonts-2f-src

clean-TouchGFX-2f-generated-2f-fonts-2f-src:
	-$(RM) ./TouchGFX/generated/fonts/src/ApplicationFontProvider.d ./TouchGFX/generated/fonts/src/ApplicationFontProvider.o ./TouchGFX/generated/fonts/src/ApplicationFontProvider.su ./TouchGFX/generated/fonts/src/CachedFont.d ./TouchGFX/generated/fonts/src/CachedFont.o ./TouchGFX/generated/fonts/src/CachedFont.su ./TouchGFX/generated/fonts/src/FontCache.d ./TouchGFX/generated/fonts/src/FontCache.o ./TouchGFX/generated/fonts/src/FontCache.su ./TouchGFX/generated/fonts/src/Font_verdana_10_4bpp_0.d ./TouchGFX/generated/fonts/src/Font_verdana_10_4bpp_0.o ./TouchGFX/generated/fonts/src/Font_verdana_10_4bpp_0.su ./TouchGFX/generated/fonts/src/Font_verdanab_16_4bpp_0.d ./TouchGFX/generated/fonts/src/Font_verdanab_16_4bpp_0.o ./TouchGFX/generated/fonts/src/Font_verdanab_16_4bpp_0.su ./TouchGFX/generated/fonts/src/Font_verdanab_25_4bpp_0.d ./TouchGFX/generated/fonts/src/Font_verdanab_25_4bpp_0.o ./TouchGFX/generated/fonts/src/Font_verdanab_25_4bpp_0.su ./TouchGFX/generated/fonts/src/Font_verdanab_35_4bpp_0.d ./TouchGFX/generated/fonts/src/Font_verdanab_35_4bpp_0.o ./TouchGFX/generated/fonts/src/Font_verdanab_35_4bpp_0.su ./TouchGFX/generated/fonts/src/GeneratedFont.d ./TouchGFX/generated/fonts/src/GeneratedFont.o ./TouchGFX/generated/fonts/src/GeneratedFont.su ./TouchGFX/generated/fonts/src/Kerning_verdana_10_4bpp.d ./TouchGFX/generated/fonts/src/Kerning_verdana_10_4bpp.o ./TouchGFX/generated/fonts/src/Kerning_verdana_10_4bpp.su ./TouchGFX/generated/fonts/src/Kerning_verdanab_16_4bpp.d ./TouchGFX/generated/fonts/src/Kerning_verdanab_16_4bpp.o ./TouchGFX/generated/fonts/src/Kerning_verdanab_16_4bpp.su ./TouchGFX/generated/fonts/src/Kerning_verdanab_25_4bpp.d ./TouchGFX/generated/fonts/src/Kerning_verdanab_25_4bpp.o ./TouchGFX/generated/fonts/src/Kerning_verdanab_25_4bpp.su ./TouchGFX/generated/fonts/src/Kerning_verdanab_35_4bpp.d ./TouchGFX/generated/fonts/src/Kerning_verdanab_35_4bpp.o ./TouchGFX/generated/fonts/src/Kerning_verdanab_35_4bpp.su ./TouchGFX/generated/fonts/src/Table_verdana_10_4bpp.d ./TouchGFX/generated/fonts/src/Table_verdana_10_4bpp.o ./TouchGFX/generated/fonts/src/Table_verdana_10_4bpp.su ./TouchGFX/generated/fonts/src/Table_verdanab_16_4bpp.d ./TouchGFX/generated/fonts/src/Table_verdanab_16_4bpp.o ./TouchGFX/generated/fonts/src/Table_verdanab_16_4bpp.su ./TouchGFX/generated/fonts/src/Table_verdanab_25_4bpp.d ./TouchGFX/generated/fonts/src/Table_verdanab_25_4bpp.o ./TouchGFX/generated/fonts/src/Table_verdanab_25_4bpp.su ./TouchGFX/generated/fonts/src/Table_verdanab_35_4bpp.d ./TouchGFX/generated/fonts/src/Table_verdanab_35_4bpp.o ./TouchGFX/generated/fonts/src/Table_verdanab_35_4bpp.su ./TouchGFX/generated/fonts/src/UnmappedDataFont.d ./TouchGFX/generated/fonts/src/UnmappedDataFont.o ./TouchGFX/generated/fonts/src/UnmappedDataFont.su

.PHONY: clean-TouchGFX-2f-generated-2f-fonts-2f-src

