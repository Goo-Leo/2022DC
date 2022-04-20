#ifndef DEVICES_H
#define DEVICES_H

#include "tim.h"
#include "gpio.h"

typedef struct device{
	uint8_t fan1;
	uint8_t fan2;
	uint8_t window;
	uint8_t curtain;
	uint8_t heater;
} Device;
extern Device room;

typedef struct parameter{
	uint8_t env1;
	uint8_t env2;
	uint8_t env3;
	uint8_t env4;
	uint8_t env5;
} Setting;


void windowon(Device room);
void windowoff(Device room);
void fanctrl(Device room);
void curtainup(void);
void curtaindown(void);
void heateron(void);
void heateroff(void);

#endif
