// #include<iostream>
// #include<string>
// using namespace std;
// class Student {
//   public:
//   string name;
//   int ID;
//   string dept;
//   double marks;

//   Student(string n,int i,string d,double m){
//     string name=n;
//     int ID=i;
//     string dept=d;
//     double marks=m;
//   }
//   void display(){
//     cout<<"Name       :"<<name<<endl;
//     cout <<"ID        :"<<ID<<endl;
//     cout <<"Department:"<<dept<<endl;
//     cout<<"Marks      :"<<marks<<endl;
//   }

// };
// int main(){
//   int n;
//   cout <<"Enter the number of student:";
//   cin>>n;
//   Student**students=new Student*[n];
//   for(int i=0;i<n;i++){
//     string name,dept;
//     int ID;
//     double salary;
//     cin.ignore();
//     cout <<"Enter the student details>"<<i+1<<":"<<endl;

//     cout<<"Enter the Name:";
//     getline(cin,name);

//     cout<<"Enter the ID:";
//     cin>>ID;

//     cout<<"Enter the department:";
//     getline(cin,dept);
//     cin.ignore();

//     cout<<"Enter the marks:";
//     cin>>marks;

//     students[i]=new Student(name,ID,dept,salary);

//   }
//    cout << "\nDisplaying Student Details:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "\nStudent " << i + 1 << ":\n";
//         students[i]->display();
//     }
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int ID;
    string dept;
    double marks;

    Student(string n, int i, string d, double m) {
        name = n;
        ID = i;
        dept = d;
        marks = m;
    }

    void display() {
        cout << "Name       : " << name << endl;
        cout << "ID         : " << ID << endl;
        cout << "Department : " << dept << endl;
        cout << "Marks      : " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student** students = new Student*[n];
    cin.ignore(); // consume newline

    for (int i = 0; i < n; i++) {
        string name, dept;
        int ID;
        double marks;

        cout << "\nEnter the student details " << i + 1 << ":\n";

        cout << "Enter the Name: ";
        getline(cin, name);

        cout << "Enter the ID: ";
        cin >> ID;
        cin.ignore(); // consume newline after int input

        cout << "Enter the Department: ";
        getline(cin, dept);

        cout << "Enter the Marks: ";
        cin >> marks;
        cin.ignore(); // consume newline after double input

        students[i] = new Student(name, ID, dept, marks);
    }

    cout << "\nDisplaying Student Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i]->display();
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        delete students[i];
    }
    delete[] students;

    return 0;
}
