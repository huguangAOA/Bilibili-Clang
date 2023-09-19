/*************************************************************************
	> File Name: test3.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int add(int, int);

int main() {
    int a = 123, b = 456;
    printf("a + b = %d\n", a + b);
    printf("add(%d, %d) = %d\n", a, b, add(a, b));
    return 0;
}
