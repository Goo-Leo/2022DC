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
#include "i2c.h"
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
__IO float temperature, humidity;
sht3x_handle_t handle = {
	              .i2c_handle = &hi2c1,
	              .device_address = SHT3X_I2C_DEVICE_ADDRESS_ADDR_PIN_LOW
	      };

/* USER CODE END Variables */
osThreadId defaultTaskHandle;
osThreadId GUIHandle;
osThreadId MeasureHandle;
osMessageQId Queue01Handle;
osSemaphoreId sht31Handle;

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

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* Create the semaphores(s) */
  /* definition and creation of sht31 */
  osSemaphoreDef(sht31);
  sht31Handle = osSemaphoreCreate(osSemaphore(sht31), 1);

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* Create the queue(s) */
  /* definition and creation of Queue01 */
  osMessageQDef(Queue01, 32, float);
  Queue01Handle = osMessageCreate(osMessageQ(Queue01), NULL);

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  osThreadDef(defaultTask, StartDefaultTask, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of GUI */
  osThreadDef(GUI, GUItask, osPriorityIdle, 0, 512);
  GUIHandle = osThreadCreate(osThread(GUI), NULL);

  /* definition and creation of Measure */
  osThreadDef(Measure, Measuretask, osPriorityIdle, 0, 128);
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
  /* Infinite loop */
  for(;;)
  {
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
	sht3x_read_temperature_and_humidity(&handle, &temperature, &humidity);
	osDelay(1);
  }
  /* USER CODE END Measuretask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */
