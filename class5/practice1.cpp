// Define a class called Electronic and initialize a object using that class ,initialized class should be from your household and add some methods to it!
#include <iostream>
#include <string>

// Define the Electronic class
class Electronic {
private:
    // Attributes (member variables)
    std::string name;
    std::string brand;
    bool isOn;
    int volume;

public:
    // Constructor to initialize an Electronic object (Smart TV in this case)
    Electronic(const std::string& n, const std::string& b, int initialVolume = 20)
        : name(n), brand(b), isOn(false), volume(initialVolume) {
        std::cout << name << " (" << brand << ") has been created." << std::endl;
    }

    // Method to turn the device on
    void turnOn() {
        if (!isOn) {
            isOn = true;
            std::cout << name << " is now **ON**." << std::endl;
        } else {
            std::cout << name << " is already on." << std::endl;
        }
    }

    void turnOff() {
        if (isOn) {
            isOn = false;
            std::cout << name << " is now **OFF**." << std::endl;
        } else {
            std::cout << name << " is already off." << std::endl;
        }
    }

    void volumeUp(int amount) {
        if (isOn) {
            volume += amount;
            if (volume > 100) volume = 100;
            std::cout << name << " volume increased to: " << volume << std::endl;
        } else {
            std::cout << "Cannot change volume. " << name << " is off." << std::endl;
        }
    }

    void getStatus() const {
        std::cout << "\n--- **" << name << " Status** ---" << std::endl;
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Power: " << (isOn ? "ON" : "OFF") << std::endl;
        if (isOn) {
            std::cout << "Volume: " << volume << std::endl;
        }
        std::cout << "----------------------" << std::endl;
    }
};

int main() {
    Electronic smartTV("Smart TV", "Samsung", 15); 
    
    smartTV.getStatus();

    std::cout << "\n*** Interaction ***" << std::endl;
    smartTV.turnOn();
    smartTV.volumeUp(10);
    smartTV.volumeUp(5);
    smartTV.turnOff();
    smartTV.volumeUp(5);

    smartTV.getStatus();

    return 0;
}