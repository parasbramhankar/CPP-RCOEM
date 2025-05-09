#include <iostream>
using namespace std;
int main() {
 int var = 0;
 cout << "Simple C++ Program for Catch All or Default Exception Handling\n";
 try {
 if (var == 0) {
 throw var;
 }
 }
 catch (float ex) {
 cout << "Float Exception catch : Value :" << ex;
 } catch (...) {

 cout << "Default Exception Catch";
 }
 return 0;
}