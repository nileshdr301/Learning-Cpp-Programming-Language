//file handling 
#include<iostream> 
#include<fstream> // file sathi 
using namespace std; 
int main() { 
ofstream fout; // Write 
fout.open("test.txt"); 
fout << "Hello File"; 
fout.close(); 
ifstream fin; // Read 
fin.open("test.txt"); 
string s; 
fin >> s; 
cout << s; // Hello 
fin.close(); 
return 0; 
}
