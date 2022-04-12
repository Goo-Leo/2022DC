#include <gui/manage_screen/ManageView.hpp>
#include "main.h"
constexpr uint8_t UPPER_LIMIT = 99;
constexpr uint8_t LOWER_LIMIT = 0;
extern uint8_t count;
extern uint8_t count1;
extern uint8_t count2;
ManageView::ManageView()
{

}

void ManageView::setupScreen()
{
	Unicode::snprintf(textArea1Buffer, 3, "%d", count);
	textArea1.invalidate();
	Unicode::snprintf(textArea1_1Buffer, 3, "%d", count1);
	textArea1_1.invalidate();
	Unicode::snprintf(textArea1_2Buffer, 3, "%d", count2);
	textArea1_2.invalidate();
    ManageViewBase::setupScreen();
}

void ManageView::tearDownScreen()
{
    ManageViewBase::tearDownScreen();
}

void ManageView::increaseValue()
{
    count = (count++ > UPPER_LIMIT) ? UPPER_LIMIT : count;
    Unicode::snprintf(textArea1Buffer, 3, "%d", count);
    textArea1.invalidate();
}
void ManageView::increaseValue1(){
	count1 = (count1++ > UPPER_LIMIT) ? UPPER_LIMIT : count1;
	Unicode::snprintf(textArea1_1Buffer, 3, "%d", count1);
	textArea1_1.invalidate();
}

void ManageView::increaseValue2(){
	count2 = (count2++ > UPPER_LIMIT) ? UPPER_LIMIT : count2;
	Unicode::snprintf(textArea1_2Buffer, 3, "%d", count2);
	textArea1_2.invalidate();
}

void ManageView::decreaseValue()
{
    count = (count-- <= LOWER_LIMIT) ? LOWER_LIMIT : count;
    Unicode::snprintf(textArea1Buffer, 3, "%d", count);
    textArea1.invalidate();
}

void ManageView::decreaseValue1()
{
    count1 = (count1-- <= LOWER_LIMIT) ? LOWER_LIMIT : count1;
    Unicode::snprintf(textArea1_1Buffer, 3, "%d", count1);
    	textArea1_1.invalidate();
}

void ManageView::decreaseValue2()
{
    count2 = (count2-- <= LOWER_LIMIT) ? LOWER_LIMIT : count2;
    Unicode::snprintf(textArea1_2Buffer, 3, "%d", count2);
    	textArea1_2.invalidate();
}
