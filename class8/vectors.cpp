#include<iostream>
#include<vector>
using namespace std;

int main(){
  // Arrays size is static.
  int marks[] = {50,45,90,99}; // 4*4 = 16bytes
  marks[0] = 55;
  cout << marks[0] << endl;
  cout << marks[1] << endl;
  int marks1[] = {55,45,90,99,100}; // 4 * 5 = 20 bytes

  // cpp has a library called standard template library STL

  // vectors, list , sets(maths sets), maps (key -> value)
  // definition of a vector: vector<type> name_of_ the_vecotr= {1,2,3,4}

  vector<string> cars = {"Creta","BMW","Ferrari"};
  cars.push_back("Amaze");
  // Vectors are dynamic, these are same as arrays but are dynamic, memory optimized.
  //access first car
  cout << cars[0] <<endl;

  for(int i = 0; i < cars.size() ; i++){
    cout << cars[i] << " ";
  }
  cout << endl;
  cars.pop_back();

  for(int i = 0; i < cars.size() ; i++){
    cout << cars.at(i) << " "; // Better error handling.
  }
  cout << endl;
  cout << cars.front() << endl; // return the firs element
  cout << cars.back() << endl; // return the last element of vector

  if(cars.empty()){
    cout << "You are poor!" << endl;
  }else{
    cout << "You got cars" << endl;
  }

  cars.insert(cars.begin() + 0, "Amaze");
  cars.insert(cars.begin() + 3, "lexus");
  for(int i = 0; i < cars.size() ; i++){
    cout << cars.at(i) << " "; // Better error handling.
  }
  cout << endl;
}
