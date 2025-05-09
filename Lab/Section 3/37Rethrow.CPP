#include <iostream>
using namespace std;
void myFunction()
{
 try {
 throw "hello";
 }
 catch(const char *) {
 cout << "Caught char * inside myFunction\n";
 throw ;
 }
}
int main()
{
 cout << "Start\n";
 try{
 myFunction();
 }
 catch(const char *) {
 cout << "Caught char * inside main\n";
 }
 cout << "End";
 return 0;
}
