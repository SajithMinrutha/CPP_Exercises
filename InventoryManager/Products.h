#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <iostream>
#include <string>
using std::string;

class Products
{
private:
    int product_price;
    int quantity;
    string product_name;

public:
    Products();
    Products(const string &name, int price);
    void setQuantity(int new_quantity);
    int getQuantity() const;
    int getPrice() const;
    string getName() const;
};
#endif