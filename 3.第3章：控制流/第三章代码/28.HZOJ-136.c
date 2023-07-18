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
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) printf("%d\n", i);
    }
    return 0;
}
