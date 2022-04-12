#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include <touchgfx/hal/Types.hpp>
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
    virtual void NH3Upadate(unsigned int adc){};
protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
