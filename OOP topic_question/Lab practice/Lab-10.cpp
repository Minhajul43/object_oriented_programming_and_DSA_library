/*
Design and implement a Healthcare Management System that manages
multiple patients’ medical records and insurance policies using Friend
Functions, Inheritance and Virtual Base Classes in C++.
The system should:
1. Allow entry of multiple patients’ details (Personal info, Medical record, Insurance
policy).
2. Provide operations like:
o Adding new patient
o Adding treatment cost
o Displaying patient details
o Comparing treatment costs (friend function)
o Generating bills (friend function)
3. Use virtual inheritance for the Person base class to avoid ambiguity.
4. Implement a menu-driven interface for user interaction.
Class Design
1. Base Class: Person
 Data Members:
o name
o patientID
 Member Function: displayPerson()
2. Derived Class: MedicalRecord (virtual inheritance)
 Data Members:
o disease
o treatmentCost
 Member Functions:
o addTreatmentCost()
o calculateInsuranceCoverage()
o displayMedical()
3. Derived Class: InsurancePolicy (virtual inheritance)
 Data Members:
o policyNumber
o monthlyPremium
 Member Functions:
o calculateYearlyPremium()
o displayPolicy()
4. Final Derived Class: Patient
 Member Functions:
o displayAllDetails()
 Friend Functions:
o compareTreatmentCost(Patient&, Patient&)
o generateBill(Patient&)
UML Diagram
+----------------+
| Person |
+----------------+
| - name |
| - patientID |
+----------------+
| + displayPerson|
+----------------+
^ ^
(virtual) / \ (virtual)
/ \
+-------------------+ +--------------------+
| MedicalRecord | | InsurancePolicy |
+-------------------+ +--------------------+
| - disease | | - policyNumber |
| - treatmentCost | | - monthlyPremium |
+-------------------+ +--------------------+
| + addTreatmentCost| | + calcYearlyPremium|
| + displayMedical | | + displayPolicy |
+-------------------+ +--------------------+
\ /
\ /
\ /
+----------------+
| Patient |
+----------------+
| + displayAll |
| + friend: |
| compareCost |
| + friend: |
| generateBill |
+----------------+
Sample Input/Output
===== Healthcare Management Menu =====
1. Add New Patient
2. Add Treatment Cost
3. Display Patient Details
4. Compare Treatment Costs
5. Generate Patient Bill
6. Exit
Enter your choice: 1
Enter Patient ID: 201
Enter Name: Ra􀀻iq Ahmed
Enter Disease: Dengue
Enter Initial Treatment Cost: 5000
Enter Policy Number: 1001
Enter Monthly Premium: 800
Patient added successfully!
===== Healthcare Management Menu =====
Enter your choice: 1
Enter Patient ID: 202
Enter Name: Shathi Rahman
Enter Disease: Fracture
Enter Initial Treatment Cost: 12000
Enter Policy Number: 1002
Enter Monthly Premium: 1200
Patient added successfully!
===== Healthcare Management Menu =====
Enter your choice: 2
Enter Patient ID: 201
Enter additional treatment cost: 2000
Added treatment cost: 2000 | Total Cost: 7000
===== Healthcare Management Menu =====
Enter your choice: 3
Enter Patient ID: 201
--- Patient Healthcare Details ---
Patient ID : 201
Name : Ra􀀻iq Ahmed
Disease : Dengue
Treatment Cost: 7000
Insurance Coverage (30%): 2100
Policy Number : 1001
Monthly Premium : 800
Yearly Premium : 9600
===== Healthcare Management Menu =====
Enter your choice: 4
Enter 􀀻irst Patient ID: 201
Enter second Patient ID: 202
--- Comparing Treatment Costs ---
Shathi Rahman has higher treatment cost (12000) than Ra􀀻iq Ahmed (7000).
===== Healthcare Management Menu =====
Enter your choice: 5
Enter Patient ID: 202
--- Patient Bill ---
Patient ID: 202
Name: Shathi Rahman
Treatment Cost: 12000
Insurance Coverage (30%): 3600
Yearly Premium: 14400
Net Payable Amount: 8400
===== Healthcare Management Menu =====
Enter your choice: 6
Exiting Healthcare Management System...
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Person{
  protected:
  string name;
  int patientID;
  public:
  void displayPerson(){
    cout<<"Patient ID :"<<patientID<<endl;
    cout<<"Name       :"<<name<<endl;
  }
};
class MedicalRecord: virtual public Person{
 protected:
 string disease;
 double treatmentCost;
 public:
  void addTreatmentCost(double cost){
    treatmentCost+=cost;
  }
  double getInsuranceCoverage(){
    return treatmentCost*0.3; // 30% coverage
  }
  void displayMedical(){
    cout<<"Disease : "<< disease<<endl;
    cout<<"Treatment Cost: "<< treatmentCost<<endl;
  }
};
class InsurancePolicy: virtual public Person{
  protected:
  int policyNumber;
  double monthlyPremium;
  public:
  double getYearlyPremium(){
    return monthlyPremium*12;//yearly premium
  }
  void displayPolicy(){
    cout<<"Policy Number : "<< policyNumber<<endl;
    cout<<"Monthly Premium : "<< monthlyPremium<<endl;
    cout<<"Yearly Premium : "<<getYearlyPremium()<<endl;
  }
};
class Patient: public MedicalRecord, public InsurancePolicy{
  public:
  friend void compareTreatmentCost(Patient &p1, Patient &p2);
  friend void generateBill(Patient &p);
  void inputDetails(){
    cout<<"Enter Patient ID:";
    cin>>patientID;
    cout<<"Enter Name:";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Disease:";
    getline(cin,disease);
    cout<<"Enter Initial Treatment Cost:";
    cin>>treatmentCost;
    cout<<"Enter Policy Number:";
    cin>>policyNumber;
    cout<<"Enter Monthly Premium:";
    cin>>monthlyPremium;
  }
};
void compareTreatmentCost(Patient &p1, Patient &p2){
  cout<<"--- Comparing Treatment Costs ---"<<endl;
  if(p1.treatmentCost>p2.treatmentCost){
    cout<<p1.name<<" has higher treatment cost ("<<p1.treatmentCost<<") than "<<p2.name<<" ("<<p2.treatmentCost<<")."<<endl;
  }
  else if(p2.treatmentCost>p1.treatmentCost){
    cout<<p2.name<<" has higher treatment cost ("<<p2.treatmentCost<<") than "<<p1.name<<" ("<<p1.treatmentCost<<")."<<endl;
  }
  else{
    cout<<"Both patients have equal treatment costs ("<<p1.treatmentCost<<")."<<endl;
  }
}
void generateBill(Patient &p){
  cout<<"--- Patient Bill ---"<<endl;
  p.displayPerson();
  cout<<"Treatment Cost: "<<p.treatmentCost<<endl;
  double coverage=p.getInsuranceCoverage();
  cout<<"Insurance Coverage (30%): "<<coverage<<endl;
  double yearlyPremium=p.getYearlyPremium();
  cout<<"Yearly Premium: "<<yearlyPremium<<endl;
  double netPayable=p.treatmentCost-coverage;
  cout<<"Net Payable Amount: "<<netPayable<<endl;
}
int main()
{
  vector<Patient> patients;
  int choice;
  do{
    cout<<"===== Healthcare Management Menu ====="<<endl;
    cout<<"1. Add New Patient"<<endl;
    cout<<"2. Add Treatment Cost"<<endl;
    cout<<"3. Display Patient Details"<<endl;
    cout<<"4. Compare Treatment Costs"<<endl;
    cout<<"5. Generate Patient Bill"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice:";
    cin>> choice;
    switch(choice){
      case 1:{
        Patient p;
        p.inputDetails();
        patients.push_back(p);
        cout<<"Patient added successfully!"<<endl;
        break;
      }
      case 2:{
        int id;
        double cost;
        cout<<"Enter Patient ID:";
        cin>>id;
        cout<<"Enter additional treatment cost:";
        cin>>cost;
        for(auto &p:patients)
        if(p.patientID==id){
          p.addTreatmentCost(cost);
          cout<<"Added treatment cost:"<<cost<<" | Total Cost:"<<p.treatmentCost<<endl;
        }
        break;
      }
      case 3:{
        int id;
        cout<<"Enter Patient ID:";
        cin>>id;
        for(auto &p:patients){
          if(p.patientID==id){
            cout<<"--- Patient Healthcare Details ---"<<endl;
            p.displayPerson();
            p.displayMedical();
            cout<<"Insurance Coverage (30%): "<<p.getInsuranceCoverage()<<endl;
            p.displayPolicy();
          }

        }
        break;
      }
      case 4:{
        int id1,id2;
        cout<<"Enter first Patient ID:";
        cin>>id1;
        cout<<"Enter second Patient ID:";
        cin>>id2;
        Patient *p1=nullptr,*p2=nullptr;
        for(auto &p:patients){
          if(p.patientID==id1) p1=&p;
          if(p.patientID==id2) p2=&p;
        }
        if(p1 && p2){
          compareTreatmentCost(*p1,*p2);
        }
        break;
      }
      case 5:{
        int id;
        cout<<"Enter Patient ID:";
        cin>>id;
        for(auto &p:patients){
          if(p.patientID==id){
            generateBill(p);
          }

        }
        break;

      }
      case 6:{
        cout<<"Exiting Healthcare Management System..."<<endl;
        break;
      }
      default:{
        cout<<"Invalid choice! Please try again."<<endl;
        break;
      }
    }
  }while(choice!=6);
  return 0;
}
