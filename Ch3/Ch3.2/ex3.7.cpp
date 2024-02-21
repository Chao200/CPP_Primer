#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    // 不是引用无法改变
    for (char x: s)
    {
        x = 'X';
    }
    cout << s << endl;
    return 0;
}