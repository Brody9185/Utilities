#include "main.h"

class ControllerProfile
{
public:
bool ProfileActive;
bool ShiftPressed;


//opControl

//Outside of While
//Drive Style
/*!
 * @function    SetDriveStyle.
 * @discussion  This function tells the code which driving style you want to use with this profile.
 * @discussion  Place this inside of opControl, but outside of the while loop.
 * @param       shiftButton    The Drive Style. This is designed around EZ & LEMLib, but as long as you set your style using a void funtion it should work.
*/
void SetDriveStyle(std::function<void()> driveStyle);

//Inside of While
//Shift Button
/*!
 * @function    SetShift.
 * @discussion  This function tells the code which button to use for the shift variable.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @param       shiftButton    The button input to use shift mode, is to be writen as master.get_digital(pros::E_CONTROLLER_DIGITAL_"Button").
*/
void SetShift(std::int32_t shiftButton);

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
void AButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    BButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void BButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    Xutton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void XButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    YButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void YButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    UpButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void UpButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    DownButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void DownButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    LeftButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void LeftButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    RightButton.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void RightButton(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    L1Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void L1Button(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    L2Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void L2Button(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    R1Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void R1Button(bool shift,bool newPress,std::function<void()> function);
/*!
 * @function    R2Button.
 * @discussion  This function tells the code what to run when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE TOGGLE FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       newPress A bool for wether or not the funtion should be ran only of a new button press.
 * @param       function The code that runs when this button is pressed.
*/
void R2Button(bool shift,bool newPress,std::function<void()> function);

//Dual Input(Toggle)
bool AToggle;
bool BToggle;
bool XToggle;
bool YToggle;
bool UpToggle;
bool DownToggle;
bool LeftToggle;
bool RightToggle;
bool L1Toggle;
bool L2Toggle;
bool R1Toggle;
bool R2Toggle;

/*!
 * @function    AButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void AButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    BButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void BButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    XButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void XButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    YButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void YButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    UpButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void UpButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    DownButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void DownButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    LeftButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void LeftButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    RightButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void RightButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    L1ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void L1ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    L2ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void L2ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    R1ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void R1ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);
/*!
 * @function    R2ButtonToggle.
 * @discussion  This function tells the code what to run on a toggle when this button is pressed for this profile.
 * @discussion  Place this inside of opControl, and inside of the while loop.
 * @discussion  DO NOT USE THIS AND THE REGULAR BUTTON FUNCTION(unless with shift).
 * @param       shift   A bool for wether the function should be used as a shift or regular function.
 * @param       onFunction The code that runs when this button is pressed and the toggle is false.
 * @param       offFunction The code that runs when this button is pressed and the toggle is true.
*/
void R2ButtonToggle(bool shift,std::function<void()> onFunction,std::function<void()> offFunction);

//Multi-Input

};