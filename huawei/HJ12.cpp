//
// Created by 奉壹 on 2024/3/24.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for (int i = str.size()-1; i >=0 ; --i) {
        cout<<str[i];
    }

}