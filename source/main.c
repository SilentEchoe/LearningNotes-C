#include <stdio.h>
#include <malloc.h>
#include "../include/string.h"

int main(int argc, char *argv[]) {
    const char *source = argv[1];
    // TODO: malloc 这里多分配了好几个字符，其实可以避免的。
    char *pattern = malloc(sizeof(char) * str_len(argv[1]));
    get_arg(source, pattern);
    printf("str len : %i", str_len(pattern));
}




