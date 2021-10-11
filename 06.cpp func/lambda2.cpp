#include <iostream>
#include <algorithm>

bool cmp1(int a, int b) { return a > b; }

int main()
{
    int x[10] = {1, 3, 5, 7, 9, 2, 4, 6 ,8, 10};

    //std::sort(x, x+10);

    std::sort(x, x+10, cmp1);

    // 함수가 필요한 곳에 함수 만드는거 대신 람다로 가능
    std::sort(x, x+10, [](int a, int b)
    {
        return a > b;
    });

    for(auto n : x)
        std::cout << n << ", ";
}