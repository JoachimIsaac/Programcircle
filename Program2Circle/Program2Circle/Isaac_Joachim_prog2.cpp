//-------------------------------------------------------------------------------------------
//
//   Name:Joachim Isaac
//
//   Course:
//
//   Purpose:
//
//
//
//
//-------------------------------------------------------------------------------------------

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;





class Circle{
private:
    double radius;
    double degrees;
    double circle_Area;
    double circle_Arc_length;
    double in_radians;
    
public:
    //default Constructor.
    Circle(){
        radius = 1.0;
        degrees =0.0;
        circle_Area = 0.0;
        circle_Arc_length = 0.0;
        in_radians = 0.0;
    }
    
    //Parameterized construtor.
    Circle(int r,int d){
        radius = r;
        degrees = d;
    }
    
    //Getter function for radius.
    double getRadius(){
        
        return radius;
    }
    
    //Getter function for degrees.
    double getDegrees(){
        
        return degrees;
    }
    
    // getter function for in_radians.
    double getDegree_to_radians(){
        
        return in_radians;
    }
    
    //setter function for the radius of the circle.
    void setRadius(double r){
        if(r<=0)
        radius= 1.0;
        else
        radius = r;
    }
    
    void setDegrees(double d){
        degrees = d;
        //no need for data validation since degrees can be measured by negative and positive.
    }
    
    //function that calcualtes the area of the circle.
    double  cal_Area(){
        
        circle_Area = (0.5) * degrees * (radius * radius);
        
        return circle_Area;
    }
    
    double cal_Circle_Arc(){
    
        circle_Arc_length = radius * degrees;
        
        return circle_Arc_length;
    }
    
    
    double cal_degrees_to_radians(){
        
        in_radians = degrees * M_PI/180; // M_PI is the object for the value of pi.
                                        // this equation converts degrees into radians
        return in_radians;
    }
    
    
    //Deconstructor
    ~Circle(){
        
    }
    
    
    
    
    
};




















int main(){
    double r=0,d=0;
    
    cout <<"Please enter the radiaus of the circle that you want to calculate.";
    cin >> r;
    
    
    
    
    
    
    return 0;
}
