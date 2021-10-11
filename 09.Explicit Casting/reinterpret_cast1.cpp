int main()
{
    // reinterpert cast의 용도
    // 서로 다른 타입의 포인터 사이의 변환
    // 정수와 포인터 사이의 변환
    int n = 10;

    double* p1 = reinterpret_cast<double*>(&n);
    // 이후 사용 조심해야함


    int* p2 = reinterpret_cast<int*>(10);


    // const cast
    // 포인터 변수와 참조 변수 사이의 상수성과 volatile 속성을 제거하기 위함

    const int c = 10;
    volatile int v = 20;

    int n = c;

    int* p1 = const_cast<int*>(&c);
    int* p2 = const_cast<int*>(&v);

    // error. 다른 일은 불가함
    double* p3 = const_cast<double*>(&c);
}