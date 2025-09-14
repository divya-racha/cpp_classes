#include<iostream>
using namespace std;

int main() {
    // char (character) a-z A-z including symbols wrapped in '' - 1 Byte - 8 bits
    // 0 0 0 0 0 0 0 0 - 2 ^ 8 - 256 combinations

    char a = 'a';

    // int (integer or number) - signed and unsigned - 4 bytes - 32 bits
    // 2^32 combinations
    // unsigned range (0, 2^32 - 1)
    // signed range (-2^16 , 2^16 - 1)

    int x = 1234567;

    // long (integer or number) - signed and unsigned - 8 bytes - 64bits
    // 2^64 combinations
    // unsigned range (0, 2^64 - 1)
    // signed range (-2^32 , 2^32 - 1)

    long x = 123456789;

    // double (decimal or float) - signed and unsigned - 8 bytes - 64 bits
    // 2^64 combinations
    // unsigned range (0, 2^64 - 1) includes decimals
    // signed range (-2^32 , 2^32 - 1) includes decimals

    double x = 12.23;

    // bool - boolean (true(1) or false(0)) - 1 bit
    // 2^1 - true and false

    bool isTrue = true
}