//-------------------------------------------------------------------------------------------
//
//   Name:Joachim Isaac
//
//   Course:
//
//   Purpose:<< This program will calculate the area of an angle on a circle,
//   the arc length of that angle; and It will also change
//   he degrees of the angle to radians.
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
    //Default Constructor.
    Circle(){
        radius = 0.0;
        degrees = 0.0;
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
    
    //Setter function for the radius of the circle.
    void setRadius(double r){
        if(r<=0)
        radius= 1.0;
        else
        radius = r;
    }
    
    void setDegrees(double d){
        degrees = d;
    //No need for data validation, since degrees
    //can be measured both negatively and positively.
    }
    
    
    double cal_degrees_to_radians(){
        
        in_radians = degrees * M_PI/180;
        // M_PI is the object for the value of pi.
        // this equation converts degrees into radians
        
        return in_radians;
    }
    
    //Function that calcualtes the area of the circle.
    double cal_Area(){
        
    circle_Area = (0.5) * (degrees * M_PI/180) * (radius * radius);
        //The equation goes as follows half multiplied by the degrees in radians,
        //multiplied by the radius squared
        return circle_Area;
    }
    
    double cal_Circle_Arc(){
    
        circle_Arc_length = radius * (degrees * M_PI/180);
        //The equation goes as follows: the radius multiplied by
        //the theta (degree amount, in radians).
        return circle_Arc_length;
    }
    
    
    //Deconstructor
    ~Circle(){
        cout <<"The object has been destoryed! \n";
    }
    
   };



int main(){
    
    double r = 0.0,d = 0.0;
    Circle c;

    
    
    cout << "Please enter the radiaus of the circle.\n";
    cin >> r;
    cout<< "Please enter the degrees of the angle within the circle.\n";
    cin >> d;
    //deconstructor is called after that last input request, since it's
    //going out of scope or leaving the block.
    
    
    Circle(r,d); //parameterized constructor
    c.setRadius(r);
    c.setDegrees(d);
    

    cout << "The radius of your Circle is :"<<c.getRadius()<<"\n";
    
    cout << "The amount of degrees of the angle within your circle is: "
    << c.getDegrees()<<"\n";
    
    cout << "The area of the circle is "<< c.cal_Area()<<"\n";
    
    cout << "The arc length of the angle on the circle is "
    << c.cal_Circle_Arc()<<"\n";
    
    cout << "The degrees of the angle on the circle, converted to radians is  "
    << c.cal_degrees_to_radians()<<"\n";
    
    
    
    
    
    
    return 0;
}
