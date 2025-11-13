#include <iostream>
#include <string>
#include <algorithm> // For std::copy

class Student {
private:
    std::string name;
    int rollNumber;
    float* grades; // Pointer to dynamically allocated array
    int numGrades;
    static int activeStudents; // Bonus: Static counter

    // Helper function for deep copy logic
    void deepCopy(const Student& other) {
        // 1. Copy simple members
        name = other.name;
        rollNumber = other.rollNumber;
        numGrades = other.numGrades;

        // 2. Allocate new memory for grades
        if (numGrades > 0) {
            grades = new float[numGrades];
            // 3. Copy grade values
            std::copy(other.grades, other.grades + numGrades, grades);
        } else {
            grades = nullptr;
        }
    }

    // Helper function for cleanup
    void cleanup() {
        if (grades != nullptr) {
            delete[] grades;
            grades = nullptr;
        }
    }

public:
    // --- 1. Static Member Initialization ---
    // (Must be defined outside the class scope)
    static int getActiveStudents() {
        return activeStudents;
    }

    // --- 2. Constructors ---

    // Default Constructor
    Student() : name("Unknown"), rollNumber(0), grades(nullptr), numGrades(0) {
        activeStudents++;
        // std::cout << "Default constructor called. Active students: " << activeStudents << std::endl;
    }

    // Parameterized Constructor
    Student(const std::string& n, int roll, const float g[], int num)
        : name(n), rollNumber(roll), numGrades(num) {
        activeStudents++;
        if (num > 0) {
            grades = new float[numGrades];
            std::copy(g, g + num, grades);
        } else {
            grades = nullptr;
        }
        // std::cout << "Parameterized constructor called for " << name << ". Active students: " << activeStudents << std::endl;
    }

    // Copy Constructor (Deep Copy)
    Student(const Student& other) {
        deepCopy(other);
        activeStudents++;
        // std::cout << "Copy constructor called for " << name << ". Active students: " << activeStudents << std::endl;
    }

    // --- 3. Destructor ---
    ~Student() {
        cleanup();
        activeStudents--;
        // std::cout << "Destructor called for " << name << ". Active students: " << activeStudents << std::endl;
    }

    // --- 4. Copy Assignment Operator (operator=) ---
    Student& operator=(const Student& other) {
        if (this != &other) { // Self-assignment check
            cleanup();       // 1. Delete old memory
            deepCopy(other); // 2. Perform deep copy
        }
        return *this; // 3. Return a reference to the current object
    }

    // --- 5. Operator Overloading ---

    // operator+ : Combines grades by calculating the average of all grades
    Student operator+(const Student& other) const {
        // Create a temporary array to hold all combined grades
        int totalNumGrades = numGrades + other.numGrades;
        float* combinedGrades = new float[totalNumGrades];

        // Copy grades from *this
        std::copy(grades, grades + numGrades, combinedGrades);
        // Copy grades from other
        std::copy(other.grades, other.grades + other.numGrades, combinedGrades + numGrades);

        // Create a new Student object using the combined data
        // For simplicity, we use the first student's name/roll for the new combined student
        Student result(name + "&" + other.name, rollNumber, combinedGrades, totalNumGrades);

        delete[] combinedGrades; // Clean up temporary array

        // Bonus: Calculate average of combined student
        float totalSum = 0.0f;
        for (int i = 0; i < result.numGrades; ++i) {
            totalSum += result.grades[i];
        }
        float combinedAverage = totalSum / totalNumGrades;
        
        // This is a simple approach. A more complex requirement might be to average the averages.
        // For this implementation, we simply combine the lists.

        return result;
    }

    // --- 6. Getters and Setters ---

    // Getters
    std::string getName() const { return name; }
    int getRollNumber() const { return rollNumber; }
    int getNumGrades() const { return numGrades; }
    float* getGrades() const { return grades; } // Careful: returns raw pointer

    // Setters
    void setName(const std::string& n) { name = n; }
    void setRollNumber(int roll) { rollNumber = roll; }

    void setGrades(const float g[], int num) {
        if (num < 0) return;

        cleanup(); // Clean up existing memory

        numGrades = num;
        if (numGrades > 0) {
            grades = new float[numGrades];
            std::copy(g, g + num, grades);
        } else {
            grades = nullptr;
        }
    }

    // --- Bonus Method ---
    float calculateAverage() const {
        if (numGrades == 0) return 0.0f;
        float sum = 0.0f;
        for (int i = 0; i < numGrades; ++i) {
            sum += grades[i];
        }
        return sum / numGrades;
    }

    // Friend declaration for operator<<
    friend std::ostream& operator<<(std::ostream& os, const Student& s);
};

// Global definition for the static member
int Student::activeStudents = 0;

// operator<< Overload (Friend function)
std::ostream& operator<<(std::ostream& os, const Student& s) {
    os << "\n--- Student Details ---" << std::endl;
    os << "  Name: " << s.name << std::endl;
    os << "  Roll No: " << s.rollNumber << std::endl;
    os << "  Avg Grade: " << s.calculateAverage() << std::endl;
    os << "  Grades (" << s.numGrades << "): [";
    for (int i = 0; i < s.numGrades; ++i) {
        os << s.grades[i] << (i < s.numGrades - 1 ? ", " : "");
    }
    os << "]" << std::endl;
    os << "-----------------------";
    return os;
}

// --- 7. Main Function Demonstrating Requirements ---
int main() {
    std::cout << "Starting Student Management System Demo..." << std::endl;
    std::cout << "Active students before creation: " << Student::getActiveStudents() << "\n" << std::endl;

    // 1. Creating Student objects using constructors
    
    // Default constructor
    Student s1; 
    s1.setName("Alice");
    s1.setRollNumber(101);
    float g1[] = {90.5f, 85.0f, 92.5f};
    s1.setGrades(g1, 3);

    // Parameterized constructor
    float g2[] = {78.0f, 88.0f, 75.0f, 82.0f};
    Student s2("Bob", 102, g2, 4);

    // 2. Displaying student data using overloaded << operator
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;

    std::cout << "\nActive students after s1 and s2 creation: " << Student::getActiveStudents() << "\n" << std::endl;

    // 3. Copying students using the copy constructor
    Student s3 = s2; // Calls Copy Constructor
    s3.setRollNumber(103); // Change s3's roll number to prove it's a separate object
    s3.setName("Charlie (Copy of Bob)");
    std::cout << "--- Copied Student s3 (using Copy Constructor) ---" << std::endl;
    std::cout << s3 << std::endl;

    // Check for deep copy: change s2's grades, s3's should remain unchanged
    float g2_new[] = {99.0f};
    s2.setGrades(g2_new, 1);
    std::cout << "\n--- Grades changed for s2, checking s3 (deep copy check) ---" << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;


    // 4. Copying students using the assignment operator
    Student s4; // Default constructor
    s4 = s1;    // Calls Copy Assignment Operator (operator=)
    s4.setName("Diana (Assignment of Alice)");
    s4.setRollNumber(104);
    std::cout << "\n--- Copied Student s4 (using Assignment Operator) ---" << std::endl;
    std::cout << s4 << std::endl;


    // 5. Combining students using the overloaded + operator
    Student s_combined = s1 + s2; // Calls operator+
    s_combined.setRollNumber(200);
    s_combined.setName("Combined: Alice & Bob");
    std::cout << "\n--- Combined Student (using operator+) ---" << std::endl;
    std::cout << s_combined << std::endl;
    
    std::cout << "\nFinal active students before exiting main: " << Student::getActiveStudents() << std::endl;

    // All destructors are called automatically when main() exits, cleaning up memory.
    return 0;
}
