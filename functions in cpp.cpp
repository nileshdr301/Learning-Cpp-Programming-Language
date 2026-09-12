//functions in cpp
#include<iostream>
using namespace std;

	//creating function
	int add(int a , int b){
		return a+b;
	}
	
	
	int main(){
		int sum = add(5,3); //function call
		cout<<"sum is : "<<sum;
		return 0;
	}
