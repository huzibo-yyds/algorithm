//
// Created by 奉壹 on 2024/3/22.
//
#include <iostream>
#include <cmath> // 添加头文件
using namespace std;

void cout_prime_numbers(int num) {
    // 处理num中的所有2的因子
    while (num % 2 == 0) {
        cout << 2 << " ";
        num = num / 2;
    }

    // num现在必然是奇数，所以我们只需要检查奇数因子
    for (int i = 3; i <= sqrt(num); i = i + 2) {
        while (num % i == 0) {
            cout << i << " ";
            num = num / i;
        }
    }

    // 如果num是一个大于2的质数，则打印num本身
    if (num > 2) {
        cout << num;
    }
}

int main() {
    int num;
    cin >> num;

    cout_prime_numbers(num);

    return 0;
}
