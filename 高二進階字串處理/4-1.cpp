#include <bits/stdc++.h>
using namespace std;

int main() {
    string pi = to_string(acos(-1));
    int x;
    cin >> x;
    cout << pi[x + 1] << "\n";
    return 0;
}