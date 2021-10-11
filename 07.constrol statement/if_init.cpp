int foo() { return -1;}

// c++ 17부터 지원함

int main()
{
    /*int ret = foo();

    if (ret == -1)
    {
        // ...
    }*/

    if (int ret = foo(); ret == -1)
    {

    } // ret의 수명은 if문까지

    /*int n = foo();
    switch(n)
    {
        case 10: break;
        case 20: break;
    }*/

    switch(int n = foo(); n)
    {
        case 10: break;
        case 20: break;
    }
}