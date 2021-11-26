#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
cin >> n;
cin.ignore();
for (int i = 0; i < n; i++) {
    string s;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> s) {
        cout << "第" << i+1 << "行讀到 " << s << endl;
    }
}
    return 0;
}

/*
4
MF MF
FM FF MF MM
MM FF
MF MF MF MF FF
*/