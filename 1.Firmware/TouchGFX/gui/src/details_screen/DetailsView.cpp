#include <gui/details_screen/DetailsView.hpp>

DetailsView::DetailsView()
{

}

void DetailsView::setupScreen()
{
    DetailsViewBase::setupScreen();
}

void DetailsView::tearDownScreen()
{
    DetailsViewBase::tearDownScreen();
}

void DetailsView::BH1750Update(float value){
	Unicode::snprintfFloat(textArea2Buffer, value, "%.1f", value);
	textArea2.invalidate();
}

void DetailsView::SHT31Update(float value1,float value2){
	Unicode::snprintfFloat(textArea4Buffer, value1, "%.1f", value1);
	Unicode::snprintfFloat(textArea6Buffer, value2, "%.1f", value2);
	textArea4.invalidate();
	textArea6.invalidate();
}

void DetailsView::CO2Upadate(uint16_t co2){
	Unicode::snprintf(textArea8Buffer, co2,"%d",co2);
	textArea8.invalidate();
}

void DetailsView::NH3Update(float adc){
	Unicode::snprintfFloat(textArea10Buffer, adc , "%f", adc);
	textArea10.invalidate();
}



