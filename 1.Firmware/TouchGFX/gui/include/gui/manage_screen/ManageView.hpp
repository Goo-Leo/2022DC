#ifndef MANAGEVIEW_HPP
#define MANAGEVIEW_HPP

#include <gui_generated/manage_screen/ManageViewBase.hpp>
#include <gui/manage_screen/ManagePresenter.hpp>

class ManageView : public ManageViewBase
{
public:
    ManageView();
    virtual void increaseValue();
    virtual void decreaseValue();
    virtual void increaseValue1();
    virtual void decreaseValue1();
    virtual void increaseValue2();
    virtual void decreaseValue2();

    virtual ~ManageView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateGFXElements();
    protected:

    private:

        enum flags{
        	cows = 1,
        	pigs,
        	sheeps
        };
};

#endif // MANAGEVIEW_HPP
