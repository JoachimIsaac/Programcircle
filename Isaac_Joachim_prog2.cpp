//-------------------------------------------------------------------------------------------
//
// 
//   Purpose:<< This program accepts the value of the radius and degrees from the user
//              then it calculates these values to get the degrees converted into radians,
//              the arc length of the angle within the circle and the area of the angle
//              within the circle. After the calculations have been made it prints out these
//              values for the user.
//
//-------------------------------------------------------------------------------------------

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


class Circle{
private:
    double radius;
    double degrees;
    double circle_Area;
    double circle_Arc_length;
    double in_radians;
    
public:
//Default constructor which initializes all the variables to zero.
    Circle(){
        radius = 0.0;
        degrees = 0.0;
        circle_Area = 0.0;
        circle_Arc_length = 0.0;
        in_radians = 0.0;
    }
    
//Parameterized construtor that initializes radius and degrees to the values
//that will be passed in.
    Circle(int r,int d){
        radius = r;
        degrees = d;
    }
    
   
    //Getter function for radius,it returns what the radius value contains.
    double getRadius(){
        
        return radius;
    }
    
    //Getter function for degrees,it returns what the degree value contains.
    double getDegrees(){
        
        return degrees;
    }
    
    //Setter function for the radius of the circle.It does data validation.
    //If the radius is less than or equal to 0 the radius defaults to 1.
    void setRadius(double r){
        if(r <= 0)
        radius = 1.0;
        else
        radius = r;
    }
    
    void setDegrees(double d){
        degrees = d;
    //No need for data validation,since degrees
    //can be measured both negatively and positively.
    }
    
   
    double cal_degrees_to_radians(){
        
        in_radians = degrees * M_PI/180;
        
        // M_PI is the object for the value of pi.
        // This equation converts degrees into radians
        //and returns the value after it is calculated.
        
        return in_radians;
    }
    
    //Function that calcualtes the area of the circle.
    double cal_Area(){
        
    circle_Area = (0.5) * (degrees * M_PI/180) * (radius * radius);
        
    //The equation goes as follows: 1/2 multiplied by the degrees (in radians),
    // multiplied by the radius squared.This is stored in the circle_Area
    //variable and it is returned.
        return circle_Area;
    }
    
    
    double cal_Circle_Arc(){
    
        circle_Arc_length = radius * (degrees * M_PI/180);
        
        //The equation goes as follows: the radius multiplied by
        //theta (degree amount, in radians). Then it is stored in
        //the variable  circle_Arc_length and returned.
        return circle_Arc_length;
    }
    
    
    //Deconstructor
    ~Circle(){
        cout <<"The object has been destoryed!\n";
        // No need to explicitly call this deconstructor.
    }
    
   };



int main(){
    
    double r = 0.0,d = 0.0;
    Circle c;
    
    cout << "Please enter the radius of the circle.\n";
    cin >> r;
    cout<< "Please enter the degrees of the angle within the circle.\n";
    cin >> d;
    //Deconstructor is called after that last input request,since it's
    //going out of scope or leaving the block.
    
    Circle(r,d); //Parameterized constructor is explicitly called here.
    
    c.setRadius(r);
    c.setDegrees(d);
    
    cout << "The radius of your Circle is: "<< c.getRadius() <<" .\n";

    cout << "The amount of degrees of the angle within your circle is: "
    << c.getDegrees()<<" .\n";
   
    cout << "The area of the circle is "<< c.cal_Area()<<" .\n";
    
    cout << "The arc length of the angle on the circle is "
    << c.cal_Circle_Arc()<<" .\n";
    
    cout << "The degrees of the angle on the circle, converted to radians is "
    << c.cal_degrees_to_radians()<<" .\n";
    
    
    
    
    
    
    return 0;
}
