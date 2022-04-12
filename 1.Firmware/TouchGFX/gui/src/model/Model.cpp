#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "cmsis_os.h"
#include "main.h"
#include "stm32f4xx.h"

extern __IO float humidity;
extern __IO float temperature;
extern __IO float lux;
extern __IO uint32_t NH3[1];

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

	modelListener ->SHT31Update(humidity,temperature);
	modelListener ->BH1750Update(lux);
	modelListener ->NH3Upadate(NH3[0]);
}
