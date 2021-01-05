//
// Created by kai_wang on 2021/1/4.
//
#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

// 指针与整数之间不能互相转化，但0是唯一的例外;
// 常量 0 可以赋值给指针，指针也可以和常量 0 进行比较。


char *alloc(int  n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n){
        allocp += n;
        return allocp - n;
    } else{
        return 0;
    }
}

void afree(char *p){
    if (p >= allocbuf && P < allocbuf + ALLOCSIZE )
        allocp = p;
}
