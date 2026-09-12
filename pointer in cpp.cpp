//poiter in cpp
#include<iostream> 
using namespace std; 
int main() { 
int a = 10; 
int *ptr = &a; // ptr stores address of a 
cout << a<<endl; // 10 Value 
cout << *ptr<<endl; // 10 Value using pointer 
cout << &a<<endl; // Address 
return 0; 
}
