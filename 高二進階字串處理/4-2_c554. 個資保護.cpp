#include <bits/stdc++.h>
using namespace std;

int main() {
    // string s;
    // cin >> s;
    // s.replace(3, 3, "o");
    // cout << s << "\n";

string s = "0123456789";
s.replace(3, 4, 10, '*');// 換成 10個*
//s.replace(s.find('4'), 4, 10, '*'); // '4'的位置開始的4個byte 換成 10個*
    cout << s << "\n";
    return 0;
}