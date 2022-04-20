#ifndef SETVIEW_HPP
#define SETVIEW_HPP

#include <gui_generated/set_screen/SetViewBase.hpp>
#include <gui/set_screen/SetPresenter.hpp>

class SetView : public SetViewBase
{
public:
    SetView();
    virtual ~SetView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETVIEW_HPP
