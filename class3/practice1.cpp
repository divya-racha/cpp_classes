// Print all the armstrong numbers from 1 to 100000 using functions
#include <iostream>
#include <cmath>

// the count digits
int countDigits(int num){
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return (count == 0) ? 1 : count; 
}

bool isArmstrong(int num) {
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return
}