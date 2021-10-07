int main()
{
    int n = 10;

    const int c1 = 10; // 컴파일 시간 상수. 배열 크기로 사용 가능
    const int c2 = n; // 실행 시간 상수. 배열 크기 안 됨

    // const
    // 컴파일 시간 상수와 실행시간 상수로 만들 수 있음
    // 변수 값으로 초기화 할 수 있음

    constexpr int c3 = 10; // ok
    constexpr int c4 = n; // error

    // constexpr
    // 컴파일 시간 상수만 만들 수 있음
    // 컴파일 시간에 계산될 수 있는 값으로만 초기화 가능
    // template 인자로 사용될 수 있음

}