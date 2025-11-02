#include<iostream>
using namespace std;

// class name must start with capitaal letter
class Vehicle {
  public: // access specifier
    string brand_name;
    string name;
    int wheels;
    bool is_insured;
    long top_speed;
    double pending_fine;
    string color;
    // Method is same as function nothing different
    void StartTheVehicle() {
      cout << "brrrrrrrrrr....." << endl;
    }
    void changeColor(string newColor){
      color =  newColor;
    }
    void PrintAllDetails() {
      cout << brand_name << " " << name << " " << wheels << " "<< is_insured << " "<< top_speed << " "<< color << endl;
    }
};
int main() {
  Vehicle amraths_vehicle;
  amraths_vehicle.brand_name = "Triumph";
  amraths_vehicle.name = "Speed_400";
  amraths_vehicle.color = "Black";
  amraths_vehicle.is_insured = true;
  amraths_vehicle.pending_fine = 1300;
  amraths_vehicle.top_speed = 160.0;
  amraths_vehicle.wheels = 2;

  amraths_vehicle.PrintAllDetails();

  amraths_vehicle.changeColor("Yellow");

  amraths_vehicle.PrintAllDetails();

  amraths_vehicle.StartTheVehicle();

  Vehicle divyas_vehicle;
  divyas_vehicle.brand_name = "bugati";
  divyas_vehicle.name = "x16";
  divyas_vehicle.color = "orange";
  divyas_vehicle.is_insured = false;
  divyas_vehicle.pending_fine = 0;
  divyas_vehicle.top_speed = 200;
}