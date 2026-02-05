// #include<iostream>
// #include<string>
// using namespace std;
// class Employ{
//   // i want to take salary in private
//   // now what can i do?
//   private:
//   double salary;
//   public:
//   string name;
//   int age;
//   string department;
//   Employ(string n,int a,string d, double s){
//     name =n;
//     age =a;
//     department =d;
//     salary=s;
//   }
//   void display(){
//     cout <<"Name:"<<name<<endl;
//     cout <<"Age:"<<age<<endl;
//     cout <<"Department:"<<department<<endl;
//     cout <<"Salary:"<<salary<<endl;
//   }
// };
// int main ()
// {
//   int n;
//   cout<<"Enter the number of employee:";
//   cin>>n;
//   Employ**employee=new  Employ*[n];
//   for(int i=0;i<n;i++){
//     cout <<"Enter the employ detail-"<<i+1<<":"<<endl;
//     string name;
//     int age;
//     string department;
//     double salary;
//     cout <<"Enter name:";
//     cin.ignore();
//     getline(cin,name);
//     cout <<"Enter age:";
//     cin >>age;
//     cout<<"ENter department:";
//     getline(cin,department);

//     cout <<"Enter salary:";
//     cin >>salary;
//     employee[i]= new Employ(name,age,department,salary);
//     cout <<endl;

//   }
//   cout <<"Display the employ deatails::"<<endl;
//   for(int i=0;i<n;i++){
//     cout<<"Display the employ details-"<<i+1<<":"<<endl;
//     employee[i]->display();
  
//   }
//   return 0;
// }
// // please show the above code what is wrong in this code?
// //plese identify the error and courrect it
// //you show the error or better solution


#include<iostream>
#include<string>
using namespace std;

class Employ {
private:
    double salary;

public:
    string name;
    int age;
    string department;

    Employ(string n, int a, string d, double s) {
        name = n;
        age = a;
        department = d;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << " Taka" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    // Use dynamic array (pointer to pointer)
    Employ** employees = new Employ*[n];

    for (int i = 0; i < n; i++) {
        string name, department;
        int age;
        double salary;

        cin.ignore(); // clear buffer before getline
        cout << "\nEnter details of Employee " << i + 1 << ":\n";

        cout << "Name: ";
        getline(cin, name);

        cout << "Age: ";
        cin >> age;
        cin.ignore(); // clear buffer again before getline

        cout << "Department: ";
        getline(cin, department);

        cout << "Salary: ";
        cin >> salary;

        // create object dynamically using constructor
        employees[i] = new Employ(name, age, department, salary);
    }

    cout << "\nDisplaying Employee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i]->display();
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete employees[i];
    }
    delete[] employees;

    return 0;
}

