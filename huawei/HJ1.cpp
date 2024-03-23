//
// Created by 奉壹 on 2024/3/22.
// 输出字符串最后一个
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    int length=0;
    int i=input.size()-1;

    while (i>=0 && input[i]==' ')
        i--;

    while (i>=0 && input[i]!=' '){
        i--;
        length++;
    }

    cout<<length<<endl;

    return 0;
}
