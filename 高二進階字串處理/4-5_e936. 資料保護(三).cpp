#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i=1; i<s.length(); i+=2){
        s[i] = '*';
    }
    cout << s << endl;
    return 0;
}