//
// Created by 奉壹 on 2024/3/24.
//
#include <iostream>
#include <string>

using namespace std;

//题目要求，句子顺序反，单词顺序输出
int main(){
    string str;
    getline(cin, str);

    int r = str.size()-1;//右指针
    for (int i = r; i >=0 ; --i) {
        //first one
        if (i == 0) {
            for (int j = i; j <= r; ++j) {
                cout << str[j];
            }
        }

        if (str[i] == ' ') {
            for (int j = i+1; j <= r; ++j) {
                cout << str[j];
            }
            cout << ' ';

            r = i - 1;
        }
    }
    return 0;
}



/**
 * //-理解错误，下面代码为从前往后便利字符串，将每个字符倒叙输出
int main() {
    string str;
    getline(cin, str);

    int l = 0;
    for (int i = 0; i < str.size(); ++i) {
        //last one
        if (i == (str.size() - 1)) {
            for (int j = i; j >= l; --j) {
                cout << str[j];
            }
        }

        if (str[i] == ' ') {
            for (int j = i - 1; j >= l; --j) {
                cout << str[j];
            }
            cout << ' ';
            l = i + 1;
        }
    }
    return 0;
}
 */