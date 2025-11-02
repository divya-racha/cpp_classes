//declare an array and write a function takes array as a parameter, and returns back the smallest number within the array
// numbers in the array are less than 1lakh = 100,000

#include <iostream>
using namespace std;

// Function should take the array with the size returns the smallest number 
int findSmallest(int arr[], int size) {
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    } 
    return smallest;
}

int main(){
    int numbers[] = {230, 99999, 100, 5600, 12, 4500, 780};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int smallestNum = findSmallest(numbers, size);

    cout << "The smallest number in the array is: " << smallestNum << endl;

    return 0;
}

