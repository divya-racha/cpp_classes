#include<iostream>
using namespace std;


class Animal {
  // Constructor is a special type of method which you donot need to call , it is automatically called when you initialize a object
  public:
  string name;
  int legs;
  Animal() {
    name = "common_name";
    legs = 2;
    cout << "Hey I'm Initialized!";
    cout << endl;
  }
  // You can pass arguments to a constructor
  Animal(string n){
    name  = n;
    legs = 4;
  }

  Animal(string n, int l){
    name = n;
    legs = l;
  }

  void Walk(){
    cout << "Hey I'm walking";
    cout << endl;
  }
};

int main() {
  Animal dog; // constructor is being called here
  dog.Walk(); // this is an seperate function not a constructor so you need to explicitly call it

  cout << dog.name << " " << dog.legs << endl; 
  //constructor overloading, here you dont need to specify which constructor yyou are calling , the constructor with the number of arguments will be called automatically
  Animal cat("pinky"); // Constructor is being called here too
  cout << cat.name << " " << cat.legs << endl; 

  Animal bufallo("buffy",4);
  cout << bufallo.name << " " << bufallo.legs <<endl;

}
