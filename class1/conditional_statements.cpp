#include<iostream>
using namespace std;

int main() {
    // Write a program that takes age of a person as input and returns if he is elgible to vote or not

    int age;
    cout << "Please enter your age: ";

    cin >> age;

    if(age >= 18) {
        cout << "Hey you are elgible to vote!" << endl;
    }else{
        cout<< "You are not elgible just go from here!" << endl;
    }

    // if (condition which will evaluate to true or false)

}