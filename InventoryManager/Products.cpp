#include "Products.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

Products::Products() : product_name(""), product_price(0) {}
Products::Products(const string &name, int price) : product_name(name), product_price(price) {}
void Products::setQuantity(int new_quantity)
{
    quantity = new_quantity;
    cout << "The product quantity is successfully updated to " << new_quantity;
};
int Products::getQuantity() const
{
    return quantity;
}
string Products::getName() const
{
    return product_name;
}
int Products::getPrice() const
{
    return product_price;
}