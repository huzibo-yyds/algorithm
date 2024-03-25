//
// Created by 奉壹 on 2024/3/24.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n;

    do {
        str.push_back(char(n % 10+'0'));
        n = n / 10;
    } while (n);

    cout<<str<<endl;
    return 0;
}