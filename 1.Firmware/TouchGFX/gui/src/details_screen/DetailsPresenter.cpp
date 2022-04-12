#include <gui/details_screen/DetailsView.hpp>
#include <gui/details_screen/DetailsPresenter.hpp>

DetailsPresenter::DetailsPresenter(DetailsView& v)
    : view(v)
{

}

void DetailsPresenter::activate()
{

}

void DetailsPresenter::deactivate()
{

}

void DetailsPresenter::SHT31Update(float value1,float value2){
	view.SHT31Update(value1,value2);
}

void DetailsPresenter::BH1750Update(float value)
{
	view.BH1750Update(value);
}
