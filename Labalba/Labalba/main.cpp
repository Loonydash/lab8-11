
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "VectorDocument.h"
#include "json.hpp"
#include <string>


using namespace std;
VectorDocument print_menu(VectorDocument Document)
{
    
    for(int k=0;k<3;k++){
        Document.AddCircle(k+1);
        Document.AddRectangle(k+1);
    }
    
    int vibor;
    while(true){
        cout << "Что вы хотите сделать: " << endl;
        cout << "Чтобы добавить фигуру - 1"<< endl;
        cout << "Чтобы удалить фигуру - 2"<< endl;
        cout << "Чтобы работать с кругом - 3"<< endl;
        cout << "Чтобы работать с прямоугольником - 4"<< endl;
        cout << "Чтобы работать со всем документом - 5"<< endl;
        cout << "Чтобы выйти - 0"<< endl;
        cin >> vibor;
        switch (vibor) {
            case 1:
                int icase1;
                cout << "Какую фигуру вы хотите добавить?" << endl;
                cout << "Круг - 1" << endl;
                cout << "Прямоугольник - 2" << endl;
                cin >> icase1;
                    switch (icase1) {
                        case 1:
                            int icase11;
                            cout << "На какое место вы хотите его поставить?" <<endl;
                            cin >> icase11;
                            Document.AddCircle(icase11);
                            break;
                        case 2:
                            int icase12;
                            cout << "На какое место вы хотите его поставить?" << endl;
                            cin >> icase12;
                            Document.AddRectangle(icase12);
                            break;
                        default: cout << "Вы выбрали неверный вариант" << endl;
                            break;
                    }
                break;
            
            case 2:
                int icase2;
                cout << "Какую фигуру вы хотите удалить?" << endl;
                cout << "Круг - 1" << endl;
                cout << "Прямоугольник - 2" << endl;
                cin >> icase2;
                
                    switch (icase2) {
                        case 1:
                            int icase21;
                            cout << "С какого места вы хотите его удалить?" <<endl;
                            cin >> icase21;
                            Document.DeleteCircle(icase21);
                            break;
                        case 2:
                            int icase22;
                            cout << "С какого места вы хотите его удалить?" << endl;
                            cin >> icase22;
                            Document.DeleteRectangle(icase22);
                            break;
                        
                        default: cout << "Вы выбрали неверный вариант" << endl;
                            break;
                    }
                break;
            case 3:
                int xc, yc, rc, CR, CG, CB, COpacity;
                int icase3;
                cout << "С каким кругом вы хотите работать?" << endl;
                cin >> icase3;
                for (int i =0; i !=1; ){
                    cout << "Что вы хотите сделать с кругом?" << endl;
                    cout << "Задать координаты и радиус - 1" << endl;
                    cout << "Задать цвет - 2" << endl;
                    cout << "Задать прозрачность - 3" << endl;
                    cout << "Вывести информацию - 4" << endl;
                    cout << "Выход - 0" << endl;
                    int icase31;
                    cin >>icase31;
                    switch (icase31) {
                        case 1:
                            cout << "x: ";
                            cin >> xc;
                            cout << "y: ";
                            cin >> yc;
                            cout << "r: ";
                            cin >> rc;
                            Document.SetxyrCircle(xc, yc, rc, icase3);
                            break;
                        
                        case 2:
                            cout << "R: ";
                            cin >> CR;
                            cout << "G: ";
                            cin >> CG;
                            cout << "B: ";
                            cin >> CB;
                            Document.SetCircleColor(CR, CG, CB, icase3);
                            break;
                            
                        case 3:
                            cout << "Прозрачность %: ";
                            cin >> COpacity;
                            Document.SetCircleOpacity(COpacity, icase3);
                            break;
                        
                        case 4:
                            Document.PrintCircleXYR(icase3);
                            Document.PrintCircleArea(icase3);
                            Document.PrintCircleColor(icase3);
                            Document.PrintCircleOpacity(icase3);
                            Document.PrintCirclePerimeter(icase3);
                            break;
                            
                        case 0:
                            i=1;
                            break;
                            
                        default: cout << "Вы выбрали неверный вариант";
                            break;
                    }
                    
                }
               break;
               
            case 4:
                int x1, y1, x2, y2, RR, RG, RB, ROpacity;
                               int icase4;
                               cout << "С каким прямоугольником вы хотите работать?" << endl;
                               cin >> icase4;
                               for (int i =0; i !=1; ){
                                   cout << "Что вы хотите сделать с прямоугольником?" << endl;
                                   cout << "Задать координаты точек - 1" << endl;
                                   cout << "Задать цвет - 2" << endl;
                                   cout << "Задать прозрачность - 3" << endl;
                                   cout << "Вывести информацию - 4" << endl;
                                   cout << "Выход - 0" << endl;
                                   int icase41;
                                   cin >>icase41;
                                   switch (icase41) {
                                       case 1:
                                           cout << "x1: ";
                                           cin >> x1;
                                           cout << "y1: ";
                                           cin >> y1;
                                           cout << "x2: ";
                                           cin >> x2;
                                           cout << "y2: ";
                                           cin >> y2;
                                           Document.SetxyRectangle(x1, y1, x2, y2, icase4);
                                           break;
                                       
                                       case 2:
                                           cout << "R: ";
                                           cin >> RR;
                                           cout << "G: ";
                                           cin >> RG;
                                           cout << "B: ";
                                           cin >> RB;
                                           Document.SetRectangleColor(RR, RG, RB, icase4);
                                           break;
                                           
                                       case 3:
                                           cout << "Прозрачность %: ";
                                           cin >> ROpacity;
                                           Document.SetRectangleOpacity(ROpacity, icase4);
                                           break;
                                       
                                       case 4:
                                           Document.PrintRectangleXY(icase4);
                                           Document.PrintRectangleArea(icase4);
                                           Document.PrintRectangleColor(icase4);
                                           Document.PrintRectanglePerimeter(icase4);
                                           Document.PrintRectangleOpacity(icase4);
                                           break;
                                           
                                       case 0:
                                           i=1;
                                           break;
                                           
                                       default: cout << "Вы выбрали неверный вариант" << endl;
                                           break;
                                   }
                                   
                               }
                break;
                
            case 5:
                int pr;
                int icase5, icase51, icase53, circle1, circle2, rectangle1, rectangle2;
                double angle;
                
                cout << "Что вы хотите сделать?" << endl;
                for (int i =0; i !=1;){
                    cout << "Масштабирование - 1"  << endl;
                    cout << "Вращение - 2"  << endl;
                    cout << "Поменять местами - 3"  << endl;
                    cout << "Выход - 0"  << endl;
                    cin >> icase5;
                    switch (icase5) {
                        case 1:
                            cout << "Масштабирование всех фигур" << endl;
                                           cout << "Увеличить на % - 1" << endl;
                                           cout << "Уменьшить на % - 2" << endl;
                                           cin >> icase51;
                                           switch (icase51) {
                                               case 1:
                                                   cout << "На сколько процентов хотите увеличить?"<< endl;
                                                   cin >> pr;
                                                   Document.MashtabPlus(pr);
                                                   break;
                                               case 2:
                                                   cout << "На сколько процентов хотите уменьшить?"<< endl;
                                                   cin >> pr;
                                                   Document.MashtabMinus(pr);
                                               default:
                                                   cout << "Вы ввели неверный вариант"<< endl;
                                                   break;
                                           }
                            break;
                            
                        case 2:
                            cout << "На какой угол вы хотите вращать весь документ?" << endl;
                            cin >> angle;
                            Document.Rotating(angle);
                            break;
                            
                        case 3:
                            
                            cout << "Поменять местами круги - 1" << endl;
                            cout << "Поменять местами прямоугольники - 2" << endl;
                            cin >> icase53;
                            switch (icase53) {
                                case 1:
                                    cout << "Какие круги вы хотите поменять местами: " << endl;
                                    cout << "Место первого: ";
                                    cin >> circle1;
                                    cout << "Место Второго: ";
                                    cin >> circle2;
                                    Document.MoveToCircles(circle1, circle2);
                                    break;
                                case 2:
                                    cout << "Какие прямоугольники вы хотите поменять местами: " << endl;
                                    cout << "Место первого: ";
                                    cin >> rectangle1;
                                    cout << "Место Второго: ";
                                    cin >> rectangle2;
                                    Document.MoveToCircles(rectangle1, rectangle2);
                                    break;
                                default: cout << "Вы ввели неверный вариант"<< endl;
                                    break;
                            }
                            break;
                            
                        case 0:
                            i=1;
                            break;
                            
                        default:
                            cout << "Вы ввели неверный вариант"<< endl;
                            break;
                    }
                }
              
                break;
                
                default:
                cout << "Вы выбрали неверный вариант"<< endl;
                break;
            case 0:
                return (Document);
        }
        
    }
}

void tojson(VectorDocument tojson){
    //Circles
    
    nlohmann::json j1{};
    j1["c1_x"] = tojson.ArrayCircles[0]->x;
    j1["c1_y"] = tojson.ArrayCircles[0]->y;
    j1["c1_r"] = tojson.ArrayCircles[0]->r;
    j1["c1_RED"] = tojson.ArrayCircles[0]->RED;
    j1["c1_GREEN"] = tojson.ArrayCircles[0]->GREEN;
    j1["c1_BLUE"] = tojson.ArrayCircles[0]->BLUE;
    j1["c1_Opacity"] = tojson.ArrayCircles[0]->Opacity;
    j1["c1_Area"] = tojson.ArrayCircles[0]->CircleArea;
    j1["c1_Perimeter"] = tojson.ArrayCircles[0]->CirclePerimeter;
    
    j1["c2_x"] = tojson.ArrayCircles[1]->x;
    j1["c2_y"] = tojson.ArrayCircles[1]->y;
    j1["c2_r"] = tojson.ArrayCircles[1]->r;
    j1["c2_RED"] = tojson.ArrayCircles[1]->RED;
    j1["c2_GREEN"] = tojson.ArrayCircles[1]->GREEN;
    j1["c2_BLUE"] = tojson.ArrayCircles[1]->BLUE;
    j1["c2_Opacity"] = tojson.ArrayCircles[1]->Opacity;
    j1["c2_Area"] = tojson.ArrayCircles[1]->CircleArea;
    j1["c2_Perimeter"] = tojson.ArrayCircles[1]->CirclePerimeter;
    
    j1["c3_x"] = tojson.ArrayCircles[2]->x;
    j1["c3_y"] = tojson.ArrayCircles[2]->y;
    j1["c3_r"] = tojson.ArrayCircles[2]->r;
    j1["c3_RED"] = tojson.ArrayCircles[2]->RED;
    j1["c3_GREEN"] = tojson.ArrayCircles[2]->GREEN;
    j1["c3_BLUE"] = tojson.ArrayCircles[2]->BLUE;
    j1["c3_Opacity"] = tojson.ArrayCircles[2]->Opacity;
    j1["c3_Area"] = tojson.ArrayCircles[2]->CircleArea;
    j1["c3_Perimeter"] = tojson.ArrayCircles[2]->CirclePerimeter;
    
    //Rectangles
    j1["r1_x1"] = tojson.ArrayRectangles[0]->x1;
    j1["r1_x2"] = tojson.ArrayRectangles[0]->x2;
    j1["r1_y1"] = tojson.ArrayRectangles[0]->y1;
    j1["r1_y2"] = tojson.ArrayRectangles[0]->y2;
    j1["r1_RED"] = tojson.ArrayRectangles[0]->RED;
    j1["r1_GREEN"] = tojson.ArrayRectangles[0]->GREEN;
    j1["r1_BLUE"] = tojson.ArrayRectangles[0]->BLUE;
    j1["r1_Opacity"] = tojson.ArrayRectangles[0]->Opacity;
    j1["r1_Area"] = tojson.ArrayRectangles[0]->RectangleArea;
    j1["r1_Perimeter"] = tojson.ArrayRectangles[0]->RectanglePerimeter;
    
    j1["r2_x1"] = tojson.ArrayRectangles[1]->x1;
    j1["r2_x2"] = tojson.ArrayRectangles[1]->x2;
    j1["r2_y1"] = tojson.ArrayRectangles[1]->y1;
    j1["r2_y2"] = tojson.ArrayRectangles[1]->y2;
    j1["r2_RED"] = tojson.ArrayRectangles[1]->RED;
    j1["r2_GREEN"] = tojson.ArrayRectangles[1]->GREEN;
    j1["r2_BLUE"] = tojson.ArrayRectangles[1]->BLUE;
    j1["r2_Opacity"] = tojson.ArrayRectangles[1]->Opacity;
    j1["r2_Area"] = tojson.ArrayRectangles[1]->RectangleArea;
    j1["r2_Perimeter"] = tojson.ArrayRectangles[1]->RectanglePerimeter;
    
    j1["r3_x1"] = tojson.ArrayRectangles[2]->x1;
    j1["r3_x2"] = tojson.ArrayRectangles[2]->x2;
    j1["r3_y1"] = tojson.ArrayRectangles[2]->y1;
    j1["r3_y2"] = tojson.ArrayRectangles[2]->y2;
    j1["r3_RED"] = tojson.ArrayRectangles[2]->RED;
    j1["r3_GREEN"] = tojson.ArrayRectangles[2]->GREEN;
    j1["r3_BLUE"] = tojson.ArrayRectangles[2]->BLUE;
    j1["r3_Opacity"] = tojson.ArrayRectangles[2]->Opacity;
    j1["r3_Area"] = tojson.ArrayRectangles[2]->RectangleArea;
    j1["r3_Perimeter"] = tojson.ArrayRectangles[2]->RectanglePerimeter;
    cout << "Json: " << j1 << endl;
    
    //Пример записи из Json j1 в новый класс
    string meme = j1.dump();
    VectorDocument one{};
    for(int k1=0;k1<3;k1++){
        one.AddRectangle(k1+1);
    }
    nlohmann::json j2 = nlohmann::json::parse(meme);
    one.ArrayRectangles[0]->x1 = j2["r1_x1"].get<double>();
    one.ArrayRectangles[0]->x2 = j2["r1_x2"].get<double>();
    one.ArrayRectangles[0]->y1 = j2["r1_y1"].get<double>();
    one.ArrayRectangles[0]->y2 = j2["r1_y2"].get<double>();
    one.ArrayRectangles[0]->RED = j2["r1_RED"].get<double>();
    one.ArrayRectangles[0]->GREEN = j2["r1_GREEN"].get<double>();
    one.ArrayRectangles[0]->BLUE = j2["r1_BLUE"].get<double>();
    one.ArrayRectangles[0]->Opacity = j2["r1_Opacity"].get<double>();
    one.ArrayRectangles[0]->RectangleArea = j2["r1_Area"].get<double>();
    one.ArrayRectangles[0]->RectanglePerimeter = j2["r1_Perimeter"].get<double>();
    cout << one.ArrayRectangles[0]->x1 << endl;
    cout << one.ArrayRectangles[0]->x2 << endl;
    cout << one.ArrayRectangles[0]->y1 << endl;
    cout << one.ArrayRectangles[0]->y2 << endl;
    cout << one.ArrayRectangles[0]->RED << endl;
    cout << one.ArrayRectangles[0]->GREEN << endl;
    cout << one.ArrayRectangles[0]->BLUE << endl;
    cout << one.ArrayRectangles[0]->Opacity << endl;
    cout << one.ArrayRectangles[0]->RectangleArea << endl;
    cout << one.ArrayRectangles[0]->RectanglePerimeter << endl;
}


int main(int argc, const char * argv[]) {
   setlocale(LC_ALL, "ru");
    VectorDocument Document;
    tojson(print_menu(Document));
    return 0;
}
