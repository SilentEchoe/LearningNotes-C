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

    int count = 5;

    for (size_t i = 0; i < count; i++)
    {
      Log("output");
    }
    
    

    return 0;
};