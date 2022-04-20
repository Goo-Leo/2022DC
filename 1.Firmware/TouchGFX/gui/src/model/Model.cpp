#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "stm32f4xx.h"
#include "devices.h"

extern __IO float humidity;
extern __IO float temperature;
extern __IO float lux;
extern __IO uint32_t co2;
extern __IO float nh3;


Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	modelListener ->SHT31Update(humidity,temperature);
	modelListener ->BH1750Update(lux);
	modelListener ->NH3Update(nh3);
	modelListener ->CO2Update(co2);
	modelListener ->devicestate(room);
}
