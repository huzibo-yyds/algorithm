

来源：[华为机试](https://www.nowcoder.com/exam/oj/ta?page=1&tpId=37&type=37)



# HJ1

> 
>
> 字符串的识别

+ cin：接受一个数字、字符、字符串。
  遇 空格、TAB、回车 结束
+ cin.getline()：接受一个字符串，可以接受空格
  + ***\*cin.getline(接收字符串的变量,接收字符个数,结束字符)\****
  + 三个参数省略时，系统默认为'\0'
+ getline()：接受字符串，可接受空格
  + 需要包含`#include<string>`

【注意】⚠️

1. cin，cin.getline属于istream流；getline属于string
2. 同时使用cin、getline()时。需要将回车符作为输入流cin以清除缓存



举例：<u>同时使用cin与getline()</u>

++错误演示

```C++
string input;
cin>>input;					//hu
cout<<input<<endl;	//hu
getline(cin,input);	//zi
cout<<input<<endl;	//
```

++正确做法

```C++
cin >> input;
cout << input << endl;

// cin与getline同时使用，需要清除缓存
input = "\n";
getline(cin, input);

getline(cin, input);
cout << input << endl;
```



----

# HJ2

> 计算某字符出现次数不区分大小写
>
> + 字符串、字符识别，考虑大小写



+ tolower，将字符转换为小写

`int tolower(int c);`

`toupper()` 变为大写



+ 遍历对象

```C++
for (char ch_x:input) {
    if(ch== tolower(ch_x))
        num++;
}
```





> [!NOTE]

