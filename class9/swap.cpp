// We will try to write a function to swap to variables
// a = 10, b=20 => func(a,b) => a = 20 ,b = 10
#include<iostream>
using namespace std;



void swapNumbers(int a,int b){
  cout << "Before swapping " << a << " " << b << endl;
  int c = a;
  a = b;
  b = c;
  cout << "After swapping " << a << " " << b << endl;
}
void swapNumbersUsingPointers(int *a,int *b){
  cout << "Before swapping " << *a << " " << *b << endl;
  int c = *a;
  *a = *b;
  *b = c;
  cout << "After swapping " << *a << " " << *b << endl;
}
int main(){
  // scope of a variable
  int a = 10;
  int b = 20;
  swapNumbers(a,b);
  cout << "After calling the function " << a << " " << b << endl;

  swapNumbersUsingPointers(&a,&b);
  cout << "After calling the function " << a << " " << b << endl;
}