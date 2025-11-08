/*
You are developing a simulation for a factory that manufactures different types of electronic Digital Devices. The goal is to track the core properties of these devices and manage a common action they all perform: powering on.

Requirements and Key Concepts
Concept	Requirement	Implementation Detail
Encapsulation	Every digital device must have a model name (e.g., "Galaxy S25") and a unique serial number. This information must be protected from direct, unauthorized changes.	Create a base class DigitalDevice with private fields for modelName and serialNumber, providing controlled access only through public getter methods.
Inheritance	The factory produces two main product lines: Smartphones and Laptops. Both product lines share the core traits of a DigitalDevice but also have specific, unique features.	Create Smartphone and Laptop classes that inherit from the base DigitalDevice class. Smartphone might add a property like screenSize, and Laptop might add hasDedicatedGPU.
Polymorphism	All devices must be able to perform the action of powering on, but the specific boot-up message or process is different for each product line. The factory needs to call a unified powerOn() method regardless of the device type.	Define a common powerOn() method in the base DigitalDevice class. Then, override this method in the Smartphone class (e.g., prints "Loading Mobile OS...") and the Laptop class (e.g., prints "Booting Desktop OS...").
*/
// Solve this using classes
#include <iostream>
#include <string>

private:
    std::string serialNumber;

public:
    // Constructor
    DigitalDevice(const std::string& model, const std::string& serial)
        : modelName(model), serialNumber(serial) {}

    std::string getModelName() const {
        return modelName;
    }

    std::string getSerialNumber() const {
        return serialNumber;
    }

    virtual void powerOn() const = 0;
    virtual ~DigitalDevice() = default;
};

class Smartphone : public DigitalDevice {
private:
    double screenSize;

public:
    Smartphone(const std::string& model, const std::string& serial, double screen)
        : DigitalDevice(model, serial), screenSize(screen) {}

    double getScreenSize() const {
        return screenSize;
    }

    void powerOn() const override {
        std::cout << "** " << getModelName() << " ** powering on..." << std::endl;
        std::cout << "-> Loading Mobile OS (Screen Size: " << screenSize << " inches)..." << std::endl;
    }
};

class Laptop : public DigitalDevice {
private:
    bool hasDedicatedGPU;

public:
    Laptop(const std::string& model, const std::string& serial, bool dedicatedGPU)
        : DigitalDevice(model, serial), hasDedicatedGPU(dedicatedGPU) {}

    bool getHasDedicatedGPU() const {
        return hasDedicatedGPU;
    }

    void powerOn() const override {
        std::cout << "** " << getModelName() << " ** powering on..." << std::endl;
        std::cout << "-> Booting Desktop OS (Dedicated GPU: " << (hasDedicatedGPU ? "YES" : "NO") << ")..." << std::endl;
    }
};

int main() {

    std::cout << "--- Factory Production Simulation ---" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    Smartphone phone("Galaxy S25", "SN-98765", 6.8);
    Laptop notebook("XPS 15", "SN-12345", true);

    std::cout << "\n*** Device Information ***" << std::endl;
    std::cout << "Device 1: " << phone.getModelName() << " | Serial: " << phone.getSerialNumber() << std::endl;
    std::cout << "Device 2: " << notebook.getModelName() << " | Serial: " << notebook.getSerialNumber() << std::endl;
    std::cout << "--------------------------" << std::endl;

    std::cout << "\n*** Testing Polymorphism: Unified Power On Call ***" << std::endl;

    for (DigitalDevice* device : devices) {
        device->powerOn();
    }

    return 0;
}