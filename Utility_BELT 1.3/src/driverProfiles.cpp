#include "main.h"
#include "pros/misc.h"
#include <functional>
#include <optional>

pros::Controller master(pros::E_CONTROLLER_MASTER);

/*!
 * @var     ProfileActive
 * @param ProfileActive A bool value for wether or not a profile is currently set to be used.
*/
bool ProfileActive;
/*!
 * @var     ShiftPressed
 * @param ShiftPressed A bool value for wether or not the shift button is being pressed.
*/
bool ShiftPressed;
/*!
 * @var   AToggle
 * @param AToggle A bool value for wether or not the toggle is true or false.
*/
bool AToggle;
/*!
 * @var   BToggle
 * @param BToggle A bool value for wether or not the toggle is true or false.
*/
bool BToggle;
/*!
 * @var   XToggle
 * @param XToggle A bool value for wether or not the toggle is true or false.
*/
bool XToggle;
/*!
 * @var   YToggle
 * @param YToggle A bool value for wether or not the toggle is true or false.
*/
bool YToggle;
/*!
 * @var   UpToggle
 * @param UpToggle A bool value for wether or not the toggle is true or false.
*/
bool UpToggle;
/*!
 * @var   DownToggle
 * @param DownToggle A bool value for wether or not the toggle is true or false.
*/
bool DownToggle;
/*!
 * @var   LeftToggle
 * @param LeftToggle A bool value for wether or not the toggle is true or false.
*/
bool LeftToggle;
/*!
 * @var   RightToggle
 * @param RightToggle A bool value for wether or not the toggle is true or false.
*/
bool RightToggle;
/*!
 * @var   L1Toggle
 * @param L1Toggle A bool value for wether or not the toggle is true or false.
*/
bool L1Toggle;
/*!
 * @var   L2Toggle
 * @param L2Toggle A bool value for wether or not the toggle is true or false.
*/
bool L2Toggle;
/*!
 * @var   R1Toggle
 * @param R1Toggle A bool value for wether or not the toggle is true or false.
*/
bool R1Toggle;
/*!
 * @var   R2Toggle
 * @param R2Toggle A bool value for wether or not the toggle is true or false.
*/
bool R2Toggle;

//opControl

//Outside of While
//Drive Style
/*!
 * @function    SetDriveStyle.
 * @discussion  This function tells the code which driving style you want to use with this profile.
 * @discussion  Place this inside of opControl, but outside of the while loop.
 * @param       shiftButton    The Drive Style. This is designed around EZ & LEMLib, but as long as you set your style using a void funtion it should work.
*/
void SetDriveStyle(std::function<void()> driveStyle) {
if(ProfileActive) driveStyle();
}

//Inside of While
//Shift Button
/*!
 * @function    SetShift.
 * @discussion  This function tells the code which button to use for the shift variable.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @param       shiftButton    The button input to use shift mode, is to be writen as master.get_digital(pros::E_CONTROLLER_DIGITAL_"Button").
*/
void SetShift(std::int32_t shiftButton){
if(ProfileActive){
if(shiftButton) {ShiftPressed = true;} //Activates Shift if pressed.
else {ShiftPressed = false;} //Deactivates Shift if not currently pressed.
}
}

// Singular Input
/*!
 * @function    AButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void AButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_A)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_A)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) function();}
}
}
/*!
 * @function    BButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void BButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_B)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_B)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)) function();}
}
}
/*!
 * @function    Xutton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void XButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_X)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_X)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_X)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_X)) function();}
}
}
/*!
 * @function    YButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void YButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_Y)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_Y)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y)) function();}
}
}
/*!
 * @function    UpButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void UpButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_UP)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_UP)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP)) function();}
}
}
/*!
 * @function    DownButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void DownButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_DOWN)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_DOWN)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_DOWN)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_DOWN)) function();}
}
}
/*!
 * @function    LeftButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void LeftButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_LEFT)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_LEFT)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_LEFT)) function();}
}
}
/*!
 * @function    RightButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void RightButton(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_RIGHT)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT)) function();}
}
}
/*!
 * @function    L1Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void L1Button(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_L1)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) function();}
}
}
/*!
 * @function    L2Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void L2Button(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L2)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L2)) function();}
}
}
/*!
 * @function    R1Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void R1Button(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) function();}
}
}
/*!
 * @function    R2Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void R2Button(bool shift,bool newPress,std::function<void()> function) {
if(ProfileActive){
    if(!shift){
    if(!newPress){ if(master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) function();}
    else if(newPress){ if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2)) function();}
    }
    else if(shift && !newPress){if(ShiftPressed && master.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) function();}
    else if(shift && newPress){if(ShiftPressed && master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2)) function();}
}
}

//Dual Input(Toggle)

/*!
 * @function    AButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void AButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_A)) {
if(AToggle){AToggle = false; offFunction();} else if(!AToggle){AToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && AToggle){AToggle = false; offFunction();} else if(ShiftPressed && !AToggle){AToggle = true; onFunction();}}
}
}
/*!
 * @function    BButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void BButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)) {
if(BToggle){BToggle = false; offFunction();} else if(!BToggle){BToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && BToggle){BToggle = false; offFunction();} else if(ShiftPressed && !BToggle){BToggle = true; onFunction();}}
}
}
/*!
 * @function    XButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void XButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift) {
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_X)) {
if(XToggle){XToggle = false; offFunction();} else if(!XToggle){XToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && XToggle){XToggle = false; offFunction();} else if(ShiftPressed && !XToggle){XToggle = true; onFunction();}}
}
}
/*!
 * @function    YButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void YButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y)) {
if(YToggle){YToggle = false; offFunction();} else if(!YToggle){YToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && YToggle){YToggle = false; offFunction();} else if(ShiftPressed && !YToggle){YToggle = true; onFunction();}}
}
}
/*!
 * @function    UpButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void UpButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP)) {
if(UpToggle){UpToggle = false; offFunction();} else if(!UpToggle){UpToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && UpToggle){UpToggle = false; offFunction();} else if(ShiftPressed && !UpToggle){UpToggle = true; onFunction();}}
}
}
/*!
 * @function    DownButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void DownButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_DOWN)) {
if(DownToggle){DownToggle = false; offFunction();} else if(!DownToggle){DownToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && DownToggle){DownToggle = false; offFunction();} else if(ShiftPressed && !DownToggle){DownToggle = true; onFunction();}}
}
}
/*!
 * @function    LeftButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void LeftButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_LEFT)) {
if(LeftToggle){LeftToggle = false; offFunction();} else if(!LeftToggle){LeftToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && LeftToggle){LeftToggle = false; offFunction();} else if(ShiftPressed && !LeftToggle){LeftToggle = true; onFunction();}}
}
}
/*!
 * @function    RightButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void RightButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT)) {
if(RightToggle){RightToggle = false; offFunction();} else if(!RightToggle){RightToggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && RightToggle){RightToggle = false; offFunction();} else if(ShiftPressed && !RightToggle){RightToggle = true; onFunction();}}
}
}
/*!
 * @function    L1ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void L1ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) {
if(L1Toggle){L1Toggle = false; offFunction();} else if(!L1Toggle){L1Toggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && L1Toggle){L1Toggle = false; offFunction();} else if(ShiftPressed && !L1Toggle){L1Toggle = true; onFunction();}}
}
}
/*!
 * @function    L2ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void L2ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L2)) {
if(L2Toggle){L2Toggle = false; offFunction();} else if(!L2Toggle){L2Toggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && L2Toggle){L2Toggle = false; offFunction();} else if(ShiftPressed && !L2Toggle){L2Toggle = true; onFunction();}}
}
}
/*!
 * @function    R1ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void R1ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1)) {
if(R1Toggle){R1Toggle = false; offFunction();} else if(!R1Toggle){R1Toggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && R1Toggle){R1Toggle = false; offFunction();} else if(ShiftPressed && !R1Toggle){R1Toggle = true; onFunction();}}
}
}
/*!
 * @function    R2ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void R2ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction) {
if(ProfileActive){
if(!shift){
if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2)) {
if(R2Toggle){R2Toggle = false; offFunction();} else if(!R2Toggle){R2Toggle = true; onFunction();}
}
}
else if(shift){if(ShiftPressed && R2Toggle){R2Toggle = false; offFunction();} else if(ShiftPressed && !R2Toggle){R2Toggle = true; onFunction();}}
}
}

//Multi-Input
void MultiInput(bool shift, std::function<void()> function, std::optional<std::int32_t> Button1 = std::nullopt, std::optional<std::int32_t> Button2 = std::nullopt, std::optional<std::int32_t> Button3 = std::nullopt){
    if(ProfileActive){if(!shift){{if(Button3.has_value()){
    if(Button1 && Button2 && Button3){function();}
    } else if(!Button3.has_value()) {if(Button1 && Button2){function();}}
    }
    } else if(shift){{if(Button3.has_value()){
    if(Button1 && Button2 && Button3 && ShiftPressed){function();}
    } else if(!Button3.has_value()) {if(Button1 && Button2 && ShiftPressed){function();}}
    }
}
}
}