#include <bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin >> n;
 string s;
 cin >> s;
 for (int i = 1; i < (int)s.size(); i += 2) {
 s[i] = '#';
 }
 cout << s;
}