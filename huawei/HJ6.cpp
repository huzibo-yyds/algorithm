//
// Created by 奉壹 on 2024/3/22.
//

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void cout_prime_numbers(int num){
    int i=2;
    while(num>i){
        if (num%i==0) {
            num = num / i;
            cout<<i<<" ";
        }
        if (num%i!=0){
            i++;
        }
    }
    cout<<num;
}

int main(){
    int num;
    auto start = high_resolution_clock::now(); // 记录开始时间
    cin>>num;
    cout_prime_numbers(num);

    auto stop = high_resolution_clock::now(); // 记录结束时间
    auto duration = duration_cast<microseconds>(stop - start); // 计算持续时间

    cout << "\n\nTime taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}