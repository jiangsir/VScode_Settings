#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    cout << log2(1 + t / n) << endl;
    return 0;
}

/*
K             = 1
K    i        = 2
K   i  i   i  = 4
Ki  ii ii  ii = 8
*/

