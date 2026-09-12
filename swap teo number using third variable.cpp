//swap two numbers
//even or odd
#include<iostream>
using namespace std;
int main()
{
	int a,b, temp;
	cout<<"enter a : ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
	
	temp = a;
	a=b;
	b=temp ;
	
	cout<<"After swap";
	cout<<"a = "<<a;
	cout<<"b = "<<b;
	
	return 0;
}
