#include <stdio.h>
#include <string.h>
#define SQUARE(X) X*X
#define EXTRA_HAPPY



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

    printf("count is %i\n",q.count);
    printf("weight is %f\n",q.weight);

    printf("%d\n", SQUARE(3+2));

#ifdef EXTRA_HAPPY
    printf("I'm extra happy!\n");
#endif

    return 0;
}




