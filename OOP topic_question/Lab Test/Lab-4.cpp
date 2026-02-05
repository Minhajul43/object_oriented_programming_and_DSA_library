#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float Price;
    int quantity;
    static int totalproducts;

public:
    Product() {
        productID = 0;
        productName = "";
        Price = 0.0;
        quantity = 0;
        totalproducts++;
    }

    Product(int id, string name, float Price, int qty) {
        productID = id;
        productName = name;
        this->Price = Price;
        quantity = qty;
        totalproducts++;
    }

    static int getTotalProducts() {
        return totalproducts;
    }

    void displayProduct() {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << Price << endl;
        cout << "Quantity in Stock: " << quantity << endl;
    }

    void updateStock(int qty) {
        quantity += qty;
        cout << "Stock updated by " << qty << ". New quantity: " << quantity << endl;
    }

    void updateStock(string msg, int qty) {
        quantity += qty;
        cout << "Stock updated by " << qty << ". Reason: " << msg << ". New quantity: " << quantity << endl;
    }

    float calculateTotalValue() {
        return Price * quantity;
    }

    int getProductID() {
        return productID;
    }

    string getProductIDName() {
        return productName;
    }

    float getPrice() {
        return Price;
    }

    int getQuantity() {
        return quantity;
    }
};

int Product::totalproducts = 0;

int main() {
    const int MAX = 100;
    Product products[MAX];

    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int id, qty;
        string name;
        float price;

        cout << "\nEnter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> qty;

        products[i] = Product(id, name, price, qty);
    }

    cout << "\nTotal Products: " << Product::getTotalProducts() << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nProduct " << i + 1 << " Details:\n";
        products[i].displayProduct();
        cout << "Total Value: $" << products[i].calculateTotalValue() << endl;

        int updateQty;
        cout << "Enter quantity to update stock for Product " << products[i].getProductIDName() << ": ";
        cin >> updateQty;
        products[i].updateStock(updateQty);

        cout << "Update Stock with message for Product " << products[i].getProductIDName() << ": ";
        string msg;
        cin.ignore();
        getline(cin, msg);
        products[i].updateStock(msg, updateQty);

        cout << "\nUpdated Product Info:\n";
        cout << "Product ID: " << products[i].getProductID() << endl;
        cout << "Product Name: " << products[i].getProductIDName() << endl;
        cout << "Price: $" << products[i].getPrice() << endl;
        cout << "Quantity: " << products[i].getQuantity() << endl;
        cout << "Total Value: $" << products[i].calculateTotalValue() << endl;
        cout << "-----------------------------------" << endl;
    }

    return 0;
}
