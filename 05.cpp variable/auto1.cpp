int main()
{
    // auto : 우변의 type을 보고 좌변의 type을 결정해라
    int x[5] = {1,2,3,4,5};

    auto n1 = x[0];

    decltype(n1) n3; // 괄호 안의 type을 n3 타입으로 결정

    // 변수의 타입을 컴파일러가 결정하는 문법


    //auto
    // 우 변의 수식으로 좌변의 타입을 결정. 반드시 초기값이 필요함

    //decltype
    // 괄호 안의 표현식을 가지고 타입을 결정. 초기값이 없어도 됨
}