#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
        total += tolower(s[i]) - 'a' + 1;
    }
    cout << total << "\n";
    return 0;
}