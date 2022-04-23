#include <gui/main_screen/MainView.hpp>
extern uint8_t homestate;

MainView::MainView()
{

}

void MainView::setupScreen()
{
	swipeContainer1.setSelectedPage(homestate);
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen()
{
	homestate = swipeContainer1.getNumberOfPages();
    MainViewBase::tearDownScreen();
}

void MainView::SHT31Update(float value1,float value2){
	Unicode::snprintfFloat(textArea1Buffer, value1, "%.1f", value1);
	Unicode::snprintfFloat(textArea2Buffer, value2, "%.1f", value2);
	textArea1.invalidate();
	textArea2.invalidate();
}
void MainView::CO2Update(uint16_t co2){
	Unicode::snprintf(textArea3Buffer, co2, "%d", co2);
	textArea3.invalidate();
};

