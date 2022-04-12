/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "sht31.h"
#include "bh1750.h"
#include "fatfs.h"
#include "stdio.h"
#include "stm32f4xx.h"
#include "i2c.h"
#include "adc.h"
#include "tim.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

__IO float temperature, humidity, lux, co2;
__IO uint32_t NH3[1];
int wrflag = 0;
uint8_t count = 50;
uint8_t count1 = 50;
uint8_t count2 = 50;
sht3x_handle_t handle = {
	              .i2c_handle = &hi2c1,
	              .device_address = SHT3X_I2C_DEVICE_ADDRESS_ADDR_PIN_LOW
	      };

/* USER CODE END Variables */
osThreadId defaultTaskHandle;
osThreadId GUIHandle;
osThreadId MeasureHandle;

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void const * argument);
void GUItask(void const * argument);
void Measuretask(void const * argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

/* USER CODE BEGIN GET_IDLE_TASK_MEMORY */
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];

void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
  /* place for user code */
}
/* USER CODE END GET_IDLE_TASK_MEMORY */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */
	if (!sht3x_init(&handle)) {
		          printf("SHT3x access failed.\n\r");
		      }
	BH1750_Init(&hi2c1);
	BH1750_SetMode(CONTINUOUS_HIGH_RES_MODE_2);
	HAL_ADC_Start_DMA(&hadc1, NH3, 1);
  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 512);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of GUI */
  osThreadDef(GUI, GUItask, osPriorityIdle, 0, 512);
  GUIHandle = osThreadCreate(osThread(GUI), NULL);

  /* definition and creation of Measure */
  osThreadDef(Measure, Measuretask, osPriorityIdle, 0, 512);
  MeasureHandle = osThreadCreate(osThread(Measure), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void const * argument)
{
  /* USER CODE BEGIN StartDefaultTask */
	char wrbuf[20];
	retSD = f_mount(&SDFatFS, SDPath, 1);
	retSD = f_open(&SDFile,"0:\\out.txt", FA_CREATE_NEW | FA_WRITE |FA_READ);
	retSD = f_close(&SDFile);
  /* Infinite loop */

  for(;;)
  {

	if(wrflag == 1){
		retSD = f_open(&SDFile,"0:\\out.txt", FA_OPEN_EXISTING | FA_WRITE |FA_READ);
			retSD=f_lseek(&SDFile,f_size(&SDFile));
			sprintf(wrbuf,"lux:%.1f\r\n",lux);
			f_printf(&SDFile,wrbuf);
			sprintf(wrbuf,"humi:%.1f%\r\n",humidity);
			f_printf(&SDFile,wrbuf);
			sprintf(wrbuf,"temp:%.1f\r\n",temperature);
			f_printf(&SDFile,wrbuf);
			sprintf(wrbuf,"CO2:%f%\r\n",co2);
			f_printf(&SDFile,wrbuf);
			f_printf(&SDFile,"\r\n");
			retSD = f_close(&SDFile);
			wrflag = 0;
	}
    osDelay(1);
  }
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_GUItask */
/**
* @brief Function implementing the GUI thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_GUItask */
void GUItask(void const * argument)
{
  /* USER CODE BEGIN GUItask */

  /* Infinite loop */
  for(;;)
  {
	MX_TouchGFX_Process();
    osDelay(1);
  }
  /* USER CODE END GUItask */
}

/* USER CODE BEGIN Header_Measuretask */
/**
* @brief Function implementing the Measure thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Measuretask */
void Measuretask(void const * argument)
{
  /* USER CODE BEGIN Measuretask */
  /* Infinite loop */
  for(;;)
  {
	  BH1750_ReadLight(&lux);
	  sht3x_read_temperature_and_humidity(&handle, &temperature, &humidity);
	  HAL_ADC_Start_DMA(&hadc1, NH3, 1);
	  osDelay(1);
  }
  /* USER CODE END Measuretask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */
