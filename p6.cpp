#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b, c;
        int count = 0;
        cin >> a >> b >> c;
        for (int x = a + 1; x < b; x++) {
            if (x % c != 0) {
                cout << x << ' ';
                count += 1;
            }
        }
        if (count == 0) {
            cout << "No free parking spaces." << endl;
        } else {
            cout << endl;
        }
    }
}