#include<iostream>
using namespace std;

class Number {
  public:
    int num;
    Number(int n){
      num = n;
    }

    Number operator+(Number n){
      if(num > n.num){
        return Number(num - n.num);
      }else{
        return Number(n.num-num);
      }
    }
};

int main() {
  Number n1 = Number(5);
  Number n2 = Number(10);

  // Operator overloading gives a new meaning to an operator such as + ,  - , * , % ,&
  // Write a operator so that whenever you use + it should subtract the smaller number from bigger number
  Number n3 = n1 + n2;
  cout << n3.num <<endl;

}