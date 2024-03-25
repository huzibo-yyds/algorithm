//
// Created by 奉壹 on 2024/3/24.
//
#include <iostream>

using namespace std;

int main(){
    int n,num=0;
    cin>>n;
    while(n){
        num+=(n%2);
        n=n/2;
    }
    cout<<num<<endl;
    return 0;
}

/** 利用真实存储上的位操作
int main() {
    int m;
    int cnt = 0;
    scanf("%d", &m);
    while(m) {
        cnt += m&1;
        m = m >> 1;
    }
    printf("%d", cnt);
    return 0;
}
 * */