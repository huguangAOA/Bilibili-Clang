/*************************************************************************
	> File Name: 28.HZOJ-136.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 7; i <= n; i += 7) {
        printf("%d\n", i);
    }
    return 0;
}
