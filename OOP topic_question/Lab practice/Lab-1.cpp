/* Basic C++
 1. Write a program to declare two integer and one float variables then initialize them to 10, 15, and 12.6. Also print the variable values on the screen.

 2. Write a C program that calculates the volume of a sphere.

 3. Write a C program that prints the perimeter of a rectangle using its height and width as inputs.

4. Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

Object Oriented C++

 5.Design and implement a C++ program to manage student records in a college. You need to define a class named Student with the following private data members:
  int id — Student ID
  string name — Student Name
  float marks — Marks out of 100
 The class should include the following member functions:
  void input() — to take input for student details
 void display() — to display student details with grade
 Declare an object of the Student class, gather data from the user, and print the
 student's details.
Use cin.ignore() before getline() after reading integers or floats. */


// Question no 1.
// #include<iostream>
// using namespace std;
// int main(){
//   int a=10;
//   int b=15;
//   float c=12.6;
//   cout<<"The value of a is:"<<a<<endl;
//   cout<<"The value of b is:"<<b<<endl;
//   cout<<"The value of c is:"<<c<<endl;
//   return 0;
// }


//Question no. 2
// #include<iostream>
// using namespace std;
// int main(){
//   float radius, volume;
//   const float PI =3.1416;
//   cout<<"Enter the radius of the sphere:";
//   cin>>radius;
//   volume=(4.0/3.0)*PI*radius*radius*radius;
//   cout<< "The volume of the sphere is:"<<volume<<endl;
//   return 0;
// }


// Question no. 3
// #include<iostream>
// using namespace std;
// int main(){
//   float height,width, perimeter;
//   cout<<"Enter the height of the rectangle:";
//   cin>>height;
//   cout<<"Enter the width of the rectangle:";
//   cin>>width;
//   perimeter=2*(height+width);
//   cout<< "The perimeter of the rectangle is:"<<perimeter<<endl;
//   return 0;

// }

// Question no.4

// #include<iostream>
// using namespace std;
// int main(){
//   int hours,minutes, TotalMinutes;
//   cout<<"Enter the hours:";
//   cin>>hours;
//   cout<<"Enter the minutes:";
//   cin>>minutes;
//   TotalMinutes=(hours*60)+minutes;
//   cout<< "The total minutes are:"<<TotalMinutes<<endl;
//   return 0;
// }

// Question no. 5
#include<iostream>
using namespace std;
class Student{
  public:
  int id;
  string name;
  float marks;
  void input(){
    cout<< "Enter the student ID:";
    cin>>id;
    cin.ignore();
    cout<<"Enter the student name:";
    getline(cin,name);
    cout<<"Enter the student marks:";
    cin>>marks;
  }
  void display(){
    cout<<"Student  ID    :"<<id<<endl;
    cout<<"Student Name   :"<<name<<endl;
    cout<<"Student Marks  :"<<marks<<endl;
  }
};
int main(){
  Student s1;
  cout<<"------Enter student details------"<<endl;
  s1.input();

  cout<<"-------Student details-------"<<endl;
  s1.display();
  return 0;
}