// Given a number find if a number is an amstrong number or not
// 153 => 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153
#include<iostream>
#include <cmath>
using namespace std;

bool is_amstrong(int number) {
  /*
   n = 153
   153 % 10 = 3
   153 / 10 = 15
   15 % 10 = 5
   15 / 10 = 1
   1 % 10 = 1
   1 / 10 = 0
  */
  int sum = 0;
  int n = number;
  while(number != 0) {
    int rem = number % 10;
    sum += pow(rem,3);
    number = number / 10;
  }
  bool res = sum == n ?  true : false;
  // condition ? if condition is true : else
  return res;
}

int main(){
  int number;
  cin >> number;
  if(is_amstrong(number)){
    cout<< "This number is armstrong" <<endl;
  }else{
    cout<< "Sorry this is not armstrong" << endl;
  }
}
