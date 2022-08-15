#include <stdio.h>
#include <string.h>

union quantity {
    short count;
    float weight;
    float volume;
};

int main(void) {
    // 写法一
    union quantity q;
    q.count = 4;

    // 写法二
    union quantity q1 = {.count = 4};

    // 写法三
    // 不指定属性名，默认赋给第一个属性
    union  quantity q2 = {4};


    return 0;
}




