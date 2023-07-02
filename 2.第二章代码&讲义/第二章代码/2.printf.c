/*************************************************************************
	> File Name: 2.printf.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n1, n2;
    n1 = printf("hello world\n");
    printf("%d\n", '\n');
    int a = 123;
    n2 = printf("hello world : %d\n", a);
    printf("n1 = %d, n2 = %d\n", n1, n2);
    return 0;
}
