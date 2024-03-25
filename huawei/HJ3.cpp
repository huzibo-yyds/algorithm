//
// Created by 奉壹 on 2024/3/22.
// 明明的随机数

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num;
    vector<int> random_num;
    cin>>num;
    for (int i = 0; i < num; ++i) {
        int temp;
        cin>>temp;
        random_num.push_back(temp);
    }

    sort(random_num.begin(),random_num.end());
    auto list= unique(random_num.begin(),random_num.end());
    random_num.erase(list,random_num.end());

    for (int temp : random_num) {
        cout<<temp<<endl;
    }
    return 0;
}