// Poly means multiple , morphism is having differnt forms
// Organic chemistry -> (c)
#include<iostream>
using namespace std;

class Animal {
  public:
    void MakeSound(){
      cout << "I am making sound....." << endl;
    }
};

class Dog: public Animal {
  public:
    void MakeSound(){
      cout << "Dog is barking bow bow!" << endl;
    }
};

class Cat: public Animal {
  public:
    void MakeSound(){
      cout << "Cat is saying meow meow!" << endl;
    }
};

int main(){
  Animal a1;
  a1.MakeSound();
  Dog d1;
  d1.MakeSound();
  Cat c1;
  c1.MakeSound();
}