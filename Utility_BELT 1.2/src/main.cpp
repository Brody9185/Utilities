#include "main.h"
void initialize() {
	pros::lcd::initialize();
	GPSPositioning(1);
	pros::Task GPSInit(GetGPS);
}
/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {
set0(1,2); // Set the new 0,0 from the bottom left corner.(e.g. leaving this as (0,0) makes the bottom left the orgin).
//Lemchassis.setPose(GPSX,GPSY,GPSH); // Set the Lemlib starting position based on the GPS(note: you can also use this during the code to recalibrate your position).
}

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	ControllerProfile Profile1; // Create and name the profile
	Profile1.ProfileActive = true;
	//Profile1.SetDriveStyle(std::function<void ()> driveStyle); You can input the drive styles form LEMLib or EZ(should be able to use others as long as they are ran through void functions).
	//Profile1.AButton(bool shift, bool newPress, std::function<void ()> function); This would set up the A button to run a function, with either new press, or normal press.
	//Profile1.AButtonToggle(bool shift, std::function<void ()> onFunction, std::function<void ()> offFunction) This would set up a toggle using a single button.
	//It can use 2 seperate functions for which mode it is in(e.g.if on and pressed the off runs, if off and pressed the on runs).
	//Profile1.MultiInput(bool shift, std::function<void ()> function, Button1, Button2, Button3) Creates an input using multiple button at once. Button 3 is optional.
	//Set the button you want to hit last as get_digital_new_press(Just recomened);

	while (true) {                   // Sets right motor voltage
		pros::delay(20);                               // Run for 20 ms then update
	}
}