// Print all the prime numbers from 1 - 100;;

// prime number - a number that is divisible by 1 and itself

// 3 , 5 ,7,18
#include<iostream>
using namespace std;

int main(){
  for(int i = 2; i < 100 ;i++){
    bool isPrime = true;
    for(int j = 2; j < i ; j++){
      if(i % j == 0){
        isPrime = false;
      }
    }
    if(isPrime){
      cout<< i << endl;
    }
  }
}