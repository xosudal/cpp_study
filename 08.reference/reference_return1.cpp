struct Point
{
    int x;
    int y;
};

void f1(Point pt) {} // 복사본 생성
void f2(Point& pt) {} // 복사본 생성 X

Point pt = {0, 0};

//Point foo() // 값 타입 반환 return by value
// 반환 타입이 값 타입이기 때문에 return은 임시객체가 리턴됨
Point& foo() // 직접 pt를 반환하게 됨 return by reference
{
    return pt;
}

int main()
{
    foo().x = 10; // 값 타입이면 에러
}