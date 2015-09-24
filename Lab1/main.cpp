#include <iostream>
#define PI 3.141592653589

using namespace std;

class Shape
{

public:
    virtual double getArea()=0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setRadius(int r)
    {
        radius = r;
    }


protected:
    int width;
    int height;
    int radius;

};

class Triangle: public Shape
{

public:
    double getArea()
    {

        return (double)(width*height)/2;
    }
};

class Rectangle: public Shape
{

public:
    double getArea()
    {
        return width*height;
    }
};

class Circle: public Shape
{

public:
    double getArea()
    {
        return (double)(PI*radius*radius);
    }
};


int main()
{
    double total_area=0;

    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);

    cout << "Total Triangle area: " << Tri.getArea() << endl;
    total_area += Tri.getArea();

    Rectangle Rec;
    Rec.setWidth(2);
    Rec.setHeight(4);

    cout << "Area of Rectangle: " << Rec.getArea() << endl;
    total_area += Rec.getArea();

    Circle Cir;
    Cir.setRadius(4);

    cout << "Area of Circle: " << Cir.getArea() << endl;
    total_area += Cir.getArea();

    cout << "Area of All Shapes: " << total_area << endl;

    return 0;
}
