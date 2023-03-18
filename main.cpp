#include <iostream>
#include "Log.h"

void Log(const char* messages){
    std::cout << messages <<  std::endl;
}

int main() {
    Log("test");
    return 0;
};