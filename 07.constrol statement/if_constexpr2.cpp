template<typename T>
void foo(T a)
{
    //if (0)
    if constexpr (0)
        *a = 0;
}

int main()
{
    int n = 0;

    foo(&n); // T : int*
    foo(n); // T : int
}
// 함수 템플릿 만들 시 조건에 따라 특정 코드 생성 제어