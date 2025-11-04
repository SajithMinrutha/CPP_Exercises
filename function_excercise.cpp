#include <iostream>

int subtract(int x, int y);
int main()
{
    int x = 20;
    int y = 5;
    int result = subtract(x, y);
    std::cout << "The final answer is " << result << std::endl;

    return 0;
}
int subtract(int x, int y)
{
    int result = x - y;
    return result;
}