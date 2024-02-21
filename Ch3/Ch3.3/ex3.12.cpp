/*
(a) 正确，ivec 是 vector 嵌套 vector
(b) 不正确，类型不匹配
(c) 正确，十个 "null"
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> ivec;
    // vector<string> svec = ivec;
    vector<string> svec(10, "null");
    return 0;
}