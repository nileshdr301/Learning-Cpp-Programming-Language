// INHERITANCE 
#include<iostream> 
using namespace std; 
 
class Animal { 
    public: 
        void sound() { cout << "Animal sound"; } 
}; 
 
class Dog : public Animal { // Inheritance 
    public: 
        void bark() { cout << "Bark"; } 
}; 
 
int main() { 
    Dog d; 
    d.sound(); // Animal sound 
    d.bark(); // Bark 
    return 0; 
}
