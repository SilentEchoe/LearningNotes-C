#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line length */
#include <strop/readlines.h>
char *lineptr[MAXLINE];
void qsort(char *lineptr[],int  left,int  right);


int main(int argc, char *argv[]) {
    int nlines;

    if ((nlines == readlines(lineptr,MAXLINE)) >= 0){
        qsort(lineptr,0,nlines-1);
        writelines(lineptr,nlines);
        return 0;
    } else{
        printf("error:input too big to sort\n");
        return 1;
    }
}





