#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string expressions;
    cout << "Enter expressions:\n";

        getline(cin, expressions);

        int round_bracket_count = 0, curly_bracket_count = 0, square_bracket_count = 0;

        for (char bracket : expressions) {
            if (bracket == '(') {
                round_bracket_count++;
            } else if (bracket == ')') {
                if (round_bracket_count == 0) {
                    cout << "Expression does not have balanced brackets\n";
                    break;
                }
                round_bracket_count--;
            } else if (bracket == '{') {
                curly_bracket_count++;
            } else if (bracket == '}') {
                if (curly_bracket_count == 0) {
                    cout << "Expression does not have balanced brackets\n";
                    break;
                }
                curly_bracket_count--;
            } else if (bracket == '[') {
                square_bracket_count++;
            } else if (bracket == ']') {
                if (square_bracket_count == 0) {
                    cout << "Expression does not have balanced brackets\n";
                    break;
                }
                square_bracket_count--;
            }
        }

        if (round_bracket_count == 0 && curly_bracket_count == 0 && square_bracket_count == 0) {
            cout << "Expression has balanced brackets\n";
        }
    

    return 0;
}
