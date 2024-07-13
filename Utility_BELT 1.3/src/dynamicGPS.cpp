#include "main.h"
#include "pros/gps.hpp"

/*!
 * @var   GPSXraw
 * @param GPSXraw A double value for the base GPS data before seting 0,0,0.
*/
double GPSXraw;
/*!
 * @var   GPSYraw
 * @param GPSYraw A double value for the base GPS data before seting 0,0,0.
*/
double GPSYraw;
/*!
 * @var   GPSHraw
 * @param GPSHraw A double value for the base GPS data before seting 0,0,0.
*/
double GPSHraw;
/*!
 * @var   GPSX
 * @param GPSX A double value for the GPS data after seting 0,0,0.
*/
double GPSX;
/*!
 * @var   GPSY
 * @param GPSY A double value for the GPS data after seting 0,0,0.
*/
double GPSY;
/*!
 * @var   GPSH
 * @param GPSH A double value for the GPS data after seting 0,0,0.
*/
double GPSH;


GPSPositioning::GPSPositioning(int gps)
: gps(gps) {};

/*!
 * @function    GetGPS.
 * @discussion  This function defines the raw GPS values for LEMLib use..
*/
void GetGPS(GPSPositioning& sensor){
    GPSXraw = ((sensor.gps.get_position_x() + 3.65) * 39.370079);
    GPSYraw = ((sensor.gps.get_position_y()  + 3.65) * 39.370079);
    GPSHraw = sensor.gps.get_heading();
}

/*!
 * @function    setStrip1.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStip1(double X0, double Y0){
    GPSX = (GPSYraw - X0);
    GPSY = ((GPSXraw + 287.4015767) + Y0);
    GPSH = (GPSHraw - 270);
}
/*!
 * @function    setStrip2.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStip2(double X0, double Y0){
    GPSX = (GPSXraw - X0);
    GPSY = (GPSYraw - Y0);
    GPSH = GPSHraw;
}
/*!
 * @function    setStrip3.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStip3(double X0, double Y0){
    GPSX = ((GPSYraw + 287.4015767) + X0);
    GPSY = (GPSXraw - Y0);
    GPSH = (GPSHraw - 90);
}
/*!
 * @function    setStrip4.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStip4(double X0, double Y0){
    GPSX = ((GPSXraw + 287.4015767) + X0);
    GPSY = ((GPSYraw + 287.4015767) + Y0);
    GPSH = (GPSHraw - 180);
}