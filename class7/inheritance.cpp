#include<iostream>
using namespace std;
// Base class
class Employee {
  public:
    string name;
    int id;
    string email;
  private:
    long salary;
};

// Derived class 1
class Manager: public Employee {
  public:
    string designation_of_manager;
    void setNumberOfPeopleHeManages(int number){
      number_of_people_managed = number;
    }
    int getNoOfPeopleManaged(){
      return number_of_people_managed;
    }
    // If you want to access this inside cofounder class just make this to protected as these are accessible after inheritance
    // private attributes are assigned to inherited class but cannot be accessed inside it
  private:
    // In C++, private members (attributes or methods) of a base class are not accessible in the derived class, but they are still inherited
    int number_of_people_managed;
};

// Derived class 3
class CoFounders : public Manager{
  public:
    int stock_he_holds;
};

// Derived class 2

class TeamMember: public Employee {
  public:
    string manager_name;
    void setBonusPerYear(long bonus){
      bonus_per_year = bonus;
    }
  private:
    long bonus_per_year;
};

int main(){
  Manager m1;
  m1.name = "Kiran";
  m1.id = 1;
  m1.email = "Kiran@gmail.com";
  m1.designation_of_manager = "l1";
  m1.setNumberOfPeopleHeManages(3);

  cout << m1.getNoOfPeopleManaged() << endl;

  TeamMember t1;
  t1.name = "Divya";
  t1.id = 3;
  t1.email = "divya@gmail.com";
  t1.manager_name = "kiran";
  t1.setBonusPerYear(100000);

  CoFounders c1;
  c1.name = "Amrath";
  c1.id = 2;
  c1.email = "amrath@gmail.com";
  c1.designation_of_manager = "l2";
  c1.stock_he_holds = 10000;
  c1.setNumberOfPeopleHeManages(2);
  cout << c1.getNoOfPeopleManaged() << endl;
}