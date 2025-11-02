// Write a function that takes array and an integer X as in input and returns the first occurance index from the array
// example : where array = {100, 200, 2, 3, 2, 1} and X = 2 (results should give as 2)

#include <iostream>
using namespace std;

int findFirstOccurence(int arr[], int size, int X){
    for (int i = 0; i < size; i++) {
        if (arr[i] == X) {
            return i; // Which should give a return for the index of the X that will appear inn the first place 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {100, 200, 2, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int X = 2;

    int index = findFirstOccurence(arr, size, X);

    if (index != -1)
        cout << "First occurrence of " << X << " is at index: " << index << endl;
    else
        cout << X << " not found in the array. " << endl;

    return 0;
}
