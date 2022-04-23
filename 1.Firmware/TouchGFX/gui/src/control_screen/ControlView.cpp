#include <gui/control_screen/ControlView.hpp>
#include "devices.h"

ControlView::ControlView()
{

}

void ControlView::setupScreen()
{
	if(room.fan1==1){
		    	toggleButton1.forceState(1);
		    }else{
		    	toggleButton1.forceState(0);
		    }
		    if(room.fan2==1){
		    	toggleButton2.forceState(1);
		    }else{
		    	toggleButton2.forceState(0);
		    }
		    if (room.window==1) {
		    	toggleButton3.forceState(1);
			}else{
		    	toggleButton3.forceState(0);
		    }
		    if (room.curtain==1) {
		    	toggleButton4.forceState(1);
			}else{
		    	toggleButton4.forceState(0);
		    }
		    if (room.heater==1) {
		    	toggleButton5.forceState(1);
			}else{
		    	toggleButton5.forceState(0);
		    }
    ControlViewBase::setupScreen();
}

void ControlView::tearDownScreen()
{
    ControlViewBase::tearDownScreen();
}

void ControlView::devicestate(Device room){
		if(room.fan1==1){
	    	toggleButton1.forceState(1);
	    }else{
	    	toggleButton1.forceState(0);
	    }
	    if(room.fan2==1){
	    	toggleButton2.forceState(1);
	    }else{
	    	toggleButton2.forceState(0);
	    }
	    if (room.window==1) {
	    	toggleButton3.forceState(1);
		}else{
	    	toggleButton3.forceState(0);
	    }
	    if (room.curtain==1) {
	    	toggleButton4.forceState(1);
		}else{
	    	toggleButton4.forceState(0);
	    }
	    if (room.heater==1) {
	    	toggleButton5.forceState(1);
		}else{
	    	toggleButton5.forceState(0);
	    }
}
