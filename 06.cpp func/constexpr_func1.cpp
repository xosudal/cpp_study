template<typename T, int N>
struct Buffer
{
    T data[N];
};

constexpr int add (int a, int b)
{
    return a + b;
}

int main()
{
    int x = 1;
    int y = 2;

    int n1 = add(1, 1); // 컴파일 시간에 함수를 실행
    int n2 = add(x, y); // 실행 시간에 함수를 실행

    Buffer<int, 1024> b1;
    Buffer<int, x> b2; // error. 모든 템플릿 인자는 컴파일 시간에 결정 되어야 함
    Buffer<int, add(1,2)> b3;
    Buffer<int, add(x,y)> b4; // error
}

// constexpr
// 1. constexpr 상수
// 2. constexpr 함수
// 함수의 인자값을 컴파일 시간에 결정할 수 있으면 컴파일 시간에 함수를 실행

// 3. if constexpr

