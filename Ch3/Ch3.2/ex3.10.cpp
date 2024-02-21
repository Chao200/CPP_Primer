#include <iostream>
using namespace std;

int main()
{
    // 快慢双指针法
    string s = "this, is. a :string!";

    int slow = 0;
    for (int fast = 0; fast < s.size(); ++fast)
    {
        if (!ispunct(s[fast]))
        {
            s[slow] = s[fast];
            ++slow;
        }
    }
    s.resize(slow);
    cout << s << endl;
    return 0;
}