#include <iostream>

void foo(int x) // call by value
//void foo(const int& x)
{

}

int main()
{
    int n = 10;

    // foo 함수에서는 절대로 n의 값을 변경하면 안됨
    foo(n);
}

// 함수 안에서 인자의 값을 변경하고 싶다면 포인터 또는 참조를 사용

// 변경하지 못하게 하려면
// primitive type의 경우는 call by value가 좋음
// 구조체, class 같은 경우는 const reference가 좋음
