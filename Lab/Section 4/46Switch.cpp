#include <iostream>
#include <cctype>
using namespace std;
int countVowels(const string& word) {
    int vowelCount = 0;
    for (char ch : word) {
        char lowercaseCh = tolower(ch);
        switch (lowercaseCh) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
        }
    }
    return vowelCount;
}
int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int result = countVowels(word);
    cout << "Number of vowels in the word \"" << word << "\": " << result << endl;
    return 0;
}
