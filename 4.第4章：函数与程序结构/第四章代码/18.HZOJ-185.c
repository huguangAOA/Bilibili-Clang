/*************************************************************************
	> File Name: 18.HZOJ-185.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    if (n <= 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}
