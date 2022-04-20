/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/set_screen/SetViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

SetViewBase::SetViewBase() :
    buttonCallback(this, &SetViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &SetViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(220, 122, 240));

    flexButton1.setBoxWithBorderPosition(0, 0, 74, 31);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(44, 207, 222), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(31, 105, 112), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(288, 7, 74, 31);

    flexButton2.setBoxWithBorderPosition(0, 0, 74, 31);
    flexButton2.setBorderSize(5);
    flexButton2.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(44, 207, 222), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(31, 105, 112), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton2.setPosition(362, 7, 74, 31);
    flexButton2.setAlpha(169);

    textArea1.setXY(40, 7);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_HWD7));

    textArea2.setXY(288, 7);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    Unicode::snprintf(textArea2Buffer, TEXTAREA2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_W6GS).getText());
    textArea2.setWildcard(textArea2Buffer);
    textArea2.resizeToCurrentText();
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EIHH));

    textArea3.setXY(43, 47);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WT26));

    textArea4.setXY(302, 47);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    Unicode::snprintf(textArea4Buffer, TEXTAREA4_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TOQX).getText());
    textArea4.setWildcard(textArea4Buffer);
    textArea4.resizeToCurrentText();
    textArea4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R1XZ));

    textArea5.setXY(31, 88);
    textArea5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5.setLinespacing(0);
    textArea5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_86FF));

    textArea6.setXY(341, 88);
    textArea6.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea6.setLinespacing(0);
    Unicode::snprintf(textArea6Buffer, TEXTAREA6_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_MZIT).getText());
    textArea6.setWildcard(textArea6Buffer);
    textArea6.resizeToCurrentText();
    textArea6.setTypedText(touchgfx::TypedText(T___SINGLEUSE_N5I8));

    textArea7.setXY(45, 130);
    textArea7.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea7.setLinespacing(0);
    textArea7.setTypedText(touchgfx::TypedText(T___SINGLEUSE_S6ZK));

    textArea8.setXY(339, 130);
    textArea8.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea8.setLinespacing(0);
    Unicode::snprintf(textArea8Buffer, TEXTAREA8_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_9CCQ).getText());
    textArea8.setWildcard(textArea8Buffer);
    textArea8.resizeToCurrentText();
    textArea8.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AA2G));

    textArea9.setXY(42, 176);
    textArea9.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea9.setLinespacing(0);
    textArea9.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G1JT));

    textArea10.setXY(312, 176);
    textArea10.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea10.setLinespacing(0);
    Unicode::snprintf(textArea10Buffer, TEXTAREA10_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_GP9H).getText());
    textArea10.setWildcard(textArea10Buffer);
    textArea10.resizeToCurrentText();
    textArea10.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TUT2));

    buttonWithLabel1.setXY(310, 212);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_DAJ9));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel1.setAction(buttonCallback);

    add(__background);
    add(box1);
    add(flexButton1);
    add(flexButton2);
    add(textArea1);
    add(textArea2);
    add(textArea3);
    add(textArea4);
    add(textArea5);
    add(textArea6);
    add(textArea7);
    add(textArea8);
    add(textArea9);
    add(textArea10);
    add(buttonWithLabel1);
}

void SetViewBase::setupScreen()
{

}

void SetViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel1)
    {
        //Interaction1
        //When buttonWithLabel1 clicked change screen to Main
        //Go to Main with screen transition towards North
        application().gotoMainScreenWipeTransitionNorth();
    }
}

void SetViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
}
