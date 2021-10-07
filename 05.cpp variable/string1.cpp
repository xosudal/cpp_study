#if 0
#include <stdio.h>

int main()
{
    char s1[32] = "hello";

    const char* s2 = "world";

    s1 = s2; // 대입
    strcpy(s1, s2);

    if (s1 == s2) {} // 비교

    if (strcmp(s1, s2) == 0) {}
}
#endif

#include <iostream>
#include <string>

// std 안에 있음(STL의 string class) string header 필요함
int main()
{
    std::string s1 = "hello";
    std::string s2 = "world";

    s1 = s2; // 대입

    if (s1 == s2) {} // 비교

    std::string s3 = s1+s2;
}