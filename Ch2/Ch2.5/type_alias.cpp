#include <iostream>
using namespace std;

int main()
{
    typedef char* pstring;
    // using ustring = char*;
    char* s1 = "abcd";
    char* s2 = "ustc";
    const pstring p1 = s1;
    // p1 = s2; // 无法修改指针指向
    const pstring *ps;
    ps = &p1;
    char* const p = s2;
    ps = &p;

    return 0;
}