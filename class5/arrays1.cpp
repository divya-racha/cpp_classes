#include<iostream>
using namespace std;

int main(){
  int arr_of_integers[5]={1,2,3,4,5}; // size is static you cant change it.

  float arr_of_floats[10];

  long arr_of_long[10];

  bool arrof_bool[5] = {true, false, true, false ,false};

  char arr_of_char[11] = {'d','i','v','y','a','_','r','a','c','h','a'};
  char my_full_name[] = "divya_racha"; // whenever you define array of charecters it will end with '\0'
  // Both definations above are same for cpp

  cout<< arr_of_char[0] <<endl;
  cout<< arr_of_char<<endl;
  cout<<arr_of_integers<<endl;
}