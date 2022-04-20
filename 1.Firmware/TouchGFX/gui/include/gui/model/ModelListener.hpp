#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <touchgfx/hal/Types.hpp>
#include "devices.h"
class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }
    virtual void SHT31Update(float value1,float value2){};
    virtual void BH1750Update(float value){};
    virtual void NH3Update(float adc){};
    virtual void CO2Update(uint32_t co2){};
    virtual void devicestate(Device room){};
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
