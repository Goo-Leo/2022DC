#include <gui/main_screen/MainView.hpp>

#include "stm32f4xx.h"

MainView::MainView()
{

}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::SHT31Update(float value1,float value2){
	Unicode::snprintfFloat(textArea1Buffer, value1, "%.1f", value1);
	Unicode::snprintfFloat(textArea2Buffer, value2, "%.1f", value2);
	textArea1.invalidate();
	textArea2.invalidate();
	textArea3.invalidate();
}

