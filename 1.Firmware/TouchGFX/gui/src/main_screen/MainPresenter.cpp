#include <gui/main_screen/MainView.hpp>
#include <gui/main_screen/MainPresenter.hpp>

MainPresenter::MainPresenter(MainView& v)
    : view(v)
{

}

void MainPresenter::activate()
{

}

void MainPresenter::deactivate()
{

}

void MainPresenter::SHT31Update(float value1,float value2){
	view.SHT31Update(value1,value2);
}

void MainPresenter::CO2Update(uint16_t co2){
	view.CO2Update(co2);
};

