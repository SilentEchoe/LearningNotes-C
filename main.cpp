#include <iostream>
#define Log(x) std::cout << x << std::endl

int main()
{
    int a = 1;
    int *prt = &a;
    *prt = 2;
    Log(a);

    return 0;
    \
}