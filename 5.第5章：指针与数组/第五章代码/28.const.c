/*************************************************************************
	> File Name: 28.const.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    const int a = 123;
    const int b = 456;
    const int *p1 = &a;
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);
    int const *p2 = &a;
    int n = 789, m = 1000;
    int *const p3 = &n;
    p3 = &m;
    return 0;
}
