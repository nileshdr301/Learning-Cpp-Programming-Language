//structure in cpp
#include<iostream>
using namespace std;

	struct student{
		int roll;
		string name;
		float marks;
	};
	int main(){
		
		struct student s1 = {101,"Nilesh",89.5};
		cout<<s1.roll<<endl<<s1.name<<endl<<s1.marks;
		return 0;
	}
