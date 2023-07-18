/*************************************************************************
	> File Name: 10.do_while.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, m = 0;
    scanf("%d", &n);
    do {
        n /= 10;
        m += 1;
    } while (n);
    printf("digits : %d\n", m);
    return 0;
}
