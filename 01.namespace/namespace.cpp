#include <stdio.h>

namespace Audio
{
    void init()
    {
        printf("Audio init!\n");
    }
    void reset()
    {
        printf("Audio reset!\n");

    }
}


void init()
{
    printf("System init!\n");
}

int main()
{
    init();
    
    // 한정된 이름 선언
    Audio::init();

    // using 선언
    using Audio::init;
    init();
    //reset(); // error

    // using 지시어 사용
    // 함수 안 밖에서 만들 수 있음
    using namespace Audio;
    init(); // 이름충돌이 발생할 수 있음
            // 이 순간 ::init()을 호출하면 global init을 호출함
    reset();

    return 0;
}