#include <stdio.h>
#include <malloc.h>
#include <strop/string.h>

#define MAXLINE 1000 /* maximum input line length */

int getline_(char line[], int max);

int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(int argc, char *argv[]) {

//    const char *source = argv[1];
//    // TODO: malloc 这里多分配了好几个字符，其实可以避免的。
//    char *pattern = malloc(sizeof(char) * str_len(argv[1]));
//    get_arg(source, pattern);
//    printf("str len : %i", str_len(pattern));
    char line[MAXLINE];
    int found = 0;

    while (getline_(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;

}

int getline_(char s[], int lim) {
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[]) {
    int i, j, k;
    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}




