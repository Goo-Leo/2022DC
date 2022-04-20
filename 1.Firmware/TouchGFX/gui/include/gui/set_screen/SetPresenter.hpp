#ifndef SETPRESENTER_HPP
#define SETPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SetView;

class SetPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SetPresenter(SetView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~SetPresenter() {};

private:
    SetPresenter();

    SetView& view;
};

#endif // SETPRESENTER_HPP
