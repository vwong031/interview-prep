#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

/* 1.1
INSTRUCTIONS
- Implement an algorithm to determine if a string has all unique characters
- What if you cannot use additional data structures?
*/

const bool isUnique(const string);

int main() {
  string userString;

  cout << "Enter a string: ";
  cin >> userString;

  cout << isUnique(userString) << endl;

  return 0;
}

const bool isUnique(const string s) {
  bool isUnique = true;
  unordered_map<char, int> m;

  for (int i = 0; i < s.size(); ++i) {
    m[s[i]]++;

    if (m[s[i]] > 1) {
      return (isUnique = false);
    }
  }

  return isUnique;
}
