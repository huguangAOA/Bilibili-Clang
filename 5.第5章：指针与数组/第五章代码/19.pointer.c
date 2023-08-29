/*************************************************************************
	> File Name: 19.pointer.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int *p1;
    double *p2;
    char *p3;
    int a = 123;
    double b = 45.6;
    char c = 'h';
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("p1 = %p, &a = %p\n", p1, &a);
    printf("p2 = %p, &b = %p\n", p2, &b);
    printf("p3 = %p, &c = %p\n", p3, &c);
    printf("*p1 = %d\n", *p1);
    printf("*p2 = %lf\n", *p2);
    printf("*p3 = %c\n", *p3);
    return 0;
}
