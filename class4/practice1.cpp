#include<iostream>
using namespace std;

int main(){
    int arr[] = {11,22,31,41,53,60,70,82,91};
    // Find the sum of all odd numbers in the array
    int sum = 0;
    for(int i = 0; i < 9; i++){
        if(arr[i] % 2 != 0){
            sum += arr[i];
        }
    }
    cout << sum << endl;
}