#include <bits/stdc++.h>
using namespace std;

int main() {
    // string pi = to_string(acos(-1));
    double pi = acos(-1);
    printf("%.20f\n", pi);
    long long ll = pi * 1000000000000000000;
    cout << ll << endl;
    string pis = to_string((long long int)(pi * 1.0e+18));
    cout << pis << endl;
    return 0;
}