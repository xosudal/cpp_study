void foo(int a = 0, int b) {} // error

void goo(int a = 0, int b = 0); // ok

int main()
{
    foo(10);

    goo(1, 2);

    goo (1);

    goo ();
}

void goo(int a, int b) // 구현부에 표기하면 안되고 선언부에만 표기해야함
{
}


void f1(int a, int b, int c = 0) {} // ok
void f2(int a, int b = 0, int c = 0) {} // ok
void f3(int a = 0, int b = 0, int c = 0) {} // ok

void f4(int a, int b = 0, int c) {} // error
void f5(int a = 0, int b, int c) {} // error
void f4(int a = 0, int b = 0, int c) {} // error




