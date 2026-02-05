// Design a C++ program that simulates a simple library lending system.
// Each Book has:
//  Book ID
//  Title
//  Author
//  Availability status (issued or available)
// The program should allow:
// 1. Creating books using overloaded constructors:
// o Default constructor (empty book)
// o Parameterized constructor (with book details)
// 2. Using inline functions for:
// o Checking availability
// o Displaying book information
// 3. Using default function arguments for issuing/returning books (e.g.,
// return date default = 14 days).
// 4. Implementing functions that:
// o Accept Book objects as arguments (e.g., comparing two books).
// o Return Book objects (e.g., creating a duplicate copy of a book


#include<iostream>
#include<string>
using namespace std;
class Book{
  private:
  int bookID;
  string title;
  string author;
  bool isAvailable;
  public:
  // Default constructor
  Book(){
    bookID =0;
    title = "Unknown";
    author = "Unknown";
    isAvailable = true;
  }
  // parameterized constructor

  Book(int bookID, string title, string author, bool isAvailable = true){
    this->bookID =bookID;
    this->title = title;
    this->author = author;
    this->isAvailable = isAvailable;
  }
  // Inline function to check availability
  inline bool checkAvailability(){
    return isAvailable;
  }
  // Inline function to display book information
  inline void display(){
    cout <<"Book ID   :"<<bookID<<endl;
    cout <<"Title     :"<<title<<endl;
    cout <<"Author    :"<<author<<endl;
    cout <<"Available :"<<(isAvailable? "Yes":"No")<<endl;
  }
  // function to issue a book
  void issueBook(int days =14){
    if(isAvailable){
      isAvailable =flase;
      cout <<"Book issued successfully"<<endl;
      cout <<"Return date:"<<days<<" days from today"<<endl;
    }
    else{
      cout <<"Book is not available for issue"<<endl;
    }

    }
    // function to return a book
    void returnBook(){
      isAvailable =true;
      cout <<"Book returned successfully"<<endl;
    }
    // Function to compare two books 
    bool compareBooks(const Book &other){
      return (bookID ==other.bookID &&title ==other.title && author ==other.author);

    }
    // function to create a duplicate copy of a book
    Book duplicatecopy(){
      return Book(bookID,title, author,isAvailable);
    }
  };
  int main(){
    
  }
    // Getters
    int getBookID(){
      return bookID;
    }
    string getTitle(){
      return title;
    }
    string getauthor(){
      return author;
    }
    bool getAbailability(){
      return isAvailable;
    }
    // Setters
    void setBookID(int id){
      bookID = id;
    }
    void setTitle(string t){
      title = t;
    
    void setauthor{
      author =a;
  }
  void setAvailability(bool status){
    isAvailable = static_cast<bookID>(status);

}
};
