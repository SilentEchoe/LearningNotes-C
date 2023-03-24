#include <iostream>
#include "Log.h"

void Log(const char *messages)
{·
    std::cout << messages << std::endl;
}

int main()
{
    // 创建一个空指针

    int var = 8;
    void* ptr_nil = &var;
 

    return 0;
};