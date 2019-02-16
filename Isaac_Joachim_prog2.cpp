//-------------------------------------------------------------------------------------------
//
//  
//
//  
//
//   Purpose:
//
//
//
//
//-------------------------------------------------------------------------------------------

#include <iostream>
#include <math.h>
using namespace std;





class Circle{
private:
    double radius=1.0;
    int degrees;
    double circle_Area;
    double circle_Arc_length;
    
public:
    //default Constructor.
    Circle(){
        
    }
    
    //Parameterized construtor.
    Circle(int x,int y){
        
    }
    
    //Getter function1
    double getRadius(){
        
        return radius;
    }
    
    //Getter function2
    int getDegrees(){
        
        return degrees;
    }
    
    //setter function for the radius of the circle.
    void setRadius(int r){
        if(r<=0)
        radius= 1.0;
        else
        radius = r;
    }
    
    void setDegrees(int d){
        degrees = d;
        //no need for data validation since degrees can be measured by negative and positive.
    }
    
    //function that calcualtes the area of the circle.
    double cal_Area(){
        
        circle_Area = (0.5)*(2 * M_PI) * radius^2;
        
        return circle_Area;
    }
    
    double cal_Circle_Arc(){
        
        
        circle_Arc_length = radius * degrees;
        
        return circle_Arc_length;
    }
    
    
    
    
    //Deconstructor
    ~Circle(){
        
    }
    
    
    
    
    
};




















int main()
{
    return 0;
}
