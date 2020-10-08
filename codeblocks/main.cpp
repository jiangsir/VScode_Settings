#include <bits/stdc++.h>
using namespace std;

int arra[10] = {0};

int main() {
    int n, a = 0, b = 1;
    cin >> n;
    arra[0] = n;
    for (int i = 0; i < n; i++) {
        b = a + b;
        a = b - a;
        arra[i % 2] = a;
        arra[(i + 1) % 2] = b;
        cout << b << endl;
    }
    return 0;
}
