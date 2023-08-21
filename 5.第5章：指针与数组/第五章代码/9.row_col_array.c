/*************************************************************************
	> File Name: 9.row_col_array.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[10][10];
    printf("&a[0][0] = %p\n", &a[0][0]);
    printf("&a[0][1] = %p\n", &a[0][1]);
    printf("&a[1][0] = %p\n", &a[1][0]);
    return 0;
}
