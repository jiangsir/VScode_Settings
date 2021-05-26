#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int flag = 0;

        for (int j = 0; j < s.length() / 2; j++) {
            if (s[j] != s[s.length() - 1 - j]) {
                cout << "No" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "Yes" << endl;
    }
    return 0;
}