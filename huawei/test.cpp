//
// Created by 奉壹 on 2024/3/22.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    int length = 0;
    int i = input.size() - 1;

    // 跳过末尾可能的空格
    while (i >= 0 && input[i] == ' ') {
        i--;
    }

    // 计算最后一个单词的长度
    while (i >= 0 && input[i] != ' ') {
        length++;
        i--;
    }

    cout << length << endl;

    return 0;
}
