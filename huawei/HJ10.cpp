//
// Created by 奉壹 on 2024/3/24.
//
#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int a[128] = {0};
    for (char ch: str) {
        a[int(ch)] = 1;
    }

    int num = 0;
    for (int i = 0; i < 128; ++i) {
        if (a[i])
            num += 1;
    }
    cout << num << endl;w
    return 0;
}