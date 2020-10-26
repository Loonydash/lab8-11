
#ifndef Circle_h
#define Circle_h
#include <iostream>
#include <cmath>
#include <iomanip>
#include "Figures.h"
using namespace std;
class Circle: virtual public Figures {
    
private:

public:
    double x,y, r, CircleArea, CirclePerimeter;
//    Circle(double,double,double,double,double,double,double,double,double,double);
    
    Circle(){
        RED =0;
        GREEN = 0;
        BLUE = 0;
        Opacity =0;
        x=0;
        y=0;
        r=0;
        Area();
        Perimeter();
    }
    
void Setxyr(double x1, double y1, double r1){
x = x1;
y = y1;
r = r1;
}
    
void Area(){
CircleArea = M_PI * r * r;
}
    
void Perimeter(){
CirclePerimeter = 2 * M_PI * r;
}

    void MathtabPlus(double Procent){
        CircleArea = CircleArea*(1+(Procent/100));
        r = sqrt(CircleArea/M_PI);
        Perimeter();
    }
    
    void MathtabMinus(double Procent){
        CircleArea = CircleArea*(1-(Procent/100));
        r = sqrt(CircleArea/M_PI);
        Perimeter();
    }
    
    void Rotating(double angle){
        double x11, y11;
        x11 = x;
        y11 = y;
        x = x11*cos(angle) - y11*sin(angle);
        y = x11*sin(angle) + y11*cos(angle);
    }
    
void PrintXYR(){
cout <<"Координаты центра круга и радиус: " << "("<< x << " , " << y << ")"<<", r = " << r << endl;
}
    
void PrintArea(){
cout << "Площадь круга: " << CircleArea << endl;
}
    
void PrintPerimeter(){
cout << "Периметр круга: " << CirclePerimeter << endl;
}
    
};
#endif /* Circle_h */
