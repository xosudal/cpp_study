//constexpr 제약
// c+11까지 return이 1개어야함
// file open 불가
// malloc 불가
// 가상함수가 될 수 없다

#include <iostream>

constexpr int factorial(int n)
{

    if (n == 1) return 1;
    return n*factorial(n-1);
}

int main()
{
    factorial(5);
}