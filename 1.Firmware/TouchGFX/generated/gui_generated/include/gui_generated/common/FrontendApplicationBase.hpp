/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Main
    void gotoMainScreenNoTransition();

    void gotoMainScreenCoverTransitionNorth();

    void gotoMainScreenWipeTransitionNorth();

    void gotoMainScreenWipeTransitionWest();

    // Manage
    void gotoManageScreenBlockTransition();

    // Details
    void gotoDetailsScreenBlockTransition();

    // Control
    void gotoControlScreenBlockTransition();

    // Set
    void gotoSetScreenBlockTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Main
    void gotoMainScreenNoTransitionImpl();

    void gotoMainScreenCoverTransitionNorthImpl();

    void gotoMainScreenWipeTransitionNorthImpl();

    void gotoMainScreenWipeTransitionWestImpl();

    // Manage
    void gotoManageScreenBlockTransitionImpl();

    // Details
    void gotoDetailsScreenBlockTransitionImpl();

    // Control
    void gotoControlScreenBlockTransitionImpl();

    // Set
    void gotoSetScreenBlockTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
