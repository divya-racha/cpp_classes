#include <iostream>
using namespace std;

int main(){
    // sum of even numbers from 1 to 100
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            sum = sum + i;
            cout << sum << endl;
        }
    }
}

// sum of all odd numbers from 1 to 100