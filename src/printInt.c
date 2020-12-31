//
// Created by kai_wang on 2020/12/31.
//

#include <stdio.h>
#include <assert.h>
#include <strop/printint.h>
// 宏可是会翻车的喔，看看这个链接 https://stackoverflow.com/a/7186517/6617295
// 翻车的原因类似于 SQL 注入，宏是文本替换，多了什么奇怪的符号，结果就失误了，然后编译器不会告诉你
// 如果 array 是 NULL，你这里就扑街了，结果是 01234567
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof((array)[0]));}

int print_int_attr(int arr[]){
    int len;
    GET_ARRAY_LEN(arr,len);
    for (int i = 0; i < len; ++i) {
        printf("%d",arr[i]);
    }
}

int new_print_int_attr(int *arr){
    printf("%d", *arr);
}