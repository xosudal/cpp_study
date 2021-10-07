
int square(int a)
{
    return a*a;
}

double square(double a)
{
    return a*a;
}

int main()
{
    square(3);
    square(3.3);
}
// 함수 overloading 시 인자의 개수 혹은 타입이 달라야함
// 일관된 형태의 라이브러리를 구축할 수 있음

