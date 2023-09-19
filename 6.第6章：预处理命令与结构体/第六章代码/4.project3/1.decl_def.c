/*************************************************************************
	> File Name: 4.decl_def.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int add(int, int);

extern int c, d;

int main() {
    int a = 1, b = 2;
    printf("a + b + c + d = %d\n", a + b + c + d);
    return 0;
}

int add(int a, int b) {
    return a + b;
}
