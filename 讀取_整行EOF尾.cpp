/*
輸入的每一行有一個正整數 y，代表珊珊生日的西元年份。
EOF輸入的結束。
例：
2016
2017
2018
2019
*/

#include<iostream>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        cout << "讀取整行 s = " << s << "\n";
    }

    return 0;
}