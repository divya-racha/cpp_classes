#include<iostream>
#include<string>
using namespace std;

int main() {
  string myName = "Divya";
  // Pointer is nothing but memory address

  string *myNamepointer = &myName;
  cout << myNamepointer << endl;

  int myGrade = 90;
  int *myGradePointer = &myGrade;

  cout<< myGradePointer << endl;
  cout << &myGrade << endl;

  cout << "The value at " <<  myGradePointer << "=" <<  *myGradePointer ; // Dereferencing
  *myGradePointer = 100;
  cout << "now,The value at " <<  myGradePointer << "=" <<  *myGradePointer ; // Dereferencing
}