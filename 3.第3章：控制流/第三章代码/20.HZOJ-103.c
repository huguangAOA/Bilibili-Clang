/*************************************************************************
	> File Name: 20.HZOJ-103.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s\n", a % b == 0 ? "YES" : "NO");
    return 0;
}
