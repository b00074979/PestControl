#include <iostream>

using namespace std;

class Shape
{

public:
    virtual int getArea()=0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }


protected:
    int width;
    int height;
};

class Triangle: public Shape
{

public:
    int getArea()
    {

        return (width*height)/2;
    }
};

class Rectangle: public Shape
{

public:
    int getArea()
    {
        return width*height;
    }
};

int main()
{
    int total_area=0;

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



    cout << "Area of All Shapes: " << total_area << endl;

    return 0;
}
