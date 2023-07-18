/*************************************************************************
	> File Name: 2.and_or.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a < b && printf("YES\n");
    !(a < b) && printf("NO\n");
    return 0;
}
