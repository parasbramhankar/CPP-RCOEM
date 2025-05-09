#include <iostream>
#include <string.h>
using namespace std;
union test
{
 int a;
 char b[10];
};
int main()
{
 union test *p;

 union test x;
 union test t;
 x.a = 500;
 p = &x;
 strcpy(t.b, "Hello");
 cout<<"The value of a is \n"<< p -> a;
 cout<<"\nThe value of b is \n"<< t.b;
 return 0;
}
