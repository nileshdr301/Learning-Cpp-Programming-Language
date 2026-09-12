//constructor
#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		//constructor
		Student(string n){
			name = n;
		}
};

int main()
{
	Student s("Ravi");
	cout<<s.name;  //Ravi
	return 0;
}
