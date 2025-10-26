/*
You are developing a simulation for a factory that manufactures different types of electronic Digital Devices. The goal is to track the core properties of these devices and manage a common action they all perform: powering on.

Requirements and Key Concepts
Concept	Requirement	Implementation Detail
Encapsulation	Every digital device must have a model name (e.g., "Galaxy S25") and a unique serial number. This information must be protected from direct, unauthorized changes.	Create a base class DigitalDevice with private fields for modelName and serialNumber, providing controlled access only through public getter methods.
Inheritance	The factory produces two main product lines: Smartphones and Laptops. Both product lines share the core traits of a DigitalDevice but also have specific, unique features.	Create Smartphone and Laptop classes that inherit from the base DigitalDevice class. Smartphone might add a property like screenSize, and Laptop might add hasDedicatedGPU.
Polymorphism	All devices must be able to perform the action of powering on, but the specific boot-up message or process is different for each product line. The factory needs to call a unified powerOn() method regardless of the device type.	Define a common powerOn() method in the base DigitalDevice class. Then, override this method in the Smartphone class (e.g., prints "Loading Mobile OS...") and the Laptop class (e.g., prints "Booting Desktop OS...").
*/
// Solve this using classes