struct Point
{
    int x;
    int y;
};

void foo(int n) {}
void goo(Point p) {}

int main()
{
    int n = {10};

    foo(10);
    foo({10}); // 함수 인자로 중괄호를 사용해서 초기 값 전달 가능

    goo({1,2});


    int n1 = {0}; // 복사 초기화 (=을 이용해서)
    int n2{0}; // 직접 초기화 (괄호를 이용해서)
}