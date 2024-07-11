#include "main.h"
#include "pros/misc.h"
pros::Controller master(pros::E_CONTROLLER_MASTER);

void createProfiles(int numberOfProfiles) {
if(numberOfProfiles >= 1) {} pf1 = true;
if(numberOfProfiles >= 2) pf2 = true;
if(numberOfProfiles >= 3) pf3 = true;
if(numberOfProfiles >= 4) pf4 = true;
if(numberOfProfiles >= 5) pf5 = true;
if(numberOfProfiles >= 6) pf6 = true;
if(numberOfProfiles >= 7) pf7 = true;
if(numberOfProfiles >= 8) pf8 = true;
if(numberOfProfiles >= 9) pf9 = true;
if(numberOfProfiles >= 10) pf10 = true;
}
bool ButtonA() {
    return master.get_digital(pros::E_CONTROLLER_DIGITAL_A);
}
void setAButton(int pfNumber,std::function<void()> InputButton,bool newPress,std::function<void()> function) {
if(pfNumber == 1){ std::function<void()> pf1AButton = if(InputButton()) {function();} }
}

void pf1Settings(bool pf1active) {
if(pf1active) {

}
}