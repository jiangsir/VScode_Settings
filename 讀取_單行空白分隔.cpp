/*
輸入為：單行空白分隔。
比如：給定一行，包含若干個整數
1 3 5 7 9
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vi;
    int x;
    while (cin >> x) {
        vi.push_back(x);
    }

    for (int x : vi) {
        cout << "讀到 x=" << x << "\n";
    }

    return 0;
}
