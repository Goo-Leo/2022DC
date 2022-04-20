#include <gui/control_screen/ControlView.hpp>
#include "devices.h"

ControlView::ControlView()
{

}

void ControlView::setupScreen()
{
    ControlViewBase::setupScreen();
}

void ControlView::tearDownScreen()
{
    ControlViewBase::tearDownScreen();
}

void ControlView::devicestate(Device room){
		if(room.fan1==1){
	    	toggleButton1.forceState(1);
	    }
	    if(room.fan2==1){
	    	toggleButton2.forceState(1);
	    }
	    if (room.window==1) {
	    	toggleButton3.forceState(1);
		}
	    if (room.curtain==1) {
	    	toggleButton4.forceState(1);
		}
	    if (room.heater==1) {
	    	toggleButton5.forceState(1);
		}
}
