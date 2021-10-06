int main()
{
    int n1 = 10;

    auto a1 = n1; // int

    decltype(n1) d1; //int

    int x[3] = {1,2,3}; // int[3]

    auto a2 = x; // 1. int a2[3] = x; 라고 추론하면 error
                 // 2. int* a2 = x; 라고 하면 ok

                 // 우변이 배열이면 포인터 타입으로 결정됨

    decltype(x) d2; // int d2[3] 로 추론함

    decltype(x) d3 = x; // int d3[3] = x; 컴파일 에러

    int y[2] = {1,2};

    auto a4 = y[0]; // int

    decltype(y[0]) d4; // complie error.. int가 아니고 int&로 결정됨
}