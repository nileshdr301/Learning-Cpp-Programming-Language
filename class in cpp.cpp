//class and object - oop
#include<iostream>
using namespace std;
class Car{//class
public:
	string brand;
	void drive()
	{
		cout<<brand<<"is driving";
	}
};

int main(){
	Car c1; //object
	c1.brand =  "BMW ";
	c1.drive();  //BMW is driving
	return 0;
}
