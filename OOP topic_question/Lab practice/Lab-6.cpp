/*
Design a C++ program that simulates a simple library lending system.
Each Book has:
 Book ID
 Title
 Author
 Availability status (issued or available)
The program should allow:
1. Creating books using overloaded constructors:
o Default constructor (empty book)
o Parameterized constructor (with book details)
2. Using inline functions for:
o Checking availability
o Displaying book information
3. Using default function arguments for issuing/returning books (e.g.,
return date default = 14 days).
4. Implementing functions that:
o Accept Book objects as arguments (e.g., comparing two books).
o Return Book objects (e.g., creating a duplicate copy of a book).
*/
#include<iostream>
#include<string>
using namespace std;
class Book {
  private:
  int BookID;
  string BookTitle;
  string Author;
  bool isAvailable;
  public:
  Book(){
    BookID =0;
    BookTitle =" ";
    Author ="";
    isAvailable =true;
  }
  Book(int id,string title,string author,bool avail=true){
    BookID =id;
    BookTitle =title;
    Author =author;
    isAvailable =avail;
  }
  inline void AvailabilityStatus(){
    if(isAvailable){
      cout<<"The book is available."<<endl;
    }
    else{
      cout<<"The book is issued."<<endl;
    }
  }
  inline void displaybookInfo(){
    cout<<"Book ID:"<<BookID<<endl;
    cout<<"Book Title:"<<BookTitle<<endl;
    cout<<"Author:"<<Author<<endl;
    AvailabilityStatus();
  }
  void issueBook(int returnDays =14){
    if(isAvailable){ 
      isAvailable =false;
      cout<<"Book issued successfully. Return within "<<returnDays<<"days."<<endl;
    }

   else{
    cout<<"Book is currently not available for issue."<<endl;
   }
  }
  void returnBook(){
    isAvailable =true;
    cout<<"Book returned successfully."<<endl;
  }

};
int main(){
  Book book1(101,"C++ Programming","Bjarne Stroustrup");
  Book book2(102, "Introduction to Algorithms","Thomas H. Cormen",false);
  book1.displaybookInfo();
  book1.issueBook();
  book1.displaybookInfo();
  book1.returnBook();
  book1.displaybookInfo();
  book2.displaybookInfo();
  book2.issueBook(7);
  return 0;
}