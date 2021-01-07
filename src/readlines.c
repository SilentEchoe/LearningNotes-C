//
// Created by kai_wang on 2021/1/7.
//
#include <strop/readlines.h>
#define  MAXLEN 1000
int getline(char *,int );
char *alloc(int);


void strcpy_(char  *s,char *t){
    while (*s++ = *t++);
}

int  readlines(char *lineptr[],int maxlines){
    int len,nlines;
    char *p,line[MAXLEN];

    nlines = 0;
    while ((len = getline(line,MAXLEN)) > 0)
        if (nlines >= maxlines || p = alloc(len) == NULL)
            return -1;
        else{
            line[len-1] = '\0';
            strcpy_(p,line);
            lineptr[nlines++] = p;
        }
}

void writelines(char *lineptr[],int nlines){
    int i;

    for (i = 0; i < nlines ; ++i) {
        printf("%s\n",lineptr[i]);
    }
}