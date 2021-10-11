void foo(int) = delete; // 함수 삭제

int main()
{
    foo(10); // 컴파일 에러
}

// 삭제된 함수를 호출하면 컴파일 시간에 오류
// 암시적 형변환으로 인해 컴파일이 될 수 있으므로
// 에러 방지를 위해 함수 삭제 기능 지원

// 함수를 제공하지 않는 것과 삭제의 차이
// 함수 제공 X
// 함수 호출 시 인자의 암시적 형 변환을 통해서 호출 가능한 함수를 찾게됨


int gcd(int a, int b)
{
    return b != 0 ? gcd(b, a%b) : a;
}

// 방법 1
double gcd(double a, double b); // 함수 선언만 해서 해결. link error 발생

// 방법 2
double gcd(double a, double b) = delete; // 컴파일 time에 error 발생


int main()
{
    gcd(2, 10); // ok

    gcd(2.2, 4.3); // gcd(double, double)
    // 암시적 형변환으로 인해 컴파일이 됨
}