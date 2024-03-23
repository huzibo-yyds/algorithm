//
// Created by 奉壹 on 2024/3/22.
// 计算某字符出现次数
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string input;
    char ch;
    getline(cin,input);
    cin>>ch;

    ch = tolower(ch);

    int num=0;
    for (char ch_x:input) {
        if(ch== tolower(ch_x))
            num++;
    }

    cout<<num<<endl;
    return 0;
}