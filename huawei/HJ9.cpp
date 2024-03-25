//
// Created by 奉壹 on 2024/3/24.
//
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[11]={0};
    while (n){
        int temp=n%10;
        n=n/10;
        if (!a[temp]){
            a[temp]=1;
            cout<<temp;
        }
    }
    cout<<endl;
    return 0;
}