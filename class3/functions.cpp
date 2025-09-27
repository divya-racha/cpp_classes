#include<iostream>
using namespace std;

//function in cpp is same as math, it takes an input and gives you a output.

// maintainablility and readablity

/* 
return_type(int,bool,char,char[],int[],long,float,double) function_name(type(data_type) parameter1, type(data_type) parameter2 .......) {
  // some solution
  returns same return_type
}
function definition

bool is_even(int number){
  // some logic
  return true / false
}

function call

bool res = is_even(10) here 10 is an argument
*/

bool is_even(int number){
  if(number % 2 == 0){
    return true;
  }
  return false;
}
bool is_odd(int number){
  if(number % 2 == 0){
    return false;
  }
  return true;
}
int main(){
  cout<< is_even(11) <<endl;
  cout<< is_odd(11) << endl;
}
