#include <iostream>
using namespace std;

int arr[100] = {1};

int main() {
    int n, a = 0, b = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        b = a + b;
        a = b - a;
        cout << b << endl;
    }
    return 0;
}