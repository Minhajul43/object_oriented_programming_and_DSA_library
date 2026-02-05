/*
Develop a C++ program to manage the inventory of a small store. Each product has:
 Product ID
 Product Name
 Price
 Quantity in stock
The program must:
1. Use a class Product that includes:
o A static member to track the total number of products added
o An array of objects to store multiple products
o Function overloading for updating product quantity:
 void updateStock(int qty); → restock
 void updateStock(string msg, int qty); → with a reason for stock update
o A method to calculate the total value of stock for a product
2. Allow the user to:
o Add new products
o Display product information
o Update stock using overloaded functions
o Show total number of products
*/

#include <iostream>
#include <string>
using namespace std;
class Product {// created class product
  private:
  int productID;
  string productName;
  double price;
  int quantityInStock;
  static int productCount;
  public:
  Product(){   // default constructor
    productID =0;
    productName ="unknown";
    price =0.0;
    quantityInStock =0;
    productCount++;
  }
  Product(int id,string name,double pr,int qty){
    productID =id;
    productName =name;
    price =pr;
    quantityInStock =qty;
    productCount++;
  }
  void updateStock(int qty){ //function to update stock by quantity
    quantityInStock +=qty;
    cout<<"Stock updated.New quantity:"<<quantityInStock<<endl;
  }
  void updateStock(string msg, int qty){ //function to update stock with reason
    quantityInStock +=qty;
    cout<<"Stock updated due to "<<msg<<". New quantity:"<<quantityInStock<<endl;
  }
  double calculateStockValue(){ // function to claculate total stock value
    return price * quantityInStock;
  }
  void displayProduct(){ // function to display product information
    cout<<"Product ID       :"<<productID<<endl;
    cout<<"Product Name     :"<<productName<<endl;
    cout<<"Product Price    :"<<price<<endl;
    cout<<"Quantity in Stock:"<<quantityInStock<<endl;
    cout<<"Total Stock Value:"<<calculateStockValue()<<endl;
  }
  static int getProductCount(){ // function to get total number of products
    return productCount;
  }
  void inputProduct(){ // function to input product details.
    cin.ignore();
    cout<<"Enter Product ID:";
    cin>>productID;
    cin.ignore();
    cout<<"Enter Product Name:";
    getline(cin,productName);
    cout<<"Enter Product Price:";
    cin>>price;
    cin.ignore();
    cout<<"Enter Quantity in Stock:";
    cin>>quantityInStock;
    cin.ignore();
  }


};// initializing static member
int Product::productCount =0;

int main(){
  int n;
  cout<<"Enter the number of products:";
  cin>>n;
  cin.ignore();
  Product* products = new Product[n]; // dynamic array of Product objects
  for(int i=0;i<n;i++){
    cout<<"------Enter Product "<<(i+1)<<"   details----"<<endl;
  products[i].inputProduct(); // Initialize each product  
 }
cout<<"-----Displaying Product Details-----"<<endl;
for(int i=0;i<n;i++){
  cout<<"----Product "<<(i+1)<<"    Details:----"<<endl;
  products[i].displayProduct();
 }
cout<<"Total number of products:"<<Product::getProductCount()<<endl;
delete[] products; // free dynamically allocated memory
return 0;
}