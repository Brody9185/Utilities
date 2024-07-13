#include "pros/gps.hpp"
#include "pros/gps.hpp"



class GPSPositioning
{
public:

pros::v5::Gps gps;

GPSPositioning(int gps);

//Vars
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
};
//functions
/*!
 * @function    GetGPS.
 * @discussion  This function defines the raw GPS values for LEMLib use..
*/
void GetGPS(GPSPositioning& sensor);

/*!
 * @function    setStrip1.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStrip1(double X0, double Y0);
/*!
 * @function    setStrip2.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStrip2(double X0, double Y0);
/*!
 * @function    setStrip3.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStrip3(double X0, double Y0);
/*!
 * @function    setStrip4.
 * @discussion  This function defines the 0,0 cordinates on the field.
 * @discussion  Place GPSX, GPSY, and GPSH into setPose() in order to complete this.
 * @discussion  Make sure you check which GPS Strip you are placing your robot against.
 * @discussion  Place this at the top of each auton.
 * @param       X0    The X coridnate for the x-intercept.
 * @param       Y0    The Y coridnate for the y-intercept.
*/
void setStrip4(double X0, double Y0);