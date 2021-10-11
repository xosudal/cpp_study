//int square(int a)
auto square(int a) -> int
{
    return a*a;
}
// 후위 반환 타입
// trailing return type or suffix return type
// c+11부터 지원
// 람다 or 함수 템플릿 만들 때 주로 사용

int main()
{
    square(3);
}

//후위 반환 타입 표기법이 필요한 경우

template<typename T1, typename T2>
?? add(T1 a, T2 b)
// 1. decltype(a+b) add(T1 a, T2 b) -> complie error
// 변수 사용이 선언부 보다 앞에 있으므로 에러 발생
// 2. auto add(T1 a, T2 b) -> decltype(a+b) 
{
    return a + b;
}

int main()
{
    add(1, 2.1);
}