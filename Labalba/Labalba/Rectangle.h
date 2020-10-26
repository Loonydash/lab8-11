
#ifndef Rectangle_h
#define Rectangle_h
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;
class Rect: virtual public Figures{
private:

public:
    double x1, x2, y1, y2, a, RectangleArea, RectanglePerimeter;
    
    Rect(){
        RED =0;
        GREEN = 0;
        BLUE = 0;
        Opacity =0;
        x1=0;
        x2=0;
        y1=0;
        y2=0;
        a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
        Area();
        Perimeter();
    }
    
void Setxy(double x11, double y11, double x22, double y22){
x1 = x11;
y1 = y11;
x2 = x22;
y2 = y22;
a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}
    

void Area(){
RectangleArea = a*a;
}

void Perimeter(){
RectanglePerimeter = a*4;
}

void PrintArea(){
cout << "Площадь прямоугольника: " << RectangleArea << endl;
}

void PrintPerimeter(){
cout << "Периметр прямоугольника: " << RectanglePerimeter << endl;
}

void PrintXY(){
cout << "Координаты линии прямоугольника: " << "(" << x1 << " , " << y1 << "), " << "(" << x2 << " , " << y2 << "), " << endl;
}
    void MashtabPlus(double procent){
        RectangleArea = RectangleArea*(1+procent/100);
        a = sqrt(RectangleArea);
        Perimeter();
    }
    void MashtabMinus(double procent){
           RectangleArea = RectangleArea*(1-procent/100);
           a = sqrt(RectangleArea);
           Perimeter();
       }
    void Rotating(double angle){
        double x11, y11, x22, y22;
        x11 = x1;
        y11 = y1;
        x22 = x2;
        y22 = y2;
        x1 = x11*cos(angle) - y11*sin(angle);
        y1 = x11*sin(angle) + y11*cos(angle);
        x2 = x22*cos(angle) - y22*sin(angle);
        y2 = x22*sin(angle) + y22*cos(angle);
    }
    
};
#endif /* Rectangle_h */
