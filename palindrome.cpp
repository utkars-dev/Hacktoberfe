#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a word: ";
    cin >> s;
    string rev = string(s.rbegin(), s.rend());
    if (s == rev) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}
