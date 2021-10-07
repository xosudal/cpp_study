void foo(const int s)
{
    int arr[s]; // error
}

int main()
{
    const int c1 = 10;
    c1 = 10; // error

    constexpr int c2 = 10; // 컴파일 시간 상수를 만드는 키워드. 컴파일 시간에 결정되는 상수 값으로만 초기화 가능 c+11 도입
    c2 = 10; // error



    int arr1[10];

    int s1 = 10;
    int arr2[s1]; // g++ ok. cl error

    const int s2 = 10; // 컴파일 시간에 알 수 있는 상수
    int arr3[s2]; // ok

    const int s3 = s1; // 컴파일 시간에 알 수 없는 상수
    int arr4[s3]; // error

    // 둘다 실행하면서 값을 바꾸지 못한다는 것은 같지만 컴파일 시간에 변수를 알 수 있을지에 대한 여부가 다름
}

