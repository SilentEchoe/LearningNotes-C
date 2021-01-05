#include <strop/string.h>
#include <strop/printint.h>
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
#define max(A,B) ((A) > (B) ? (A):(B))

const char pattern[] = "ould";


int main(int argc, char *argv[]) {
    int a = 1;
    int *b;
    b = &a;
    *b = *b + 10;
    printf ("b的值为： %d ",*b);
    printf("b的内存地址为： %d ",b);
    printf("a的值为： %d ",a);






////    const char *source = argv[1];
//// TODO: malloc 这里多分配了好几个字符，其实可以避免的。
////    char *pattern = malloc(sizeof(char) * str_len(argv[1]));
////    get_arg(source, pattern);
////    printf("str len : %i", str_len(pattern));
//    char line[MAXLINE];
//    int found = 0;
//
//    while (getline_(line, MAXLINE) > 0)
//        if (NewStr_index(line, pattern) >= 0) {
//            printf("%s", line);
//            found++;
//        }
//    return found;

}





