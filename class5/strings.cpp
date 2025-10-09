#include<iostream>
#include<string>

using namespace std;

int main() {
  char first_name[] = "divya";
  char last_name[] = "racha";

  cout << sizeof(first_name)/sizeof(first_name[0]) << endl;

  string first_name_str = "divya";
  string last_name_str = "racha";

  // Both operations are same 
  string full_name = first_name_str + last_name_str;
  full_name = first_name_str.append(last_name_str);
  // Length of a string
  cout << full_name.length() << endl;

  // Accessing charectars
  for(int i = 0 ; i < first_name_str.length(); i++){
    cout << first_name[i] << " ";
  }
  cout << endl;
  // Extracting strings
  string some_extraction = full_name.substr(5,full_name.length());
  cout << some_extraction <<endl;
  // Find will return the index where the last_name_str is starting
  cout << full_name.find(last_name_str) << endl;

  cout<< full_name << endl;

  string str1 = "Hello";
  string str2 = "Hello";
  char str_1[] = "Hello";
  char str_2[] = "Hello";
  // camparing strings.
  cout << (str1 == str2) << endl;
  // You cannot compare arrays.
  cout << (str_1 == str_2) << endl;

  // Try out other existing methods for strings and build examples
  // Link: https://www.geeksforgeeks.org/cpp/strings-in-cpp/
}