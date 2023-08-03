/*************************************************************************
	> File Name: 4.param.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

void test(int a, int b) {
    a += 1;
    b *= 2;
    printf("test: a = %d, b = %d\n", a, b);
    return ;
}

int main() {
    int a = 1, b = 2;
    test(a, b);
    printf("main: a = %d, b = %d\n", a, b);
    test(b, a);
    printf("main: a = %d, b = %d\n", a, b);
    return 0;
}
