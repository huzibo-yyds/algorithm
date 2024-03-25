//
// Created by 奉壹 on 2024/3/24.
// 进制转换|字符串｜加权计数法
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    if (input[0]!='0'||input[1]!='x')
        return 0;

    int result=0;

    for(int i=input.size()-1;i>1;i--){
        int temp;
        switch (input[i]) {
            case '0':temp=0;
                break;
            case '1':temp=1;
                break;
            case '2':temp=2;
                break;
            case '3':temp=3;
                break;
            case '4':temp=4;
                break;
            case '5':temp=5;
                break;
            case '6':temp=6;
                break;
            case '7':temp=7;
                break;
            case '8':temp=8;
                break;
            case '9':temp=9;
                break;
            case 'A':temp=10;
                break;
            case 'B':temp=11;
                break;
            case 'C':temp=12;
                break;
            case 'D':temp=13;
                break;
            case 'E':temp=14;
                break;
            case 'F':temp=15;
        }
        result +=temp*pow(16,(input.size()-i-1));
    }

    cout<<result<<endl;
}

/*
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
 int main()
 {
     string s;
     while(cin>>s)
     {
         int bit=0;
         int ans =0;
         for(int i=s.length()-1;i>1;i--)
         {
             if(s[i]>='0'&&s[i]<='9')
                 ans+=(s[i]-'0')*pow(16,bit++);
             else if(s[i]>='A'&&s[i]<='F')
                 ans+=(s[i]-'A'+10)*pow(16,bit++);
         }//比使用switch方式简便
         cout<<ans<<endl;
     }
     return 0;
 }
 * */