/*
Design and implement a Healthcare Management System using Inheritance
and Virtual Base Classes.
 Base class: Person
o Data members: name, patientID.
o Function: displayPerson().
 Derived class 1: MedicalRecord (inherits virtually from Person)
o Data members: disease, treatmentCost.
o Functions:
 addTreatmentCost(double) (like deposit).
 calculateInsuranceCoverage() returns treatmentCost * 0.3 (30%
coverage).
 Derived class 2: InsurancePolicy (inherits virtually from Person)
o Data members: policyNumber, monthlyPremium.
o Function:
 calculateYearlyPremium() = monthlyPremium * 12.
 Final class: Patient (inherits from both MedicalRecord and
InsurancePolicy)
o Must use virtual inheritance to avoid ambiguity.
o Function: displayAllDetails() to show patient details, medical record,
insurance info.
Required Functionalities
1. Create a Patient object.
2. Accept input for patient details, medical record, and insurance policy.
3. Add treatment cost, calculate insurance coverage, and yearly premium.
4. Display all details neatly.
Sample Input/Output:
Input:
Enter Patient ID: 301
Enter Patient Name: Anisur Rahman
Enter Disease: Diabetes
Enter Initial Treatment Cost: 15000
Enter Policy Number: 98765
Enter Monthly Premium: 1200
Enter additional treatment cost: 5000
Added treatment cost: 5000 | Total Cost: 20000
Output:
--- Patient Healthcare Details ---
Patient ID: 301
Name: Anisur Rahman
Disease: Diabetes
Treatment Cost: 20000
Insurance Coverage (30%): 6000
Policy Number: 98765
Monthly Premium: 1200
Yearly Premium: 14400
*/

#include<iostream>
#include<string>
using namespace std;
class Person{
  protected:
  string name;
  int patientID;
     // function to person display--
  public:   
  void displayPerson(){
    cout<<"The patient Name:"<<name<<endl;
    cout<<"Patient ID:"<<patientID<<endl;
  }
};// Base class create 

class MedicalRecord: virtual public Person{
  protected: // create a derived class 
  string disease;
  double treatmentCost;

  public:
// Total cost count
  void addTreatmentCost(double cost){
    treatmentCost +=cost;
  }
  // Calculate Insurance 
  double calculateInsuranceCoverage(){
    return treatmentCost*0.3;
  }
 
};
class InsurancePolicy:virtual public Person{
  protected:
  int policyNumber;
  double monthlyPremium;
   
  public:
  double calculateYearlyPremium(){
    monthlyPremium*12;
  }
};

class Patient:public MedicalRecord,public InsurancePolicy{
 public:
 void input(){
  cout<<"Enter Patient ID:";
  cin>>patientID;
  cin.ignore();

  cout<<"Enter Patient Name:";
  getline(cin,name);

  cout<<"Enter Disease:";
  getline(cin,disease);

  cout<<"Enter Initial Treatment Cost:";
  cin>>treatmentCost;

  cout<<"Enter the Policy Number:";
  cin>>policyNumber;

  cout<<"Enter Monthly Premium:";
  cin>>monthlyPremium;
 }
 
 // Showing this function all details to the patient-
 void displayAllDetails(){
  cout<<"-------Patient Healthcare Details------"<<endl;
  //displayPerson();

  cout<<"Patient ID             :"<<patientID<<endl;
  cout<<"Name                   :"<<name<<endl;
  cout<<"Disease                :"<<disease<<endl;
  cout<<"Treatment Cost         :"<<treatmentCost<<endl;
  cout<<"Insurance Coverage(30%):"<<calculateInsuranceCoverage()<<endl;
  cout<<"Policy Premium         :"<<policyNumber<<endl;
  cout<<"Monthly Premiun        :"<<monthlyPremium<<endl;
  cout<<"Yearly Premium         :"<<calculateYearlyPremium()<<endl;
 }

};
 // In main function 
 int main(){
  Patient p;
  p.input();

  double Extracost;
  cout<<"Enter additional treatment cost:";
  cin>>Extracost;
  p.addTreatmentCost(Extracost);
     // Showing the addition total cost for medical
  cout<<"Added treatment cost:"<<Extracost<<"|Total Cost :"<<p.calculateInsuranceCoverage()/(0.30)<<endl;
      // call function for showing all details to patient.
  p.displayAllDetails();
  return 0;
 }