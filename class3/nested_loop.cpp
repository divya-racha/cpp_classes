#include<iostream>
using namespace std;

int main() {
  // you need to print the following pattern.
  /*
  n = 5
  * * * * *
  * * * * *
  * * * * *
  * * * * * 
  * * * * * 
  n = 2
  * *
  * *
  */

  int n = 3;

  for(int i = 0 ; i< n;i++){
    //i =0
    for(int j = 0; j < n;j++){
      cout<< "* " ;
    }
    cout<<endl;
  }
  cout<< endl;
  /*
  n = 5
  *
  * *
  * * *
  * * * *
  * * * * *
  n=3
  * 
  * *
  * * *
  */

  for(int lines = 0 ; lines< 5;lines++){
    for(int stars = 0; stars <= lines ; stars++ ){
      cout<< "* ";
    }
    cout<<endl;
  }

}