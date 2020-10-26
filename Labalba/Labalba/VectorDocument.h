
#ifndef VectorDocument_h
#define VectorDocument_h
#include <iostream>
#include <iomanip>
#include <cmath>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;
const int NUM = 3;
class VectorDocument{
private:
public:
    Circle *ArrayCircles[NUM];
    Circle *ptrCircle;
    Circle *ptrCircle1;
    Circle *ptrCircle2;
    
    Rect *ArrayRectangles[NUM];
    Rect *ptrRectangles;
    Rect *ptrRectangles1;
    Rect *ptrRectangles2;
    
    void AddCircle(int i){
        ptrCircle = new Circle;
        ArrayCircles[i-1] = ptrCircle;
    }
    void DeleteCircle(int i){
        delete ArrayCircles[i-1];
    }
    
    void AddRectangle(int i){
        ptrRectangles = new Rect;
        ArrayRectangles[i-1] = ptrRectangles;
    }
       
    void DeleteRectangle(int i){
        delete ArrayRectangles[i-1];
    }
       
    void SetCircleOpacity(int opacity, int i){
        ArrayCircles[i-1] -> SetOpacity(opacity);
    }
    
    void PrintCircleOpacity(int i){
        ArrayCircles[i-1] -> PrintOpacity();
    }
    void SetRectangleOpacity(int opacity, int i){
        ArrayRectangles[i-1] -> SetOpacity(opacity);
    }
    
    void PrintRectangleOpacity(int i){
        ArrayRectangles[i-1] -> PrintOpacity();
    }
    
    void SetCircleColor(int R, int G, int B, int i){
        ArrayCircles[i-1] -> SetColor(R, G, B);
    }
    
    void SetRectangleColor(int R, int G, int B, int i){
        ArrayRectangles[i-1] -> SetColor(R, G, B);
    }
    
    void PrintCircleColor(int i){
        ArrayCircles[i-1] -> PrintColor();
    }
    
    void PrintRectangleColor(int i){
         ArrayRectangles[i-1] -> PrintColor();
     }
    
    void PrintCircleArea(int i){
        ArrayCircles[i-1] -> PrintArea();
    }
    
    void PrintRectangleArea(int i){
        ArrayRectangles[i-1] -> PrintArea();
    }
    
    void PrintCirclePerimeter(int i){
        ArrayCircles[i-1] -> PrintPerimeter();
    }
    
    void PrintRectanglePerimeter(int i){
        ArrayRectangles[i-1] -> PrintPerimeter();
    }
    
    void PrintCircleXYR(int i){
        ArrayCircles[i-1] -> PrintXYR();
    }
    
    void PrintRectangleXY(int i){
        ArrayRectangles[i-1] -> PrintXY();
    }
    
    void SetxyrCircle(double x, double y, double r, int i){
        ArrayCircles[i-1] -> Setxyr(x, y, r);
        ArrayCircles[i-1] -> Area();
        ArrayCircles[i-1] -> Perimeter();
    }
    
    void SetxyRectangle(double x11, double y11, int x22, double y22, int i){
        ArrayRectangles[i-1] -> Setxy(x11, y11, x22, y22);
        ArrayRectangles[i-1] -> Area();
        ArrayRectangles[i-1] -> Perimeter();
    }
    
    
    void MoveToCircles(int i, int j){
        ptrCircle1 = ArrayCircles[i-1];
        ptrCircle2 = ArrayCircles[j];
        ArrayCircles[j] = ptrCircle1;
        ArrayCircles[i-1] = ptrCircle2;
    }
    
    void MoveToRectangles(int i, int j){
        ptrRectangles1 = ArrayRectangles[i-1];
        ptrRectangles2 = ArrayRectangles[j];
        ArrayRectangles[j] = ptrRectangles1;
        ArrayRectangles[i-1] = ptrRectangles2;
    }
    
    void MashtabPlus(double procent){
        for (int i=0; i<NUM; i++){
            ArrayCircles[i] -> MathtabPlus(procent);
            ArrayRectangles[i] -> MashtabPlus(procent);
        }
    }
    
    void MashtabMinus(double procent){
        for (int i=0; i<NUM; i++){
            ArrayCircles[i] -> MathtabMinus(procent);
            ArrayRectangles[i] -> MashtabMinus(procent);
        }
    }
    
    void Rotating(double angle){
        for (int i=0; i<NUM; i++){
            ArrayCircles[i] -> Rotating(angle);
            ArrayRectangles[i] -> Rotating(angle);
        }
    }
    
};

#endif /* VectorDocument_h */
