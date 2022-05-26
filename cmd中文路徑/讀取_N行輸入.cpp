/*
輸入的第一行有一個整數 n。接下來的 n 行每行有一個正整數 y，代表西元年份。
例：
4
2016
2017
2018
2019
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vi;
    for (int i = 0; i < n; i++) {
        int y;
        cin >> y;
        vi.push_back(y);
    }

    for (int y : vi) {
        cout << "讀到 y=" << y << "\n";
    }
    return 0;
}