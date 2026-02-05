#include<iostream>
#include<string>
using namespace std;
class Book{
  private:
    string title;
    string author;
    int year;
    public:
    // Constructor to initialize book details
    Book(string t, string a, int y);
    //Function to display book details
    void display();
};
// constructor definition
Book::Book(string t, string a, int y){
  title =t;
  author =a;
  year =y;
}
// Function to display book details
void Book::display(){
  cout << "Title:"<<title << endl;
  cout << "Author:"<<author <<endl;
  cout << "Year:"<<year <<endl;
}
int main(){
  //Creating on object of Book Class
  Book book1("The Great Gatsby", "F. Scott Fitzgerald",1924);
  //Displaying book details
  book1.display();
  return 0;
}
