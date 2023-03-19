#include <iostream>
#include "Log.h"

void Log(const char *messages)
{
    std::cout << messages << std::endl;
}

int main()
{

    const char *prt = nullptr;
    if (prt == nullptr)
    {
        Log("prt is null");
    }
    else
    {
        Log("prt not is null");
    };
    return 0;
};