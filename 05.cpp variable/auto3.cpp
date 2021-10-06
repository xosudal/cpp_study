#include <iostream>
#include <typeinfo>

int foo(int a, double d)
{
    return 0;
}

int main()
{
    foo(1, 3.1);

    decltype(foo) d1; // 함수 타입 - int(int, double)

    decltype(&foo) d2; // 함수 포인터 타입 - int(*)(int, double)

    decltype(foo(1, 3.1)) d3; // 함수 return 타입 - int
    // 실제 foo함수가 호출되는 것은 아님. (평가되지 않는 표현식)

    // decltype(함수이름) = 함수타입
    // decltype(&함수이름) = 함수포인터 타입
    // decltype(함수호출식) = 함수 return 타입

    std::cout << typeid(d1).name() << std::endl; // int(int, double)
    std::cout << typeid(d2).name() << std::endl; // int(*)(int, double)
    std::cout << typeid(d3).name() << std::endl; // int
}