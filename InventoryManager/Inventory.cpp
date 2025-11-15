#include "Products.h"
#include "Inventory.h"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;

int Inventory::next_id = 1;

void Inventory::addProduct(string product_name, int price)
{
    products[Inventory::next_id] = Products(product_name, price);
    cout << "Product '" << product_name << "' added with ID: " << Inventory::next_id << std::endl;
    Inventory::next_id++;
}
void Inventory::removeProduct(int id)
{
    if (products.contains(id))
    {
        products.erase(id);
    }
    else
    {
        cout << "The Product with the id " << id << " doesn't exist!\n";
    }
}
void Inventory::updateQuantity(int id, int new_quantity)
{
    products[id].setQuantity(new_quantity);
}
void Inventory::findProductById(int id)
{
    if (products.contains(id))
    {
        Products product_is = products[id];
        string prod = product_is.getName();
        cout << "The product with the id " << id << " is " << prod << "\n";
    }
    else
    {
        cout << "The Product with the id " << id << " doesn't exist!\n";
    }
}
void Inventory::sortProductsByName()
{
    std::vector<std::pair<int, Products>> v;
    std::copy(products.begin(), products.end(), std::back_inserter(v));
    std::sort(v.begin(), v.end(), [](const auto &a, const auto &b)
              { return a.second.getName() < b.second.getName(); });

    for (const auto &p : v)
    {
        cout << p.first << " " << p.second.getName() << "\n";
    }
}
void Inventory::listAllProducts()
{
    for (auto &item : products)
    {
        cout << "ID: " << item.first
             << ", Name: " << item.second.getName()
             << ", Quantity: " << item.second.getQuantity()
             << ", Price: " << item.second.getPrice() // if you have getPrice()
             << "\n";
    }
}
void Inventory::listProductsBelowQuantity(int quantity)
{
    std::cout << "Products with quantity below " << quantity << ":\n";

    for (auto &item : products)
    {
        if (item.second.getQuantity() < quantity)
        {
            cout << "ID: " << item.first
                 << ", Name: " << item.second.getName()
                 << ", Quantity: " << item.second.getQuantity()
                 << "\n";
        }
    }
}

void Inventory::calculateTotalInventoryValue()
{
    double totalValue = 0;

    for (const auto &item : products)
    {
        totalValue += item.second.getQuantity() * item.second.getPrice();
    }

    cout << "Total inventory value: $" << totalValue << "\n";
}
