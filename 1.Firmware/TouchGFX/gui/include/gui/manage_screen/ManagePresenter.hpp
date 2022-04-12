#ifndef MANAGEPRESENTER_HPP
#define MANAGEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ManageView;

class ManagePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ManagePresenter(ManageView& v);

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

    virtual ~ManagePresenter() {};

private:
    ManagePresenter();

    ManageView& view;
};

#endif // MANAGEPRESENTER_HPP
