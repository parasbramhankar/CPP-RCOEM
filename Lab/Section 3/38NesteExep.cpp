#include <iostream>
using namespace std;
int main() {
 int var = 0;
 cout << "Simple C++ Program for Nested Exception Handling\n";
 try {

 try {
 throw var;
 } 
 catch (int ex) {

 cout << "Nested Exception Catch : Value :" << ex;
 }
 } catch (...) {
 cout << "Default Exception Catch";
 }
 return 0;
}
