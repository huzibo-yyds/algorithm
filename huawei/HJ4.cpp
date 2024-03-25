//
// Created by 奉壹 on 2024/3/23.
// 字符串分隔 每8个字符输出一行，不足则用0补足

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    if (str.size() > 0) {
        int n = str.size() % 8;

        int i = 0;
        for (; i < str.size() - n; ++i) {
            cout << str[i];
            if ((i + 1) % 8 == 0)
                cout << endl;
        }

        for (; i < str.size(); i++) {
            cout << str[i];
        }
//        cout<<"0"*(8-n)<<endl;
        if (n != 0) {
            for (int j = 0; j < 8 - n; ++j) {
                cout << '0';
            }
            cout << endl;
        }

    } else {
        return 0;
    }
    return 0;

}
