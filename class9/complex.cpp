#include<iostream>
using namespace std;
 // 3 + i5
 // 2 - i3
class ComplexNumbers{
  public:
    int real;
    int imaginary;
    ComplexNumbers(int r,int i){
      real = r;
      imaginary = i;
    }

    ComplexNumbers operator+(ComplexNumbers c){
      int currentReal = real + c.real;
      int currentIm = imaginary + c.imaginary;

      return ComplexNumbers(currentReal,currentIm);
    }

    void print(){
      cout << real << " + " << "i" << imaginary << endl;
    }
};

int main(){
  ComplexNumbers c1 = ComplexNumbers(3,5);
  ComplexNumbers c2 = ComplexNumbers(2,3);

  ComplexNumbers c3 = c1 + c2;
  c3.print();
}

// (3 + i5) + ( 2 + i3) => (5 + i8)