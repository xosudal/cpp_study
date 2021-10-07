void setAlarm(int h, int m = 0, int s = 0) // 인자를 전달하지 않으면 0으로 default로 사용
{
    //...
}

// default parameter
// 함수 호출 시 인자를 전달하지 않으면 미리 지정된 값으로 사용

// 함수의 마지막 인자부터 차례대로 default 값을 지정해야함

// 함수 선언과 구현으로 분리할 경우 함수 선언부에만 default 값을 표기

int main()
{
    setAlarm(3,4,5);

    setAlarm(3,0,0);
    setAlarm(3); // 3, 0, 0
    setAlarm(3, 1); // 3, 1, 0
}