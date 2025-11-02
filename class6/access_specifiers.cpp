#include<iostream>
using namespace std;
// you call these concepts Encapsulation - hiding data 
class Phone {
  // This is shared to anyone no problem
  public:
    string mobile_name;
    string brand_name;
    bool is_smartphone;
   // setter methods 
   void setPhotos(){
      photos = "MY__PHOTOS";
    }
    void setPassword(string pass){
      password = pass;
    }

    // getter methods
    string getPhotos(){
      return photos;
    }
    string getPassword(){
      return password;
    }
  // These private attributes cannot be accessed out of the class
  private:
    string photos;
    
  // These attributes are never shared but can be "inherited"
  protected:
    string password;

};

int main(){
  Phone divyas_phone;
  divyas_phone.brand_name = "Iphone";
  divyas_phone.mobile_name = "X";
  divyas_phone.is_smartphone = true;

  divyas_phone.setPhotos();
  divyas_phone.setPassword("12345");

  cout << divyas_phone.getPassword() << endl;

}
