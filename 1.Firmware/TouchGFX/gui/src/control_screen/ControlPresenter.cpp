#include <gui/control_screen/ControlView.hpp>
#include <gui/control_screen/ControlPresenter.hpp>
#include "devices.h"
ControlPresenter::ControlPresenter(ControlView& v)
    : view(v)
{

}

void ControlPresenter::activate()
{

}

void ControlPresenter::deactivate()
{

}

void ControlPresenter::devicestate(Device room){
    view.devicestate(room);
}
