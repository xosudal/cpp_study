int* foo() {return 0;}

int main()
{
    auto ret = foo();

    if (ret == 0) // ret은 무슨타입일까...
    // 포인터라는 것을 알면
    // if(ret == nullptr) 로 쓰자
    {
        // ... 
    }

    0; // int
    0.0; // double
    nullptr; // std::nullptr_t

    // std::nullptr_t 타입은 모든 타입의 포인터로 암시적 형변환 가능함
    // int 타입으로는 변환될 수 없음

    bool b1 = nullptr; // error. g++에서는 error
    bool b2(nullptr); // ok
    bool b3{nullptr}; // ok
    bool b4 = {nullptr}; // error. g++에서는 error

    // NULL은 일반적으로 c++에서는 그냥 정수형 0이다
    // c++에서는 nullptr을 사용하도록 합시다
}