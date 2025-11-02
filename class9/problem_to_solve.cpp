/*
Problem Statement: "Student Management System – Handling Dynamic Grades"
Scenario:

You are designing a simple Student Management System for a university. Each student has a name, roll number, and a dynamically allocated list of grades. You need to build a Student class that properly manages its data using constructors, destructors, and operator overloading.

Requirements:
1. Data Members (Encapsulation)

All data members should be private:

string name – name of the student.

int rollNumber – unique roll number.

float* grades – pointer to a dynamically allocated array of grades.

int numGrades – number of grades.

2. Constructors

Implement the following constructors:

Default constructor – initializes name to "Unknown", rollNumber to 0, and sets grades to nullptr.

Parameterized constructor – takes name, roll number, and an array of grades as arguments.

Copy constructor – creates a deep copy of another Student object.

(Optional) Constructor with default parameter values (e.g., default number of grades = 3).

3. Destructor

Properly deallocate the dynamically allocated memory (grades) to prevent memory leaks.

4. Copy Assignment Operator (operator=)

Overload the assignment operator to ensure deep copy behavior when assigning one Student object to another.

5. Operator Overloading

Implement the following operator overloads:

operator+ – add two Student objects by combining their grades (average the grades if needed).

operator<< – overload the << operator to print student details (name, roll number, grades).

6. Getters and Setters

Provide getter and setter methods for each private member:

setName(string) / getName()

setRollNumber(int) / getRollNumber()

setGrades(float[], int) / getGrades()

7. Main Function Requirements

In main(), demonstrate:

Creating Student objects using all constructors.

Modifying student details using setters.

Copying students using the copy constructor and assignment operator.

Displaying student data using the overloaded << operator.

Combining students using the overloaded + operator.

Bonus (Optional Enhancements):

Add a private static data member to keep track of how many Student objects are currently active.

Add a method to calculate the student’s average grade.
*/