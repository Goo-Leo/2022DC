#include <gui/details_screen/DetailsView.hpp>
#include "math.h"
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

void DetailsView::NH3Upadate(unsigned int adc){
	adc = adc* 3.3 / 4096.0;
	Unicode::snprintfFloat(textArea10Buffer, adc , "%.1f", 410.74*pow(adc,5) - 2718.5*(adc,4) + 7015.6*(adc,3) - 8747.9*(adc,2) + 5271.7*adc - 1128.7);
	textArea10.invalidate();
}


