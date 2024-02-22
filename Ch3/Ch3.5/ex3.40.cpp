#include <iostream>
#include <cstring>

int main()
{
    constexpr char cstr1[] = "Hello";
    constexpr char cstr2[] = "world!";
    // constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char cstr3[100];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
}