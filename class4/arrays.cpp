#include<iostream>
using namespace std;

int main(){
    // int , float, long, double , char
    int my_score = 10;
    // we want to store 100 students marks in our system.
    int s1 = 100;
    int s2 =90;
    //..... s100 = 100

    int marks[5] = {10 ,20 ,30 ,40, 50};
    int marks_1[] = {10 ,20 ,30 ,40, 50};
    
    // above 2 declarations are same;
    marks[0] = 100;
    for(int i = 0; i < 5; i++){
        cout << marks[i] << " ";
    }
    cout << endl;

    for(int mark: marks){
        cout << mark << endl;
    }

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "length of array" << sizeof(marks)/sizeof(marks[0]) <<endl;

}