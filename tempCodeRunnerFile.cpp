#include <iostream>
#include <vector>
#include <numbers>
using std::cout;
using std::vector;

class Shape
{
public:
    virtual double area() = 0;
    virtual void draw() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double &radius;
    const double pi = std::numbers::pi;

public:
    Circle(double &user_radius) : radius(user_radius) {};
    double area() override { return pi * radius * radius; }
    void draw() override { cout << "Drawing the circle now!\n"; }
    ~Circle() override {}
};

class Rectangle : public Shape
{
private:
    double &width;
    double &height;

public:
    Rectangle(double &user_width, double &user_height) : width(user_width), height(user_height) {}
    double area() override { return width * height; }
    void draw() override { cout << "Drawing the rectangle now!\n"; }
    ~Rectangle() override {}
};

int main()
{
    double r = 10.8;
    double w = 11.2;
    double h = 9.9;
    vector<Shape *> shapes;
    shapes.push_back(new Circle(r));
    shapes.push_back(new Rectangle(w, h));

    for (auto s : shapes)
    {
        s->draw();
        cout << "Area is " << s->area() << "\n";
    }

    // Cleanup
    for (auto &s : shapes)
    {
        delete s;
        s = nullptr;
    }
}
