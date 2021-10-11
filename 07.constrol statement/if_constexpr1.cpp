// template 만들 때 주로 사용
// c++17부터 지원함
int main()
{
    int n = 0;
    if (n == 0)
    {
        //...
    }
    
    // 컴파일 시간에 조건식을 조사함
    // static if라고도 불림
    if constexpr (n == 0) // error
    {

    }

    if constexpr (sizeof(n) == 0) // ok..
    {

    }
}