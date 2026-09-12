//if else in cpp
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter marks";
	cin>>marks;
	
	if(marks>=90)cout<<"A grade"<<endl;
	else if(marks >=75)cout<<"B grade"<<endl;
	else if(marks>=60)cout<<"C grade"<<endl;
	else if(marks>=35)cout<<"D grade"<<endl;
	else cout<<"Fail"<<endl;
	
	return 0;
}
