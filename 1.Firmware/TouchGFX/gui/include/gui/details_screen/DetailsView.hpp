#ifndef DETAILSVIEW_HPP
#define DETAILSVIEW_HPP

#include <gui_generated/details_screen/DetailsViewBase.hpp>
#include <gui/details_screen/DetailsPresenter.hpp>

class DetailsView : public DetailsViewBase
{
public:
    DetailsView();
    virtual void NH3Update(float adc);
    virtual void SHT31Update(float value1,float value2);
    virtual void BH1750Update(float value);
    virtual void CO2Upadate(uint16_t co2);
    virtual ~DetailsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DETAILSVIEW_HPP
