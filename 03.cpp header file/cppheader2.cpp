void foo() {}

namespace Audio
{
    // 전역 공간에 있는 함수를 namespace 안에 포함하는 방법
    using ::foo; // audio namespace 안에서 전역에 있는 foo를 사용할 수 있게 해주세요
    void init() {}
}

int main()
{
    Audio::init();

    using Audio::init;
    init();

    foo();
    Audio::foo(); // using 선언 없으면 에러임
}