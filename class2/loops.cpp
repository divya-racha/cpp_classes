#include<iostream>
using namespace std;

int main(){
  // initializtion is int i = 0;  char a = 'a';
  // for( initialization;comparision or conditional statment; some operation on initialized variable)
  int j = 0;
  j++; // j = j + 1; j += 1;
  for(int i = 1 ;i <= 10000; i++){
    if(i % 2 == 0){
      cout << i << endl;
    }
  }
  // Scope of variable
  if(true){
    int i = 0;
    i++;
    // here. i is oonly accessible inside these brackets
  }
  for(int i = 2; i <= 100 ; i = i + 2){
    cout<< i << endl;
  }

  // while(condition)
  int j = 1;
  while(j <= 10000){
    if(j % 2 == 0){
      cout << j << endl;
    }
    j = j + 1;
  }
}
