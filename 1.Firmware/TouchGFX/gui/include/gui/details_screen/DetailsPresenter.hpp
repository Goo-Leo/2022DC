#ifndef DETAILSPRESENTER_HPP
#define DETAILSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class DetailsView;

class DetailsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    DetailsPresenter(DetailsView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();
    virtual void NH3Update(float adc);
    virtual void SHT31Update(float value1,float value2);
    virtual void BH1750Update(float value);
    virtual ~DetailsPresenter() {};

private:
    DetailsPresenter();

    DetailsView& view;
};

#endif // DETAILSPRESENTER_HPP
