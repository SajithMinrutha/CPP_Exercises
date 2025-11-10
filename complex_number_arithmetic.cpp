#include <iostream>

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double a = 0.0, double b = 0.0) : real(a), imaginary(b) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator-() const
    {
        return Complex(-real, -imaginary);
    }

    friend std::ostream &operator<<(std::ostream &os, const Complex &c);
    friend std::istream &operator>>(std::istream &is, Complex &c);
};

std::ostream &operator<<(std::ostream &os, const Complex &c)
{
    os << c.real;
    if (c.imaginary > 0)
        os << " + " << c.imaginary << "i";
    else if (c.imaginary < 0)
        os << " - " << -c.imaginary << "i";
    return os;
}

std::istream &operator>>(std::istream &is, Complex &c)
{
    cout << "Enter real number: ";
    is >> c.real;
    cout << "Enter imaginary number: ";
    is >> c.imaginary;
    return is;
}

int main()
{
    Complex c1(3.5, 2.0);
    Complex c2(1.0, -1.5);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = -c1;

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 + c2 = " << c3 << std::endl;
    std::cout << "c1 - c2 = " << c4 << std::endl;
    std::cout << "-c1 = " << c5 << std::endl;

    Complex c6;
    std::cin >> c6;
    cout << c6 << endl;

    return 0;
}
