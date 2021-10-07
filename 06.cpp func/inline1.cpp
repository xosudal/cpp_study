int add1(int a, int b)
{
    return a+b;
}

// 함수 호출 시 함수로 이동하지 않고 함수의 기계어 코드로 치환
// 장점 : 실제 함수호출보다 빠르다
// 단점 : 치환되는 함수가 큰 경우 목적코드가 커질 수 있음

inline int add2(int a, int b)
{
    return a+b;
}

int main()
{
    int n1 = add1(1,2); // 호출
    int n2 = add2(1,2); // 치환
}

// inline function의 실제 치환 여부는 컴파일러의 종류와 옵션에 따라 달라질 수 있음
