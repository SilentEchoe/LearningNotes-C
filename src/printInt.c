//
// Created by kai_wang on 2020/12/31.
//

#include <stdio.h>
#include <assert.h>
#include <strop/printint.h>
#define GET_ARRAY_LEN(array,len){len = (sizeof(array) / sizeof(array[0]));}

int print_int_attr(int arr[]){
    int len = sizeof (arr) / sizeof (arr[0]);;
    //GET_ARRAY_LEN(arr,len);
    printf("%d /n",len);

    for (int i = 0; i < 10; ++i) {
        printf("%d",arr[i]);
    }
}

int new_print_int_attr(int *arr){
    printf("%d", *arr);
}