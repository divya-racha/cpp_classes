// Read about sets, maps in STL and write some example programs for each of them as we written for vectors.
#include <iostream>
#include <map>
#include <string>

void mapExample() {
    std::cout << "\n--- 🗺️ std::map Example: Employee Salaries ---" << std::endl;

    std::map<std::string, double> employeeSalaries;

    employeeSalaries["Alice"] = 60000.0;
    employeeSalaries.insert({"Bob", 75000.0});
    employeeSalaries["Charlie"] = 55000.0;

    employeeSalaries["Alice"] = 62000.0;
    std::cout << "Updated Alice's salary to: $" << employeeSalaries["Alice"] << std::endl;

    std::cout << "All Employees and Salaries:" << std::endl;
    for (const auto& pair : employeeSalaries) {
        std::cout << "- " << pair.first << ": $" << pair.second << std::endl;
    }

    std::string employeeName = "Bob";
    try {
        double salary = employeeSalaries.at(employeeName);
        std::cout << employeeName << "'s salary using at(): $" << salary << std::endl;
    } catch (const std::out_of_range& oor) {
        std::cout << "Error: " << employeeName << " not found." << std::endl;
    }

    std::string removeName = "Charlie";
    employeeSalaries.erase(removeName);
    std::cout << removeName << " has been removed." << std::endl;
}