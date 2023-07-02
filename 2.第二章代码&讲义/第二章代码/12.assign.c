/*************************************************************************
	> File Name: 12.assign.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 1, b = 2, c = 3, d = 4;
    a = b = c = d;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    return 0;
}
