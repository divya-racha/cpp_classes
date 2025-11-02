// Given an array as an parameter of a function returns the (sum of all the numbers which are perfect numbers)

#include <iostream>
using namespace std;
bool isPerfect(int num) {
    if (num <= 1)
        return false;

    int sum = 1; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }

    return sum == num;
    
}

int sumOfPerfectNumbers(int arr[], int size){
    int total = 0;
    for (int i = 0; i < size; i++) {
        if (isPerfect(arr[i])) {
            total += arr[i];
        }
    }
    return total;
}

int main() {
    int arr[] = {6, 28, 12, 5, 496, 99}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sumOfPerfectNumbers(arr, size);
    cout << "Sum of all perfect numbers in the array: " << result << endl;

    return 0;
}