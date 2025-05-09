#include <iostream>
using namespace std;

int main()
{
	string s;
	cout<<"Enter Parentheses' String: ";
	cin>>s;
	int i=-1;
		for(auto& ch:s)
		{
			if(ch=='(' || ch=='{' || ch=='[')
				s[++i]=ch;
			else{
				if(i>=0 && ((s[i]=='(' && ch==')') || (s[i]=='{' && ch=='}') || (s[i]=='[' && ch==']')))
					i--;
				else
					i=1;
			}
		}
		
	if (i==-1)
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}