#include<iostream>
using namespace std;

int main(){
  int size = 10;
  // We have 10 students in the class and only 5 of them written the exam
  int arr[] = {1,2,3,4,5,0,0,0,0,0}; // here memory for 5 students got wasted

  // If we want to save the memory we use dynamically alocated arrays;

  int* dynamicArr = new int[size]; // it will not take size 10 arrays , it will create a single memory location
  dynamicArr[0] = 10;
  dynamicArr[1] = 10;
  dynamicArr[2] = 10;
  dynamicArr[3] = 10;
  dynamicArr[4] = 10;
  for(int i = 0; i < size;i++){
    cout << dynamicArr[i] << " ";
  }
  cout << endl;
  vector<int> v; //automatic deallocation
  int arr1[] = {};

  // deallocation of memory
  delete[] dynamicArr;
  dynamicArr = nullptr; //memory safety or memory leaks
  cout << dynamicArr[0] <<endl; // segmentation  fault 
}