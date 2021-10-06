
// 구조체 멤버 초기화 가능
struct Point
{
    int x = 0;
    int y = 1;
};

int main()
{
    if (1) {}

    int n = 0; // 함수의 중간에서 변수 선언 가능

    //struct Point p;

    Point p; // 구조체 사용 시 struct 표기 하지 않아도 됨

    int n1 = 0b10; // 이진수 표현.
    int n2 = 1'000'000; // '은 자리수 표기 가능

    bool b = true; // false

    long long n3 = 10; // 64bit integer
}