template <typename T>
T square(T a)
{
    return a*a;
}

char square(char) = delete; // 함수 삭제

int main()
{
    square(3);
    square(3.3);
    square('a');
}

// 암시적변환에 의한 의도 하지 않은 호출 막기위해
// 템플릿이 특정 타입의 함수를 생성하지 못하게
// 컴파일러가 자동으로 생성하는 멤버함수를 사용하지 못하게
