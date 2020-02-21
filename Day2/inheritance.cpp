#include <iostream>

using namespace std;

class Shape
{
public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() = 0;

protected:
    double width;
    double height;
};

class Rectangle : public Shape
{
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double area() override
    {
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double area() override
    {
        return width * height / 2;
    }
};

void print_area(Shape *shape)
{
    cout << shape->area() << endl;
}

int main()
{
    Rectangle r1(19.3, 34.6);
    Triangle t1(19.3, 34.6);

    print_area(&r1);
    print_area(&t1);
    return 0;
}