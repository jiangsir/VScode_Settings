#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    cin >> a[0];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for (int x : a) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

/**
5
1 2 3 4 5

1 3 6 10 15


a: 1 2 3 4 5 6 7 8 9 10

b: 1 3 6 10 15 21 .....

*/
