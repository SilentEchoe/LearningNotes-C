#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* maximum input line length */
#include <strop/readlines.h>

char *lineptr[MAXLINE];

void qsort(char *v[], int left, int right);
void qsort(char *v[], int left, int right)
{
    int i, last;
    void swap(char *v[], int i, int j);
    if (left >= right) /* do nothing if array contains */
        return; /* fewer than two elements */
    swap(v, left, (left + right)/2);
    last = left;
    for (i = left+1; i <= right; i++)
        if (strcmp(v[i], v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last -1);
}

int main(int argc, char *argv[]) {
    int nlines;

    if ((nlines == readlines(lineptr,MAXLINE)) >= 0){
        //qsort(lineptr,0,nlines-1);
        writelines(lineptr,nlines);
        return 0;
    } else{
        printf("error:input too big to sort\n");
        return 1;
    }
}








