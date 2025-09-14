#include<iostream>
using namespace std;

int main() {
    // Write a program that takes age as an input and tells you are a teenager or adult or elderly
    int age;
    cout << "Please enter your age: ";

    cin >> age;

    if(age < 18) {
        cout<< "You are a teenager!" << endl;
    }else if(age >= 18 and age <= 50){
        cout << "You are an adult" << endl;
    }else{
        cout << "You are elderly happy life!" << endl;
    }
}