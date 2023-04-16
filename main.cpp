#include <iostream>
#define LOG(x) std::cout << x << std::endl

int main()
{

    int var = 8;
    int *ptr = &var;
    *ptr = 10;

    // 创建引用ref 并将其绑定到变量a, 从此ref就是a的别名, 两者的值是一样的,实际上ref并不存在,它只存在于我们的源码中

    int a = 5;
    int &ref = a;

    ref = 2;

    LOG(ref);
    return 0;
};