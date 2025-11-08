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
    double radius = 10.14;
    const double pi = std::numbers::pi;

public:
    double area() override { return pi * radius * radius; }
    void draw() override { cout << "Drawing the circle now!\n"; }
    ~Circle() override {}
};

class Rectangle : public Shape
{
private:
    double width = 10.09;
    double height = 12.11;

public:
    double area() override { return width * height; }
    void draw() override { cout << "Drawing the rectangle now!\n"; }
    ~Rectangle() override {}
};

int main()
{
    vector<Shape *> shapes;
    shapes.push_back(new Circle);
    shapes.push_back(new Rectangle);

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
