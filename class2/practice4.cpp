// print multiplication table of 15 to 100 (15 * 1 => 15 * 100)
#include <iostream>
using namespace std;

int main(){
    int number = 15;

    for (int i = 1; i <= 100; i++) {
        cout << number << " * " << i << " = " << number * i << endl;
    }

    return 0;
}