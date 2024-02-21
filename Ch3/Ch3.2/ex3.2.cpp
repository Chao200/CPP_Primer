#include <iostream>
#include <string>
using namespace std;

int main()
{
    // // 一次读取一行
    // string s;
    // while (getline(cin, s))
    // {
    //     cout << s << endl;
    // }

    // 一次读入一个单词
    string s;
    while (cin >> s)
    {
        cout << s << endl;
    }

    return 0;
}