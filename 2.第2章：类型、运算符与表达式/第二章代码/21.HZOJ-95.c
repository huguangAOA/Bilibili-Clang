/*************************************************************************
	> File Name: 21.HZOJ-95.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    int shi, ge;
    shi = a / 10;
    ge  = a % 10;
    b = 10 * ge + shi;
    printf("%d\n", b);
    return 0;
}
