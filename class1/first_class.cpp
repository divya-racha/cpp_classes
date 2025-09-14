#include<iostream>
using namespace std;

// parsing - generating tokens from the source code
// tokens - tokens can be anything, defined by the person who is developing the language,it could be a letter ,a word or a number or anything

// 1. preprocessing - search for '#' after # they generate tokens from first line - 'include' '<' 'iostream' '>'

// there are different type of tokens
// 1. Keywords example: int, string, char ,double (this holds some meaning)
// 2. Identifiers: examples: '#' 'namespace' (this are help ful in preprocessing )
// 3. Operators: > < + - == != =(assignment operator)

int main(){
    cout<< "Hello world"<<endl;
}

// donot use spaces in naming folders or files
// There are different ways how you write names for folders and files
// 1. Snake case (Divya programs) (divya_programs)
// 2. Pascal Case (Divya Programs) (DivyaPrograms)
// 3. Camel Case (Divya Programs in cpp) (divyaProgramsInCpp)