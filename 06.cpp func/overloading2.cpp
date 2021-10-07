void f1(int a) {}
void f2(double d) {}

void f2(int a) {}
void f2(int a, int b) {}

void f3(int a) {}
void f3(int a, int b = 0) {} // error. 개수가 달라도 디폴트 값이 있는 경우 주의해야함
// f3(10) -> error

int f4(int a) { return 0;}
double f4(int a) {return 0;} // error

void f5(int n) {}
void f5(char* s) {}

f5(0); // f5(int); 에러가 있는 것은 아니지만 정수 타입과 포인터 타입에 대한 오버로딩은 사용하지 않는 것이 좋음
f5(nullptr); // f5(char*), c++ 11

