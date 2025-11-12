#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
class Products
{
private:
    string product_name;
    int product_price;

public:
    Products() : product_name(""), product_price(0) {}
    Products(const string &name, int price) : product_name(name), product_price(price) {}
};
class Inventory
{
private:
    std::map<int, Products> products;

public:
    void addProduct(string product_name, int price)
    {
        static int next_id = 0;
        products[next_id] = Products(product_name, price);
        next_id++;
    }
    void removeProduct()
    {
    }
    void updateQuantity()
    {
    }
    void findProductById()
    {
    }
    void sortProductsByName()
    {
    }
    void listAllProducts()
    {
    }
    void listProductsBelowQuantity()
    {
    }
    void calculateTotalInvemtoryValue()
    {
    }
};
class Menu
{
public:
    Menu(Inventory &currentInventory)
    {
        while (true)
        {
            string answer;
            cout << "-------Welcome--------\n";

            cout << "1.Add A Product";
            cout << "2.Remove A Product ";
            cout << "3.Update A Product Quantity";
            cout << "4.Find A Product";
            cout << "5.List All Products";
            cout << "6.List All Products Below Quantity";
            cout << "7.Sort Products By Name";
            cout << "8.Calculate Total Inventory Value";
            cout << "Type (1-5) or Type 'exit' to exit\n"
                 << endl;

            cin >> answer;

            if (answer == "1")
            {
                string product_name;
                int product_price;
                cout << "Enter Product Name: " << "\n"
                     << endl;
                cin >> product_name;
                cout << "Enter Product Price: " << "\n"
                     << endl;
                cin >> product_price;

                currentInventory.addProduct(product_name, product_price);
            }
            else if (answer == "2")
            {
                currentInventory.removeProduct();
            }
            else if (answer == "3")
            {
                currentInventory.updateQuantity();
            }
            else if (answer == "4")
            {
                currentInventory.findProductById();
            }
            else if (answer == "5")
            {
                currentInventory.listAllProducts();
            }
            else if (answer == "6")
            {
                currentInventory.listProductsBelowQuantity();
            }
            else if (answer == "7")
            {
                currentInventory.sortProductsByName();
            }
            else if (answer == "8")
            {
                currentInventory.calculateTotalInvemtoryValue();
            }
            else if (answer == "exit")
            {
                cout << "Good Bye! \n";
                break;
            }
        }
    }
};

int main()
{
    Inventory mainInventory;
    Menu mainMenu(mainInventory);

    return 0;
}