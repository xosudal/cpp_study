#include <iostream>

void foo(int a)
{
    std::cout << "foo : " << a << std::endl;
}

int main()
{
    foo(1);

    [](int a)
    {
        std::cout << "foo : " << a << std::endl;
    } (10);

    // 함수 생성
    [](int a, int b)
    {
        return a + b;
    };

    // 함수 생성 + 호출
    [](int a, int b)
    {
        return a + b;
    }(1,2);
}

// 일반적인 함수 : global space에 만들어 놓고 필요할 때 함수를 호출해서 사용
// lambda : 이름이 없는 함수. 함수 return type과 이름을 제거하고 []로 표기
