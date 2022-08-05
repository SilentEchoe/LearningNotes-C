#include <stdio.h>
#include <string.h>


struct fraction {
    int numerator;
    int denominator;
};

int main(void) {
    char s[] = "Goats!";
    char t[100];
    memcpy(t, s, sizeof(s));  // 拷贝7个字节，包括终止符
    printf("%s\n", t);  // "Goats!"

    struct fraction f1;
    f1.denominator = 22;
    f1.numerator = 7;

    return 0;
}




