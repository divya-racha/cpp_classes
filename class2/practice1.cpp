#include <iostream>
using namespace std;

int main (){
    // sum avg of first 100 #s 
    // 1+2+3..100 then divide by 100
    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum = sum + i;
    }
    cout << sum / 100 << endl;
}