// sum of all odd numbers from 1 to 100
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i += 2) { // loops only through the odd numbers 
        sum += i;
    }

    cout << "Sum of odd numbers from 1 to 100 = " << sum << endl;
    return 0;
}