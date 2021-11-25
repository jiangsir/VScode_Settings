#include <bits/stdc++.h>
using namespace std;

int main() {
    string line1, line2;
    while (getline(cin, line1) && getline(cin, line2)) {
        sort(line1.begin(), line1.end());
        sort(line2.begin(), line2.end());
        if (line1 == line2) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}