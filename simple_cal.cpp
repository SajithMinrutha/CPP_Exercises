#include <iostream>

int add(int x, int y);
int subtract(int x, int y);
int divide(int x, int y);
int multiply(int x, int y);

int main()
{
    int x, y, output;
    char operation;

    do
    {
        std::cout << "Hi, welcome to my calculator! " << std::endl;
        std::cout << "Enter the first number: ";
        std::cin >> x;

        std::cout << "Which operation do you want to perform? (*, /, -, +) or type q to exit: ";
        std::cin >> operation;

        if (operation == 'q')
        {
            std::cout << "Thanks for using my calculator! BYE!" << std::endl;
            return 0;
        }

        std::cout << "Enter the second number: ";
        std::cin >> y;

        switch (operation)
        {
        case '/':
            if (y == 0)
            {
                std::cout << "You cannot divide by zero!" << std::endl;
            }
            else
            {
                output = divide(x, y);
                std::cout << "Result: " << output << std::endl;
            }
            break;
        case '*':
            output = multiply(x, y);
            std::cout << "Result: " << output << std::endl;
            break;
        case '-':
            output = subtract(x, y);
            std::cout << "Result: " << output << std::endl;
            break;
        case '+':
            output = add(x, y);
            std::cout << "Result: " << output << std::endl;
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
        }

    } while (true);

    return 0;
}

int add(int x, int y) { return x + y; }
int subtract(int x, int y) { return x - y; }
int divide(int x, int y) { return x / y; }
int multiply(int x, int y) { return x * y; }
