//
// Created by 奉壹 on 2024/3/22.
//
#include <iostream>
#include <map>
using namespace std;

//int main() {
//    // 定义一个 map 用于存储索引和对应的数值之和
//    map<int, int> index_sum;
//
//    int index, value;
//    int num;
//    cin>>num;
//    for (int i = 0; i < num; ++i) {
//        cin >> index >> value;
//        // 更新 map 中索引对应的数值之和
//        index_sum[index] += value;
//    }
//
//    // 遍历 map，按索引升序输出
//    for (const auto& pair : index_sum) {
//        cout << pair.first << " " << pair.second << endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 定义一个二维数组，用于存储索引和对应的数值
    vector<vector<int>> records;

    int index, value;
    while (cin >> index >> value) {
        // 查找是否已经存在相同的索引
        bool found = false;
        for (auto& record : records) {
            if (record[0] == index) {
                record[1] += value;
                found = true;
                break;
            }
        }
        // 如果没有找到相同的索引，则将新记录加入二维数组
        if (!found) {
            records.push_back({index, value});
        }
    }

    // 对二维数组按索引升序排序
    sort(records.begin(), records.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    // 输出合并后的数据记录
    for (const auto& record : records) {
        cout << record[0] << " " << record[1] << endl;
    }

    return 0;
}
