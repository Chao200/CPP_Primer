#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s << endl;
    for (int i = 0; i < s.size(); ++i)
    {
        s[i] = 'X';
    }
    cout << s << endl;

    int i = 0;
    while (i < s.size())
    {
        s[i] = 'Y';
        ++i;
    }
    cout << s << endl;
    return 0;
}