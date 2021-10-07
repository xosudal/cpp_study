// 구현이 동일하거나 유사한 함수
// 컴파일러가 함수를 생성하게 끔 하자
// 컴파일러가 함수를 생성할 때 사용할 함수의 틀(template)이 있어야함

template<typename T> // template parameter, 함수가 생성되는 과정을 template instantiation
//template <class T> 완벽히 같은 내용
T square(T a)        // call parameter
{
    return a*a;
}

int main()
{
    square<double>(3.3); // double square(double a) 함수 생성
    square<int>(3); // int square(int a) 함수 생성

    // 타입을 명시적으로 지정하지 않으면 함수 호출 인자를 보고 컴파일러가 결정함 (type deduction)
    //square(3); 
    //square(3.3);
}
