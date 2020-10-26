
#ifndef Figures_h
#define Figures_h
#include <iostream>
using namespace std;
class Figures{
private:
   //double RED, GREEN, BLUE, Opacity, Area, Perimeter;
public:
    double RED, GREEN, BLUE, Opacity;
    void SetColor(int R, int G, int B){
    RED = R;
    GREEN = G;
    BLUE = B;
    }

    void SetOpacity(double O){
    Opacity = O;
    }

    void PrintColor(){
    cout << "Цвет фигуры(RGB): " << RED << " , " << GREEN << " , " << BLUE << endl;
    }

    void PrintOpacity(){
    cout << "Прозрачность фигуры: " << Opacity << "%" << endl;
    }
    
};

#endif /* Figures_h */
